
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int from; int flags; int to; } ;
typedef TYPE_1__ git_revspec ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *,char const*) ;
 int FUNC_6 (TYPE_1__*,int,int) ;
 char* FUNC_7 (char const*,char*) ;

int FUNC_8(
 git_revspec *VAR_5,
 git_repository *VAR_6,
 const char *VAR_7)
{
 const char *VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_5 && VAR_6 && VAR_7);

 FUNC_6(VAR_5, 0x0, sizeof(*VAR_5));

 if ((VAR_8 = FUNC_7(VAR_7, "..")) != ((void*)0)) {
  char *VAR_10;
  const char *VAR_11;
  VAR_5->flags = VAR_3;







  if (!FUNC_2(VAR_7, "..")) {
   FUNC_4(VAR_1, "Invalid pattern '..'");
   return VAR_0;
  }

  VAR_10 = FUNC_3(VAR_7, VAR_8 - VAR_7);
  VAR_11 = VAR_8 + 2;
  if (VAR_8[2] == '.') {
   VAR_5->flags |= VAR_2;
   VAR_11++;
  }

  VAR_9 = FUNC_5(
   &VAR_5->from,
   VAR_6,
   *VAR_10 == '\0' ? "HEAD" : VAR_10);

  if (!VAR_9) {
   VAR_9 = FUNC_5(
    &VAR_5->to,
    VAR_6,
    *VAR_11 == '\0' ? "HEAD" : VAR_11);
  }

  FUNC_1((void*)VAR_10);
 } else {
  VAR_5->flags = VAR_4;
  VAR_9 = FUNC_5(&VAR_5->from, VAR_6, VAR_7);
 }

 return VAR_9;
}
