
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* fs_fsmnt; scalar_t__* fs_snapinum; } ;
struct uufsd {char* d_name; TYPE_1__ d_fs; } ;
struct statfs {int f_mntonname; int f_mntfromname; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct uufsd*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct statfs *VAR_3)
{
 struct uufsd VAR_4;
 int VAR_5, VAR_6 = 0;

 if (FUNC_3(&VAR_4, VAR_3->f_mntfromname) == -1)
  FUNC_1("ufs_disk_fillout");

 if (VAR_2)
  FUNC_2("%s mounted on %s\n", VAR_4.d_name, VAR_4.d_fs.fs_fsmnt);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4.d_fs.fs_snapinum[VAR_5]) {
   VAR_1 = VAR_4.d_fs.fs_snapinum[VAR_5];
   FUNC_0(VAR_3->f_mntonname);
   VAR_6++;
  }
 }

 if (!VAR_6 && VAR_2)
  FUNC_2("\tno snapshots found\n");

 return 0;
}
