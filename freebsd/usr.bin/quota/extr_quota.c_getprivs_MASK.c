
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {char* f_mntonname; char* f_fstypename; int f_mntfromname; } ;
struct quotause {struct quotause* next; int fsname; } ;
struct fstab {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int *) ;
 int FUNC_2 (int,char*) ;
 int * VAR_1 ;
 int FUNC_3 (struct quotause*) ;
 struct fstab* FUNC_4 (int ) ;
 int FUNC_5 (struct statfs**,int ) ;
 scalar_t__ FUNC_6 (struct statfs*,struct quotause*,long,int) ;
 scalar_t__ FUNC_7 (struct fstab*,struct quotause*,long,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int *,struct statfs*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static struct quotause *
FUNC_13(long VAR_3, int VAR_4)
{
 struct quotause *VAR_5, *VAR_6 = ((void*)0);
 struct fstab *VAR_7;
 struct quotause *VAR_8;
 struct statfs *VAR_9;
 int VAR_10, VAR_11;
 struct statfs VAR_12;

 VAR_5 = VAR_8 = (struct quotause *)0;

 if (VAR_1 != ((void*)0) && FUNC_10(VAR_1, &VAR_12) != 0)
  FUNC_1(1, "cannot statfs %s", VAR_1);
 VAR_10 = FUNC_5(&VAR_9, VAR_0);
 if (VAR_10 == 0)
  FUNC_2(2, "no filesystems mounted!");
 FUNC_9();
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
  if (VAR_5 == ((void*)0)) {
   if ((VAR_5 = (struct quotause *)FUNC_8(sizeof *VAR_5))
       == ((void*)0))
    FUNC_2(2, "out of memory");
  }




  if (VAR_1 != ((void*)0) &&
      FUNC_11(VAR_12.f_mntonname, VAR_9[VAR_11].f_mntonname) != 0)
   continue;
  if (FUNC_11(VAR_9[VAR_11].f_fstypename, "nfs") == 0) {
   if (VAR_2)
    continue;
   if (FUNC_6(&VAR_9[VAR_11], VAR_5, VAR_3, VAR_4) == 0)
    continue;
  } else if (FUNC_11(VAR_9[VAR_11].f_fstypename, "ufs") == 0) {
   if ((VAR_7 = FUNC_4(VAR_9[VAR_11].f_mntfromname)) == ((void*)0))
    continue;
   if (FUNC_7(VAR_7, VAR_5, VAR_3, VAR_4) == 0)
    continue;
  } else
   continue;
  FUNC_12(VAR_5->fsname, VAR_9[VAR_11].f_mntonname);
  if (VAR_8 == ((void*)0))
   VAR_8 = VAR_5;
  else
   VAR_6->next = VAR_5;
  VAR_6 = VAR_5;
  VAR_6->next = 0;
  VAR_5 = ((void*)0);
 }
 if (VAR_5)
  FUNC_3(VAR_5);
 FUNC_0();
 return (VAR_8);
}
