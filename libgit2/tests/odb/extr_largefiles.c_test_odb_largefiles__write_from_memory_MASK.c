
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_4__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int FUNC_6 (int *,char*) ;
 int VAR_2 ;

void FUNC_7(void)
{
 git_oid VAR_3, VAR_4;
 git_buf VAR_5 = VAR_0;
 size_t VAR_6;


 FUNC_3();


 if (!FUNC_2("GITTEST_INVASIVE_FS_SIZE") ||
  !FUNC_2("GITTEST_INVASIVE_MEMORY") ||
  !FUNC_2("GITTEST_SLOW"))
  FUNC_3();

 for (VAR_6 = 0; VAR_6 < (3041*126103); VAR_6++)
  FUNC_1(FUNC_4(&VAR_5, "Hello, world.\n"));

 FUNC_6(&VAR_3, "3fb56989cca483b21ba7cb0a6edb229d10e1c26c");
 FUNC_1(FUNC_5(&VAR_4, VAR_2, VAR_5.ptr, VAR_5.size, VAR_1));

 FUNC_0(&VAR_3, &VAR_4);
}
