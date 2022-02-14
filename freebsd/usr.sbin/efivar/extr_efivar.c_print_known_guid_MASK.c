
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uuid_table {char* uuid_str; char* name; } ;


 int FUNC_0 (struct uuid_table**) ;
 int FUNC_1 (char*,char*,char*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct uuid_table *VAR_0;
 int VAR_1, VAR_2;

 VAR_2 = FUNC_0(&VAR_0);
 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  FUNC_1("%s %s\n", VAR_0[VAR_1].uuid_str, VAR_0[VAR_1].name);
}
