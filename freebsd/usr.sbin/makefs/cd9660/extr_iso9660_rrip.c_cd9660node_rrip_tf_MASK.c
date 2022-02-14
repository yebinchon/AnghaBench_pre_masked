
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


struct TYPE_11__ {int* length; int* version; } ;
struct TYPE_12__ {int* flags; TYPE_3__ h; scalar_t__ timestamp; } ;
struct TYPE_13__ {TYPE_4__ TF; } ;
struct TYPE_14__ {TYPE_5__ rr_entry; } ;
struct ISO_SUSP_ATTRIBUTES {TYPE_6__ attr; } ;
struct TYPE_15__ {TYPE_2__* inode; } ;
typedef TYPE_7__ fsnode ;
struct TYPE_9__ {int st_ctime; int st_mtime; int st_atime; } ;
struct TYPE_10__ {TYPE_1__ st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;

int
FUNC_1(struct ISO_SUSP_ATTRIBUTES *VAR_3, fsnode *VAR_4)
{
 VAR_3->attr.rr_entry.TF.flags[0] = VAR_2 | VAR_0 | VAR_1;
 VAR_3->attr.rr_entry.TF.h.length[0] = 5;
 VAR_3->attr.rr_entry.TF.h.version[0] = 1;






 FUNC_0(VAR_3->attr.rr_entry.TF.timestamp,
  VAR_4->inode->st.st_atime);
 VAR_3->attr.rr_entry.TF.h.length[0] += 7;

 FUNC_0(VAR_3->attr.rr_entry.TF.timestamp + 7,
  VAR_4->inode->st.st_mtime);
 VAR_3->attr.rr_entry.TF.h.length[0] += 7;

 FUNC_0(VAR_3->attr.rr_entry.TF.timestamp + 14,
  VAR_4->inode->st.st_ctime);
 VAR_3->attr.rr_entry.TF.h.length[0] += 7;
 return 1;
}
