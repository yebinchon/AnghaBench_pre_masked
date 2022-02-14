
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct statfs {scalar_t__ f_files; scalar_t__ f_bfree; scalar_t__ f_blocks; scalar_t__ f_bsize; int f_version; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct statfs*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,struct statfs*) ;

int
FUNC_4(int VAR_3, char **VAR_4)
{
 int VAR_5;
 struct statfs VAR_6;

 if (VAR_3 < 2)
  return VAR_0;

 FUNC_0(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.f_version = VAR_2;
 VAR_5 = FUNC_3(VAR_4[1], &VAR_6);
 if (VAR_5 != 0) {
  FUNC_1("statvfs");
  return VAR_0;
 }

 (void)FUNC_2("f_bsize=%ju\n", (uintmax_t)VAR_6.f_bsize);
 (void)FUNC_2("f_blocks=%ju\n", (uintmax_t)VAR_6.f_blocks);
 (void)FUNC_2("f_bfree=%ju\n", (uintmax_t)VAR_6.f_bfree);
 (void)FUNC_2("f_files=%ju\n", (uintmax_t)VAR_6.f_files);

 return VAR_1;
}
