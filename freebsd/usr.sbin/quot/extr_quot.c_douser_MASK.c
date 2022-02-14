
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union dinode {int dummy; } dinode ;
struct user {char* name; int spc90; int spc60; int spc30; scalar_t__ count; int space; } ;
struct fs {int fs_ncg; int fs_ipg; } ;
typedef int ino_t ;


 int FUNC_0 (struct fs*,union dinode*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fs*,union dinode*) ;
 int FUNC_3 (int ,struct user*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct user*) ;
 union dinode* FUNC_7 (int,struct fs*,int) ;
 int FUNC_8 (struct fs*,union dinode*) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_5 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (struct user*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct fs*,union dinode*) ;

__attribute__((used)) static void
FUNC_14(int VAR_8, struct fs *VAR_9, char *VAR_10)
{
 ino_t VAR_11, VAR_12;
 struct user *VAR_13, *VAR_14;
 union dinode *VAR_15;
 int VAR_16;

 VAR_12 = VAR_9->fs_ncg * VAR_9->fs_ipg - 1;
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  VAR_3 = 0;
  if ((VAR_15 = FUNC_7(VAR_8,VAR_9,VAR_11))
      && !FUNC_8(VAR_9, VAR_15))
   FUNC_12(FUNC_0(VAR_9, VAR_15, VAR_2),
       VAR_4 ? FUNC_13(VAR_9, VAR_15) :
    FUNC_2(VAR_9, VAR_15),
       FUNC_0(VAR_9, VAR_15, VAR_1));
  else if (VAR_3) {
   FUNC_4(1, "%s", VAR_10);
  }
 }
 if (!(VAR_14 = (struct user *)FUNC_9(VAR_5 * sizeof(struct user))))
  FUNC_5(1, "allocate users");
 FUNC_3(VAR_7,VAR_14,VAR_5 * sizeof(struct user));
 FUNC_11(VAR_14);
 for (VAR_13 = VAR_14, VAR_16 = VAR_5; --VAR_16 >= 0 && VAR_13->count; VAR_13++) {
  FUNC_10("%5d",FUNC_1(VAR_13->space));
  if (VAR_0)
   FUNC_10("\t%5ld",VAR_13->count);
  FUNC_10("\t%-8s",VAR_13->name);
  if (VAR_6)
   FUNC_10("\t%5d\t%5d\t%5d",
          FUNC_1(VAR_13->spc30),
          FUNC_1(VAR_13->spc60),
          FUNC_1(VAR_13->spc90));
  FUNC_10("\n");
 }
 FUNC_6(VAR_14);
}
