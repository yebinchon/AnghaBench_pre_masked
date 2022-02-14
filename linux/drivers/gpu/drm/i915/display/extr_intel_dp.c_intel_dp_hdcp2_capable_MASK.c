
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int aux; } ;
struct intel_digital_port {TYPE_1__ dp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,int ,scalar_t__*,int) ;

__attribute__((used)) static
int FUNC_2(struct intel_digital_port *VAR_4,
      bool *VAR_5)
{
 u8 VAR_6[3];
 int VAR_7;

 *VAR_5 = 0;
 VAR_7 = FUNC_1(&VAR_4->dp.aux,
          VAR_0,
          VAR_6, VAR_2);
 if (VAR_7 != VAR_2)
  return VAR_7 >= 0 ? -VAR_1 : VAR_7;

 if (VAR_6[0] == VAR_3 &&
     FUNC_0(VAR_6[2]))
  *VAR_5 = 1;

 return 0;
}
