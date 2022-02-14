
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct stat {float st_size; int st_mode; } ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,...) ;
 size_t FUNC_6 (int *,int,int,int *) ;
 size_t FUNC_7 (int *,int,size_t,int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,struct stat*) ;
 scalar_t__ FUNC_10 (char const*,struct stat*) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (char const*) ;
 scalar_t__ VAR_3 ;
 int * FUNC_12 (char const*,char*,int) ;

__attribute__((used)) static void
FUNC_13(const char *VAR_4, const char *VAR_5, int VAR_6)
{
 size_t VAR_7;
 struct stat VAR_8, VAR_9;
 FILE *VAR_10, *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 u_char VAR_15[1024];

 VAR_12 = !FUNC_10(VAR_5, &VAR_9);
 if (!VAR_1 && VAR_12 && FUNC_0(VAR_9.st_mode) && !FUNC_8(VAR_5))
  return;
 VAR_13 = VAR_14 = !VAR_12 || FUNC_0(VAR_9.st_mode);

 VAR_10 = VAR_11 = ((void*)0);
 if ((VAR_10 = FUNC_4(VAR_4, "r")) == ((void*)0)) {
  FUNC_1("%s", VAR_4);
  return;
 }
 if (FUNC_10(VAR_4, &VAR_8)) {
  FUNC_1("%s", VAR_4);
  goto err;
 }
 if (!FUNC_0(VAR_8.st_mode))
  VAR_13 = 0;

 if ((VAR_11 = FUNC_12(VAR_5, "w", VAR_6)) == ((void*)0)) {
  FUNC_1("%s", VAR_5);
  goto err;
 }
 while ((VAR_7 = FUNC_6(VAR_15, 1, sizeof(VAR_15), VAR_10)) != 0)
  if (FUNC_7(VAR_15, 1, VAR_7, VAR_11) != VAR_7) {
   FUNC_1("%s", VAR_5);
   goto err;
  }

 if (FUNC_3(VAR_10) || FUNC_2(VAR_10)) {
  FUNC_1("%s", VAR_4);
  goto err;
 }
 VAR_10 = ((void*)0);

 if (FUNC_2(VAR_11)) {
  FUNC_1("%s", VAR_5);
  goto err;
 }
 VAR_11 = ((void*)0);

 if (VAR_13) {
  if (FUNC_10(VAR_5, &VAR_9)) {
   FUNC_1("%s", VAR_5);
   goto err;
  }

  if (!VAR_1 && VAR_9.st_size >= VAR_8.st_size) {
   if (VAR_3)
  (void)FUNC_5(VAR_2, "%s: file would grow; left unmodified\n",
      VAR_4);
   VAR_0 = 2;
   if (FUNC_11(VAR_5))
    FUNC_1("%s", VAR_5);
   goto err;
  }

  FUNC_9(VAR_5, &VAR_8);

  if (FUNC_11(VAR_4))
   FUNC_1("%s", VAR_4);

  if (VAR_3) {
   (void)FUNC_5(VAR_2, "%s: ", VAR_5);
   if (VAR_8.st_size > VAR_9.st_size)
    (void)FUNC_5(VAR_2, "%.0f%% compression\n",
        ((float)VAR_9.st_size / VAR_8.st_size) * 100.0);
   else
    (void)FUNC_5(VAR_2, "%.0f%% expansion\n",
        ((float)VAR_8.st_size / VAR_9.st_size) * 100.0);
  }
 }
 return;

err: if (VAR_11) {
  if (VAR_14)
   (void)FUNC_11(VAR_5);
  (void)FUNC_2(VAR_11);
 }
 if (VAR_10)
  (void)FUNC_2(VAR_10);
}
