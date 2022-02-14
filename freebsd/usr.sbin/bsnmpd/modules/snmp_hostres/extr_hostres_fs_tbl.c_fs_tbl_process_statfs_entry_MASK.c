
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int f_flags; char* f_mntfromname; int f_mntonname; } ;
struct fs_entry {int index; int lastPartialBackupDate; int lastFullBackupDate; int storageIndex; int bootable; int access; int type; void* remoteMountPoint; int flags; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 struct fs_entry* FUNC_3 (int ) ;
 struct fs_entry* FUNC_4 (int ) ;
 int FUNC_5 (struct statfs const*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ,int) ;
 void* FUNC_8 (char*) ;

void
FUNC_9(const struct statfs *VAR_6, int32_t VAR_7)
{
 struct fs_entry *VAR_8;

 FUNC_2(VAR_6 != 0);

 FUNC_0("for hrStorageEntry::index %d", VAR_7);

 if (VAR_6 == ((void*)0))
  return;

 if ((VAR_8 = FUNC_4(VAR_6->f_mntonname)) != ((void*)0) ||
     (VAR_8 = FUNC_3(VAR_6->f_mntonname)) != ((void*)0)) {
  VAR_8->flags |= VAR_2;

  if (!(VAR_6->f_flags & VAR_3)) {

   VAR_8->remoteMountPoint = FUNC_8(VAR_6->f_mntfromname);


  } else {
   VAR_8->remoteMountPoint = FUNC_8("");

  }

  VAR_8->type = FUNC_5(VAR_6);

  if ((VAR_6->f_flags & VAR_4) == VAR_4)
   VAR_8->access = VAR_0;
  else
   VAR_8->access = VAR_1;


  VAR_8->bootable = FUNC_1((VAR_6->f_flags & VAR_5)
      == VAR_5);

  VAR_8->storageIndex = VAR_7;


  FUNC_7(VAR_8->lastFullBackupDate, 0,
      sizeof(VAR_8->lastFullBackupDate));


  FUNC_7(VAR_8->lastPartialBackupDate, 0,
      sizeof(VAR_8->lastPartialBackupDate));

  FUNC_6(VAR_6->f_mntfromname, VAR_8->index);
 }
}
