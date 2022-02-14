
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int aux; } ;
struct intel_digital_port {TYPE_1__ dp; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int *,int) ;

__attribute__((used)) static
int FUNC_3(struct intel_digital_port *VAR_4,
        int VAR_5, u32 *VAR_6)
{
 ssize_t VAR_7;

 if (VAR_5 >= VAR_0)
  return -VAR_2;

 VAR_7 = FUNC_2(&VAR_4->dp.aux,
          FUNC_0(VAR_5), VAR_6,
          VAR_1);
 if (VAR_7 != VAR_1) {
  FUNC_1("Read v'[%d] from DP/AUX failed (%zd)\n", VAR_5, VAR_7);
  return VAR_7 >= 0 ? -VAR_3 : VAR_7;
 }
 return 0;
}
