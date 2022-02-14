
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {int dummy; } ;
struct refspec_item {char* dst; } ;


 int FUNC_0 (struct refspec_item*,int ,int) ;
 int FUNC_1 (struct remote*,struct refspec_item*) ;

__attribute__((used)) static int FUNC_2(struct remote *VAR_0, void *VAR_1)
{
 char *VAR_2 = VAR_1;
 struct refspec_item VAR_3;
 FUNC_0(&VAR_3, 0, sizeof(struct refspec_item));
 VAR_3.dst = VAR_2;
 return !FUNC_1(VAR_0, &VAR_3);
}
