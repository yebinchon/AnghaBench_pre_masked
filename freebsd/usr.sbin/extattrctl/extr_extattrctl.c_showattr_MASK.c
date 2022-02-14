
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uef ;
struct ufs_extattr_fileheader {scalar_t__ uef_magic; int uef_version; int uef_size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int,int) ;
 int FUNC_5 (int,struct ufs_extattr_fileheader*,int) ;
 int VAR_2 ;
 int FUNC_6 () ;

int
FUNC_7(int VAR_3, char *VAR_4[])
{
 struct ufs_extattr_fileheader VAR_5;
 int VAR_6, VAR_7;

 if (VAR_3 != 1)
  FUNC_6();

 VAR_7 = FUNC_2(VAR_4[0], VAR_0);
 if (VAR_7 == -1) {
  FUNC_3(VAR_4[0]);
  return (-1);
 }

 VAR_6 = FUNC_5(VAR_7, &VAR_5, sizeof(VAR_5));
 if (VAR_6 == -1) {
  FUNC_3(VAR_4[0]);
  FUNC_0(VAR_7);
  return (-1);
 }
 if (VAR_6 != sizeof(VAR_5)) {
  FUNC_1(VAR_2, "%s: invalid file header\n", VAR_4[0]);
  FUNC_0(VAR_7);
  return (-1);
 }

 if (VAR_5.uef_magic != VAR_1) {
  FUNC_1(VAR_2, "%s: bad magic\n", VAR_4[0]);
  FUNC_0(VAR_7);
  return (-1);
 }

 FUNC_4("%s: version %d, size %d\n", VAR_4[0], VAR_5.uef_version,
     VAR_5.uef_size);

 FUNC_0(VAR_7);
 return (0);
}
