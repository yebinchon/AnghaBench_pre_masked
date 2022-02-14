
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int aux; } ;
struct intel_digital_port {TYPE_1__ dp; } ;
struct hdcp2_rep_send_receiverid_list {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,void*,int) ;

__attribute__((used)) static
ssize_t FUNC_3(struct intel_digital_port *VAR_6)
{
 u8 VAR_7[VAR_5];
 u32 VAR_8;
 ssize_t VAR_9;

 VAR_9 = FUNC_2(&VAR_6->dp.aux,
          VAR_0,
          (void *)VAR_7, VAR_5);
 if (VAR_9 != VAR_5)
  return VAR_9 >= 0 ? -VAR_1 : VAR_9;

 VAR_8 = (FUNC_0(VAR_7[0]) << 4 |
     FUNC_1(VAR_7[1]));

 if (VAR_8 > VAR_2)
  VAR_8 = VAR_2;

 VAR_9 = sizeof(struct hdcp2_rep_send_receiverid_list) -
  VAR_3 +
  (VAR_8 * VAR_4);

 return VAR_9;
}
