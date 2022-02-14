
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item {int dummy; } ;
struct nullb_device {struct config_item item; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct nullb_device* FUNC_2 () ;
 int VAR_1 ;

__attribute__((used)) static struct
config_item *FUNC_3(struct config_group *VAR_2, const char *VAR_3)
{
 struct nullb_device *VAR_4;

 VAR_4 = FUNC_2();
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_4->item, VAR_3, &VAR_1);

 return &VAR_4->item;
}
