
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* line; int header; } ;
typedef TYPE_1__ parse_test_case ;
typedef int git_oid ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int *,char const**,char const*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (char const*) ;

void FUNC_5(void)
{
 git_oid VAR_2;

 parse_test_case *VAR_3;
 for (VAR_3 = VAR_1; VAR_3->line != ((void*)0); VAR_3++)
 {
  const char *VAR_4 = VAR_3->line;
  const char *VAR_5 = VAR_4 + FUNC_4(VAR_4);

  FUNC_2(FUNC_3(&VAR_2, &VAR_4, VAR_5, VAR_3->header));
  FUNC_0(VAR_4 == VAR_5);
 }

 for (VAR_3 = VAR_0; VAR_3->line != ((void*)0); VAR_3++)
 {
  const char *VAR_6 = VAR_3->line;
  const char *VAR_7 = VAR_6 + FUNC_4(VAR_6);

  FUNC_1(FUNC_3(&VAR_2, &VAR_6, VAR_7, VAR_3->header));
 }
}
