
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nullb_device {int badblocks; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,char*,int ) ;
 struct nullb_device* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 struct nullb_device *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(&VAR_2->badblocks, VAR_1, 0);
}
