
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int line ;
struct TYPE_9__ {char const* ptr; } ;
typedef TYPE_1__ git_buf ;
typedef int FILE ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (char*,int,int,int *) ;
 scalar_t__ FUNC_8 (char*,char*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char const*,char*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,char) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,char const*,int *) ;
 scalar_t__ FUNC_15 (char const*,int ) ;
 int FUNC_16 (char const*,char const*) ;
 int FUNC_17 (char*) ;
 int FUNC_18 (char*) ;

void FUNC_19(const char *VAR_2)
{
 git_buf VAR_3 = VAR_1, VAR_4 = VAR_1, VAR_5 = VAR_1;
 FILE *VAR_6, *VAR_7;
 char VAR_8[256];

 FUNC_1(FUNC_10(&VAR_3, VAR_2, "gitmodules"));
 FUNC_1(FUNC_10(&VAR_4, VAR_2, ".gitmodules"));

 FUNC_0((VAR_6 = FUNC_5(VAR_3.ptr, "rb")) != ((void*)0));
 FUNC_0((VAR_7 = FUNC_5(VAR_4.ptr, "wb")) != ((void*)0));

 while (FUNC_4(VAR_8, sizeof(VAR_8), VAR_6) != ((void*)0)) {
  char *VAR_9 = VAR_8;

  while (*VAR_9 == ' ' || *VAR_9 == '\t') VAR_9++;


  if (FUNC_8(VAR_9, "path =") == 0) {
   VAR_9 += FUNC_18("path =");
   while (*VAR_9 == ' ') VAR_9++;

   FUNC_10(&VAR_5, VAR_2, VAR_9);
   FUNC_13(&VAR_5);
   FUNC_10(&VAR_5, VAR_5.ptr, ".gitted");

   if (!FUNC_11(&VAR_5) && FUNC_15(VAR_5.ptr, VAR_0) == 0) {
    FUNC_10(&VAR_4, VAR_2, VAR_9);
    FUNC_13(&VAR_4);
    FUNC_10(&VAR_4, VAR_4.ptr, ".git");

    if (!FUNC_11(&VAR_4))
     FUNC_16(VAR_5.ptr, VAR_4.ptr);
   }
  }


  if (FUNC_8(VAR_9, "url =") != 0) {
   FUNC_6(VAR_8, VAR_7);
   continue;
  }


  VAR_9 += FUNC_18("url =");
  while (*VAR_9 == ' ') VAR_9++;

  if (*VAR_9 == '.') {
   FUNC_10(&VAR_5, VAR_2, VAR_9);
   FUNC_13(&VAR_5);
  } else if (!*VAR_9 || *VAR_9 == '\n') {
   FUNC_10(&VAR_5, VAR_2, "../testrepo.git");
  } else {
   FUNC_6(VAR_8, VAR_7);
   continue;
  }

  FUNC_14(&VAR_5, VAR_5.ptr, ((void*)0));
  FUNC_12(&VAR_5, '\n');
  FUNC_0(!FUNC_11(&VAR_5));

  FUNC_7(VAR_8, VAR_9 - VAR_8, sizeof(char), VAR_7);
  FUNC_6(VAR_5.ptr, VAR_7);
 }

 FUNC_3(VAR_6);
 FUNC_3(VAR_7);

 FUNC_2(FUNC_17(VAR_3.ptr));

 FUNC_9(&VAR_3);
 FUNC_9(&VAR_4);
 FUNC_9(&VAR_5);
}
