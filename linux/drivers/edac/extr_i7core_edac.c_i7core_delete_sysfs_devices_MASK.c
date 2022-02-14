
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ctl_info {struct i7core_pvt* pvt_info; } ;
struct i7core_pvt {int addrmatch_dev; int chancounts_dev; int is_registered; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mem_ctl_info *VAR_0)
{
 struct i7core_pvt *VAR_1 = VAR_0->pvt_info;

 FUNC_1(1, "\n");

 if (!VAR_1->is_registered) {
  FUNC_0(VAR_1->chancounts_dev);
  FUNC_2(VAR_1->chancounts_dev);
 }
 FUNC_0(VAR_1->addrmatch_dev);
 FUNC_2(VAR_1->addrmatch_dev);
}
