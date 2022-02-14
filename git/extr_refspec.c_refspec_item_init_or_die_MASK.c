
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct refspec_item*,char const*,int) ;

void FUNC_3(struct refspec_item *VAR_0, const char *VAR_1,
         int VAR_2)
{
 if (!FUNC_2(VAR_0, VAR_1, VAR_2))
  FUNC_1(FUNC_0("invalid refspec '%s'"), VAR_1);
}
