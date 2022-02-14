
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_desc {int dummy; } ;
struct repository {int dummy; } ;


 int FUNC_0 (void*) ;
 void* FUNC_1 (struct repository*,struct tree_desc*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (struct tree_desc*,char*) ;
 int FUNC_3 () ;
 struct repository* VAR_1 ;
 int FUNC_4 (int ) ;

int FUNC_5(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 struct repository *VAR_5 = VAR_1;
 struct tree_desc VAR_6[3];
 void *VAR_7, *VAR_8, *VAR_9;

 if (VAR_2 != 4)
  FUNC_4(VAR_0);

 VAR_7 = FUNC_1(VAR_5, VAR_6+0, VAR_3[1]);
 VAR_8 = FUNC_1(VAR_5, VAR_6+1, VAR_3[2]);
 VAR_9 = FUNC_1(VAR_5, VAR_6+2, VAR_3[3]);
 FUNC_2(VAR_6, "");
 FUNC_0(VAR_7);
 FUNC_0(VAR_8);
 FUNC_0(VAR_9);

 FUNC_3();
 return 0;
}
