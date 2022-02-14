
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* uintmax_t ;
struct ptsstat {char* devname; scalar_t__ dev; } ;
struct procstat {int dummy; } ;
struct filestat {int fs_fflags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct procstat*,struct filestat*,struct ptsstat*,char*) ;

__attribute__((used)) static void
FUNC_3(struct procstat *VAR_2, struct filestat *VAR_3)
{
 struct ptsstat VAR_4;
 char VAR_5[VAR_0];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_4, VAR_5);
 if (VAR_6 != 0) {
  FUNC_1("* error");
  return;
 }
 FUNC_1("* pseudo-terminal master ");
 if (VAR_1 || !*VAR_4.devname) {
  FUNC_1("%#10jx", (uintmax_t)VAR_4.dev);
 } else {
  FUNC_1("%10s", VAR_4.devname);
 }
 FUNC_0(VAR_3->fs_fflags);
}
