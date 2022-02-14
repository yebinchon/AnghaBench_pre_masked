
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct devcd_entry {int del_wk; } ;


 struct devcd_entry* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct devcd_entry *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->del_wk);
 return 0;
}
