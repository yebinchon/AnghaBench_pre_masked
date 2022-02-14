
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_size; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,char const*) ;
 int FUNC_6 (int ,char*,char const*) ;
 scalar_t__ FUNC_7 (int,struct stat*) ;
 scalar_t__ FUNC_8 (int,int ,int *) ;
 int FUNC_9 (char const*,int) ;

__attribute__((used)) static off_t
FUNC_10(const char *VAR_6)
{
 struct stat VAR_7;
 off_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_9(VAR_6, VAR_5 | VAR_4);

 if (FUNC_7(VAR_9, &VAR_7) < 0)
  FUNC_5(VAR_2, "fstat failed: %s", VAR_6);

 if (FUNC_3(VAR_7.st_mode) || FUNC_2(VAR_7.st_mode)) {
  FUNC_4(VAR_9);
  return (VAR_7.st_size);
 }

 if (!FUNC_1(VAR_7.st_mode) && !FUNC_0(VAR_7.st_mode))
  FUNC_6(VAR_1,
   "invalid type of the file "
   "(not regular, directory nor special device): %s",
   VAR_6);

 if (FUNC_8(VAR_9, VAR_0, &VAR_8) < 0)
  FUNC_5(VAR_3,
   "ioctl(DIOCGMEDIASIZE) failed, probably not a disk: "
   "%s", VAR_6);

 FUNC_4(VAR_9);
 return (VAR_8);
}
