
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int testfile ;
struct TYPE_8__ {char* ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int * VAR_2 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,char*) ;
 int FUNC_7 (TYPE_1__*,char) ;
 int FUNC_8 (TYPE_1__*,char*,int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (TYPE_1__*,char*) ;
 char** VAR_3 ;
 scalar_t__ FUNC_11 (char*,int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 (char*,char*) ;
 size_t FUNC_15 (char const*) ;
 int FUNC_16 (char*,char const*,int) ;

void FUNC_17(void)
{
 git_buf VAR_4 = VAR_0, VAR_5 = VAR_0;
 char VAR_6[16], VAR_7 = '0';
 char **VAR_8;
 const char *VAR_9 = "testfile";
 size_t VAR_10 = FUNC_15(VAR_9);

 FUNC_16(VAR_6, VAR_9, sizeof(VAR_6));
 FUNC_1(VAR_9, VAR_6);

 for (VAR_8 = VAR_3; *VAR_8 != ((void*)0); VAR_8++) {





  if (FUNC_11(*VAR_8, 0777) != 0) {
   *VAR_8 = "";
   continue;
  }

  FUNC_3(FUNC_8(&VAR_4, *VAR_8, ((void*)0)));





  VAR_6[VAR_10] = VAR_7++;
  FUNC_3(FUNC_6(&VAR_4, VAR_4.ptr, VAR_6));
  FUNC_2(VAR_4.ptr, "find me");
  FUNC_7(&VAR_4, '/');

  FUNC_0(
   VAR_1, FUNC_10(&VAR_5, VAR_6));

  FUNC_14("HOME", VAR_4.ptr);
  FUNC_13();

  FUNC_3(FUNC_10(&VAR_5, VAR_6));

  FUNC_4("HOME", VAR_2[0]);
  FUNC_13();

  FUNC_0(
   VAR_1, FUNC_10(&VAR_5, VAR_6));
  (void)FUNC_12(*VAR_8);
 }

 FUNC_5(&VAR_4);
 FUNC_5(&VAR_5);
}
