
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct stat {int st_mode; } ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int VAR_0 ;
 size_t FUNC_5 (int *,int,int,int *) ;
 size_t FUNC_6 (int *,int,size_t,int *) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,struct stat*) ;
 scalar_t__ FUNC_9 (char const*,struct stat*) ;
 scalar_t__ FUNC_10 (char const*) ;
 int * FUNC_11 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_12(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 size_t VAR_4;
 struct stat VAR_5;
 FILE *VAR_6, *VAR_7;
 int VAR_8, VAR_9, VAR_10;
 u_char VAR_11[1024];

 VAR_8 = !FUNC_9(VAR_2, &VAR_5);
 if (!VAR_0 && VAR_8 && FUNC_0(VAR_5.st_mode) && !FUNC_7(VAR_2))
  return;
 VAR_9 = VAR_10 = !VAR_8 || FUNC_0(VAR_5.st_mode);

 VAR_6 = VAR_7 = ((void*)0);
 if ((VAR_6 = FUNC_11(VAR_1, "r", VAR_3)) == ((void*)0)) {
  FUNC_1("%s", VAR_1);
  return;
 }
 if (FUNC_9(VAR_1, &VAR_5)) {
  FUNC_1("%s", VAR_1);
  goto err;
 }
 if (!FUNC_0(VAR_5.st_mode))
  VAR_9 = 0;





 if ((VAR_4 = FUNC_5(VAR_11, 1, sizeof(VAR_11), VAR_6)) == 0) {
  FUNC_1("%s", VAR_1);
  (void)FUNC_2(VAR_6);
  return;
 }
 if ((VAR_7 = FUNC_4(VAR_2, "w")) == ((void*)0) ||
     (VAR_4 != 0 && FUNC_6(VAR_11, 1, VAR_4, VAR_7) != VAR_4)) {
  FUNC_1("%s", VAR_2);
  if (VAR_7)
   (void)FUNC_2(VAR_7);
  (void)FUNC_2(VAR_6);
  return;
 }

 while ((VAR_4 = FUNC_5(VAR_11, 1, sizeof(VAR_11), VAR_6)) != 0)
  if (FUNC_6(VAR_11, 1, VAR_4, VAR_7) != VAR_4) {
   FUNC_1("%s", VAR_2);
   goto err;
  }

 if (FUNC_3(VAR_6) || FUNC_2(VAR_6)) {
  FUNC_1("%s", VAR_1);
  goto err;
 }
 VAR_6 = ((void*)0);

 if (FUNC_2(VAR_7)) {
  FUNC_1("%s", VAR_2);
  goto err;
 }

 if (VAR_9) {
  FUNC_8(VAR_2, &VAR_5);

  if (FUNC_10(VAR_1))
   FUNC_1("%s", VAR_1);
 }
 return;

err: if (VAR_7) {
  if (VAR_10)
   (void)FUNC_10(VAR_2);
  (void)FUNC_2(VAR_7);
 }
 if (VAR_6)
  (void)FUNC_2(VAR_6);
}
