
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef scalar_t__ off_t ;
typedef enum STYLE { ____Placeholder_STYLE } STYLE ;
typedef int FILE ;







 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,scalar_t__) ;
 int FUNC_2 (int *,char const*,scalar_t__) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *,char const*,int,scalar_t__,struct stat*) ;

void
FUNC_5(FILE *VAR_0, const char *VAR_1, enum STYLE VAR_2, off_t VAR_3, struct stat *VAR_4)
{
 if (VAR_2 != 129 && VAR_3 == 0)
  return;

 if (FUNC_0(VAR_4->st_mode))
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
  switch(VAR_2) {
  case 132:
  case 130:
   FUNC_1(VAR_0, VAR_1, VAR_3);
   break;
  case 131:
  case 128:
   FUNC_2(VAR_0, VAR_1, VAR_3);
   break;
  case 129:
   FUNC_3(VAR_0, VAR_1);
   break;
  default:
   break;
  }
}
