
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum backup_type { ____Placeholder_backup_type } backup_type ;


 int FUNC_0 (char const*,int ) ;
 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 int VAR_2 ;

enum backup_type
FUNC_3(const char *VAR_3)
{
 int VAR_4;

 if (VAR_3 == ((void*)0) || *VAR_3 == '\0')
  return VAR_2;
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 if (VAR_4 >= 0)
  return VAR_1[VAR_4];
 FUNC_2("version control type", VAR_3, VAR_4);
 FUNC_1(2);
}
