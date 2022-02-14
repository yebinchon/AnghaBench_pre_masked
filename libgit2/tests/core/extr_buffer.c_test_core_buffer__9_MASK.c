
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sep ;
struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int b ;
typedef int a ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char,char*,char*) ;

void FUNC_3(void)
{
 git_buf VAR_1 = VAR_0;


 char *VAR_2[] = { "", "-", "a-", "-a", "-a-" };
 char *VAR_3[] = { "", "-", "b-", "-b", "-b-" };
 char VAR_4[] = { 0, '-', '/' };
 char *VAR_5[] = { "", "-", "a-", "-a", "-a-",
       "-", "--", "a--", "-a-", "-a--",
       "b-", "-b-", "a-b-", "-ab-", "-a-b-",
       "-b", "--b", "a--b", "-a-b", "-a--b",
       "-b-", "--b-", "a--b-", "-a-b-", "-a--b-" };
 char *VAR_6[] = { "", "-", "a-", "-a-", "-a-",
       "-", "-", "a-", "-a-", "-a-",
       "b-", "-b-", "a-b-", "-a-b-", "-a-b-",
       "-b", "-b", "a-b", "-a-b", "-a-b",
       "-b-", "-b-", "a-b-", "-a-b-", "-a-b-" };
 char *VAR_7[] = { "", "-/", "a-/", "-a/", "-a-/",
       "-", "-/-", "a-/-", "-a/-", "-a-/-",
       "b-", "-/b-", "a-/b-", "-a/b-", "-a-/b-",
       "-b", "-/-b", "a-/-b", "-a/-b", "-a-/-b",
       "-b-", "-/-b-", "a-/-b-", "-a/-b-", "-a-/-b-" };
 char **VAR_8[] = { VAR_5, VAR_6, VAR_7 };
 char VAR_9, **VAR_10;
 unsigned int VAR_11, VAR_12, VAR_13;

 for (VAR_11 = 0; VAR_11 < sizeof(VAR_4) / sizeof(char); ++VAR_11) {
  VAR_9 = VAR_4[VAR_11];
  VAR_10 = VAR_8[VAR_11];

  for (VAR_13 = 0; VAR_13 < sizeof(VAR_3) / sizeof(char*); ++VAR_13) {
   for (VAR_12 = 0; VAR_12 < sizeof(VAR_2) / sizeof(char*); ++VAR_12) {
    FUNC_2(&VAR_1, VAR_9, VAR_2[VAR_12], VAR_3[VAR_13]);
    FUNC_0(*VAR_10, VAR_1.ptr);
    VAR_10++;
   }
  }
 }

 FUNC_1(&VAR_1);
}
