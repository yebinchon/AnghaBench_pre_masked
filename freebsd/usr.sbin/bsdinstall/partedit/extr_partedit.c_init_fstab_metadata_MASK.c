
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct partition_metadata {int * newfs; TYPE_1__* fstab; int * name; } ;
struct fstab {int fs_passno; int fs_freq; int * fs_type; int * fs_mntops; int * fs_vfstype; int * fs_file; int * fs_spec; } ;
struct TYPE_2__ {int fs_passno; int fs_freq; void* fs_type; void* fs_mntops; void* fs_vfstype; void* fs_file; void* fs_spec; } ;


 int FUNC_0 (int *,struct partition_metadata*,int ) ;
 struct partition_metadata* FUNC_1 (int,int) ;
 struct fstab* FUNC_2 () ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 () ;
 void* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_7(void)
{
 struct fstab *VAR_2;
 struct partition_metadata *VAR_3;

 FUNC_4();
 while ((VAR_2 = FUNC_2()) != ((void*)0)) {
  VAR_3 = FUNC_1(1, sizeof(struct partition_metadata));

  VAR_3->name = ((void*)0);
  if (FUNC_6(VAR_2->fs_spec, "/dev/", 5) == 0)
   VAR_3->name = FUNC_5(&VAR_2->fs_spec[5]);

  VAR_3->fstab = FUNC_3(sizeof(struct fstab));
  VAR_3->fstab->fs_spec = FUNC_5(VAR_2->fs_spec);
  VAR_3->fstab->fs_file = FUNC_5(VAR_2->fs_file);
  VAR_3->fstab->fs_vfstype = FUNC_5(VAR_2->fs_vfstype);
  VAR_3->fstab->fs_mntops = FUNC_5(VAR_2->fs_mntops);
  VAR_3->fstab->fs_type = FUNC_5(VAR_2->fs_type);
  VAR_3->fstab->fs_freq = VAR_2->fs_freq;
  VAR_3->fstab->fs_passno = VAR_2->fs_passno;

  VAR_3->newfs = ((void*)0);

  FUNC_0(&VAR_1, VAR_3, VAR_0);
 }
}
