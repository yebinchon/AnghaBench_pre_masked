
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ off_t ;
typedef int buf ;
typedef int DIGEST_CTX ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int VAR_6 ;
 int FUNC_4 (int ,char*,char const*,int ,int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int,scalar_t__,int ) ;
 char* FUNC_7 (int *,size_t,int ,int ,int,scalar_t__) ;
 int FUNC_8 (char*,scalar_t__) ;
 int FUNC_9 (int,char*,int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (int,char*,int) ;

__attribute__((used)) static char *
FUNC_13(int VAR_8, const char *VAR_9, int VAR_10, const char *VAR_11,
    off_t VAR_12)
{
 int VAR_13, VAR_14;
 int VAR_15;
 char *VAR_16;
 char VAR_17[VAR_3];
 int VAR_18;
 DIGEST_CTX VAR_19;


 if (FUNC_6(VAR_8, (off_t)0, VAR_5) == (off_t)-1)
  FUNC_3(VAR_0, "lseek: %s", VAR_9);
 if (FUNC_6(VAR_10, (off_t)0, VAR_5) == (off_t)-1)
  FUNC_3(VAR_0, "lseek: %s", VAR_11);

 FUNC_1(&VAR_19);






 VAR_18 = 0;
 if (VAR_12 <= 8 * 1048576 && FUNC_10(VAR_8) &&
     (VAR_16 = FUNC_7(((void*)0), (size_t)VAR_12, VAR_4, VAR_2,
      VAR_8, (off_t)0)) != VAR_1) {
  VAR_14 = FUNC_12(VAR_10, VAR_16, VAR_12);
  if (VAR_14 != VAR_12) {
   VAR_15 = VAR_6;
   (void)FUNC_11(VAR_11);
   if (VAR_14 >= 0) {
    FUNC_4(VAR_0,
     "short write to %s: %jd bytes written, %jd bytes asked to write",
        VAR_11, (uintmax_t)VAR_14, (uintmax_t)VAR_12);
   } else {
    VAR_6 = VAR_15;
    FUNC_3(VAR_0, "%s", VAR_11);
   }
  }
  FUNC_2(&VAR_19, VAR_16, VAR_12);
  (void)FUNC_8(VAR_16, VAR_12);
  VAR_18 = 1;
 }
 if (!VAR_18) {
  while ((VAR_13 = FUNC_9(VAR_8, VAR_17, sizeof(VAR_17))) > 0) {
   if ((VAR_14 = FUNC_12(VAR_10, VAR_17, VAR_13)) != VAR_13) {
    VAR_15 = VAR_6;
    (void)FUNC_11(VAR_11);
    if (VAR_14 >= 0) {
     FUNC_4(VAR_0,
     "short write to %s: %jd bytes written, %jd bytes asked to write",
         VAR_11, (uintmax_t)VAR_14,
         (uintmax_t)VAR_12);
    } else {
     VAR_6 = VAR_15;
     FUNC_3(VAR_0, "%s", VAR_11);
    }
   }
   FUNC_2(&VAR_19, VAR_17, VAR_13);
  }
  if (VAR_13 != 0) {
   VAR_15 = VAR_6;
   (void)FUNC_11(VAR_11);
   VAR_6 = VAR_15;
   FUNC_3(VAR_0, "%s", VAR_9);
  }
 }
 if (VAR_7 && FUNC_5(VAR_10) == -1) {
  VAR_15 = VAR_6;
  (void)FUNC_11(VAR_11);
  VAR_6 = VAR_15;
  FUNC_3(VAR_0, "fsync failed for %s", VAR_11);
 }
 return (FUNC_0(&VAR_19, ((void*)0)));
}
