
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuple_list {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct tuple_list*) ;
 int FUNC_2 (struct tuple_list*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 struct tuple_list* FUNC_5 (int) ;

__attribute__((used)) static void
FUNC_6(char *VAR_1)
{
 int VAR_2;
 struct tuple_list *VAR_3;

 VAR_2 = FUNC_3(VAR_1, VAR_0);
 if (VAR_2 < 0)
  return;
 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3) {
  FUNC_4("Configuration data for file %s\n",
      VAR_1);
  FUNC_1(VAR_3);
  FUNC_2(VAR_3);
 }
 FUNC_0(VAR_2);
}
