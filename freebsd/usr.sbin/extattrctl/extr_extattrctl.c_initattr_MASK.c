
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uef ;
struct ufs_extattr_fileheader {int uef_size; int uef_version; int uef_magic; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int) ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int,struct ufs_extattr_fileheader*,size_t) ;
 struct ufs_extattr_fileheader* VAR_8 ;

int
FUNC_9(int VAR_9, char *VAR_10[])
{
 struct ufs_extattr_fileheader VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13, VAR_14, VAR_15, VAR_16;
 ssize_t VAR_17;
 size_t VAR_18;

 VAR_16 = VAR_0 | VAR_3 | VAR_2 | VAR_1;
 VAR_7 = 0;
 while ((VAR_13 = FUNC_2(VAR_9, VAR_10, "fp:r:w:")) != -1)
  switch (VAR_13) {
  case 'f':
   VAR_16 &= ~VAR_1;
   break;
  case 'p':
   VAR_12 = VAR_6;
   break;
  case '?':
  default:
   FUNC_7();
  }

 VAR_9 -= VAR_7;
 VAR_10 += VAR_7;

 if (VAR_9 != 2)
  FUNC_7();

 VAR_15 = 0;
 if ((VAR_14 = FUNC_4(VAR_10[1], VAR_16, 0600)) == -1) {

  FUNC_5(VAR_10[1]);
  return (-1);
 }
 VAR_11.uef_magic = VAR_4;
 VAR_11.uef_version = VAR_5;
 VAR_11.uef_size = FUNC_0(VAR_10[0]);
 if (FUNC_8(VAR_14, &VAR_11, sizeof(VAR_11)) == -1)
  VAR_15 = -1;
 else if (VAR_12 != ((void*)0)) {
  VAR_18 = (sizeof VAR_11 + VAR_11.uef_size) *
      FUNC_3(VAR_12);
  while (VAR_18 > 0) {
   if (VAR_18 > sizeof VAR_8)
    VAR_17 = FUNC_8(VAR_14, VAR_8, sizeof VAR_8);
   else
    VAR_17 = FUNC_8(VAR_14, VAR_8, VAR_18);
   if (VAR_17 == -1) {
    VAR_15 = -1;
    break;
   }
   VAR_18 -= VAR_17;
  }
 }
 if (VAR_15 == -1) {
  FUNC_5(VAR_10[1]);
  FUNC_6(VAR_10[1]);
  FUNC_1(VAR_14);
  return (-1);
 }

 FUNC_1(VAR_14);
 return (0);
}
