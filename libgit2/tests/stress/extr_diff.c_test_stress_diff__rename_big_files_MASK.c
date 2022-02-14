
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int git_index ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int) ;

void FUNC_11(void)
{
 git_index *VAR_2;
 char VAR_3[64];
 int VAR_4, VAR_5;
 git_buf VAR_6 = VAR_0;

 VAR_1 = FUNC_2("renames");

 FUNC_1(FUNC_7(&VAR_2, VAR_1));

 for (VAR_4 = 0; VAR_4 < 100; VAR_4 += 1) {
  FUNC_8(VAR_3, sizeof(VAR_3), "renames/newfile%03d", VAR_4);
  for (VAR_5 = VAR_4 * 256; VAR_5 > 0; --VAR_5)
   FUNC_4(&VAR_6, "more content %d\n", VAR_4);
  FUNC_0(VAR_3, VAR_6.ptr);
 }

 for (VAR_4 = 0; VAR_4 < 100; VAR_4 += 1) {
  FUNC_8(VAR_3, sizeof(VAR_3), "renames/newfile%03d", VAR_4);
  FUNC_1(FUNC_5(VAR_2, VAR_3 + FUNC_9("renames/")));
 }

 FUNC_3(&VAR_6);
 FUNC_6(VAR_2);

 FUNC_10(100);
}
