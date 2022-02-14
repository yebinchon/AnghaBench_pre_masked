
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union dinode {int dummy; } dinode ;
typedef int uintmax_t ;
struct fs {int fs_ncg; int fs_ipg; } ;
typedef int ino_t ;
struct TYPE_2__ {char* name; } ;


 int FUNC_0 (struct fs*,union dinode*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char*) ;
 scalar_t__ VAR_2 ;
 union dinode* FUNC_2 (int,struct fs*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct fs*,union dinode*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char) ;
 int FUNC_7 (char*,int*) ;
 int VAR_3 ;
 int FUNC_8 (int,int ) ;
 TYPE_1__* FUNC_9 (int ) ;
 int FUNC_10 (char*,int) ;

__attribute__((used)) static void
FUNC_11(int VAR_4, struct fs *VAR_5, char *VAR_6)
{
 int VAR_7;
 ino_t VAR_8;
 uintmax_t VAR_9;
 union dinode *VAR_10;

 VAR_8 = VAR_5->fs_ncg * VAR_5->fs_ipg - 1;

 while ((VAR_7 = FUNC_3()) != VAR_0 && (VAR_7 < '0' || VAR_7 > '9'))
  while ((VAR_7 = FUNC_3()) != VAR_0 && VAR_7 != '\n');
 FUNC_8(VAR_7,VAR_3);
 while (FUNC_7("%ju", &VAR_9) == 1) {
  if (VAR_9 > VAR_8) {
   FUNC_10("illegal inode %ju", VAR_9);
   return;
  }
  VAR_2 = 0;
  if ((VAR_10 = FUNC_2(VAR_4,VAR_5,VAR_9))
      && !FUNC_4(VAR_5, VAR_10)) {
   FUNC_5("%s\t",FUNC_9(FUNC_0(VAR_5, VAR_10, VAR_1))->name);

   while ((VAR_7 = FUNC_3()) == ' ' || VAR_7 == '\t');

   while (VAR_7 != VAR_0 && VAR_7 != '\n') {
    FUNC_6(VAR_7);
    VAR_7 = FUNC_3();
   }
   FUNC_6('\n');
  } else {
   if (VAR_2) {
    FUNC_1(1, "%s", VAR_6);
   }

   while ((VAR_7 = FUNC_3()) != VAR_0 && VAR_7 != '\n');
  }
  if (VAR_7 == VAR_0)
   break;
 }
}
