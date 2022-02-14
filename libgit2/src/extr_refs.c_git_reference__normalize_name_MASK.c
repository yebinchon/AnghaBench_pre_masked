
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_path_iconv_t ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*,char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,char const*) ;
 size_t FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int ,char*,char const*) ;
 int FUNC_11 (int *,char const**,size_t*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (char const*,...) ;
 scalar_t__ FUNC_15 (char const*,char,int) ;
 char const* FUNC_16 (char const*,char) ;
 int FUNC_17 (char*,char const*) ;
 size_t FUNC_18 (char const*) ;

int FUNC_19(
 git_buf *VAR_8,
 const char *VAR_9,
 unsigned int VAR_10)
{
 const char *VAR_11;
 int VAR_12, VAR_13 = 0, VAR_14 = VAR_0;
 unsigned int VAR_15;
 bool VAR_16 = (VAR_8 != ((void*)0));
 bool VAR_17 = (VAR_10 & VAR_7) == 0;





 FUNC_0(VAR_9);

 VAR_15 = VAR_10;
 VAR_11 = (char *)VAR_9;

 if (VAR_17 && *VAR_11 == '/')
  goto cleanup;

 if (VAR_16)
  FUNC_2(VAR_8);
 if (!VAR_17) {
  FUNC_8(VAR_8, VAR_11);

  VAR_14 = FUNC_7(VAR_8) ? -1 : 0;
  goto cleanup;
 }

 while (1) {
  char VAR_18 = VAR_15 & VAR_4;

  VAR_12 = FUNC_1(VAR_11, VAR_18);
  if (VAR_12 < 0)
   goto cleanup;

  if (VAR_12 > 0) {




   if (FUNC_15(VAR_11, '*', VAR_12))
    VAR_15 &= ~VAR_4;

   if (VAR_16) {
    size_t VAR_19 = FUNC_6(VAR_8);

    FUNC_5(VAR_8, FUNC_3(VAR_8), VAR_11);
    FUNC_9(VAR_8,
     VAR_19 + VAR_12 + (VAR_13 ? 1 : 0));

    if (FUNC_7(VAR_8)) {
     VAR_14 = -1;
     goto cleanup;
    }
   }

   VAR_13++;
  }


  if (VAR_12 == 0 && !VAR_16)
   goto cleanup;

  if (VAR_11[VAR_12] == '\0')
   break;

  VAR_11 += VAR_12 + 1;
 }


 if (VAR_12 == 0 && VAR_13 == 0)
  goto cleanup;


 if (VAR_11[VAR_12 - 1] == '.')
  goto cleanup;


 if (VAR_11[VAR_12 - 1] == '/')
  goto cleanup;

 if ((VAR_13 == 1 ) && !(VAR_10 & VAR_3))
  goto cleanup;

 if ((VAR_13 == 1 ) &&
     !(VAR_10 & VAR_5) &&
  !(FUNC_14(VAR_9, (size_t)VAR_12) ||
   ((VAR_10 & VAR_4) && !FUNC_17("*", VAR_9))))
   goto cleanup;

 if ((VAR_13 > 1)
  && (FUNC_14(VAR_9, FUNC_16(VAR_9, '/') - VAR_9)))
   goto cleanup;

 VAR_14 = 0;

cleanup:
 if (VAR_14 == VAR_0)
  FUNC_10(
   VAR_1,
   "the given reference name '%s' is not valid", VAR_9);

 if (VAR_14 && VAR_16)
  FUNC_4(VAR_8);





 return VAR_14;
}
