
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int aux; } ;
struct intel_digital_port {TYPE_1__ dp; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int*,int) ;

__attribute__((used)) static
int FUNC_2(struct intel_digital_port *VAR_3,
     bool *VAR_4)
{
 ssize_t VAR_5;
 u8 VAR_6;
 VAR_5 = FUNC_1(&VAR_3->dp.aux, VAR_0,
          &VAR_6, 1);
 if (VAR_5 != 1) {
  FUNC_0("Read bstatus from DP/AUX failed (%zd)\n", VAR_5);
  return VAR_5 >= 0 ? -VAR_2 : VAR_5;
 }
 *VAR_4 = VAR_6 & VAR_1;
 return 0;
}
