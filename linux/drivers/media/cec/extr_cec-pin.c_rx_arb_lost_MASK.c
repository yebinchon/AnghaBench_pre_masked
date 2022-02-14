
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ len; } ;
struct cec_pin {TYPE_1__ tx_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cec_pin*,int ,int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct cec_pin *VAR_2, u8 *VAR_3)
{
 return VAR_2->tx_msg.len == 0 &&
  FUNC_0(VAR_2, VAR_1,
        VAR_0, VAR_3);
}
