
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {size_t* msg; } ;
struct cec_pin {int* error_inj; int rx_bit; TYPE_1__ rx_msg; } ;


 size_t VAR_0 ;
 int VAR_1 ;

u16 FUNC_0(struct cec_pin *VAR_2)
{
 u16 VAR_3 = VAR_0;


 if (!(VAR_2->error_inj[VAR_3] & VAR_1) &&
     VAR_2->rx_bit >= 18)
  VAR_3 = VAR_2->rx_msg.msg[1];
 return (VAR_2->error_inj[VAR_3] & VAR_1) ? VAR_3 :
  VAR_0;
}
