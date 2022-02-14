
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* length; int* version; } ;
struct TYPE_12__ {int serial; int gid; int uid; int links; int mode; TYPE_1__ h; } ;
struct TYPE_13__ {TYPE_4__ PX; } ;
struct TYPE_14__ {TYPE_5__ rr_entry; } ;
struct ISO_SUSP_ATTRIBUTES {TYPE_6__ attr; } ;
struct TYPE_15__ {TYPE_3__* inode; } ;
typedef TYPE_7__ fsnode ;
struct TYPE_10__ {int st_ino; int st_gid; int st_uid; int st_nlink; int st_mode; } ;
struct TYPE_11__ {TYPE_2__ st; } ;


 int FUNC_0 (int ,int ) ;

int
FUNC_1(struct ISO_SUSP_ATTRIBUTES *VAR_0, fsnode *VAR_1)
{
 VAR_0->attr.rr_entry.PX.h.length[0] = 44;
 VAR_0->attr.rr_entry.PX.h.version[0] = 1;
 FUNC_0(VAR_1->inode->st.st_mode,
     VAR_0->attr.rr_entry.PX.mode);
 FUNC_0(VAR_1->inode->st.st_nlink,
     VAR_0->attr.rr_entry.PX.links);
 FUNC_0(VAR_1->inode->st.st_uid,
     VAR_0->attr.rr_entry.PX.uid);
 FUNC_0(VAR_1->inode->st.st_gid,
     VAR_0->attr.rr_entry.PX.gid);
 FUNC_0(VAR_1->inode->st.st_ino,
     VAR_0->attr.rr_entry.PX.serial);

 return 1;
}
