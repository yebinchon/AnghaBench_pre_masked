
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int dummy; } ;
struct msc_window {int dummy; } ;
struct msc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct msc* FUNC_0 (struct device*) ;
 struct msc_window* FUNC_1 (struct msc*,struct sg_table*,int) ;
 int FUNC_2 (struct msc_window*,int ,int ) ;

void FUNC_3(struct device *VAR_2, struct sg_table *VAR_3)
{
 struct msc *VAR_4 = FUNC_0(VAR_2);
 struct msc_window *VAR_5;

 if (!VAR_3)
  return;

 VAR_5 = FUNC_1(VAR_4, VAR_3, 0);
 if (!VAR_5)
  return;

 FUNC_2(VAR_5, VAR_0, VAR_1);
}
