
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;
struct err_reg_info {scalar_t__ handler; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,unsigned int) ;
 int FUNC_1 (struct hfi1_devdata*,int ,struct err_reg_info const*) ;
 struct err_reg_info* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_1, unsigned int VAR_2)
{
 const struct err_reg_info *VAR_3 = &VAR_0[VAR_2];

 if (VAR_3->handler) {
  FUNC_1(VAR_1, 0, VAR_3);
 } else {
  FUNC_0(VAR_1, "Unexpected misc interrupt (%u) - reserved\n",
      VAR_2);
 }
}
