
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


typedef int uint64_t ;
struct TYPE_9__ {int* length; int* version; } ;
struct TYPE_12__ {int low; int high; TYPE_1__ h; } ;
struct TYPE_13__ {TYPE_4__ PN; } ;
struct TYPE_14__ {TYPE_5__ rr_entry; } ;
struct ISO_SUSP_ATTRIBUTES {TYPE_6__ attr; } ;
struct TYPE_15__ {TYPE_3__* inode; } ;
typedef TYPE_7__ fsnode ;
struct TYPE_10__ {int st_rdev; } ;
struct TYPE_11__ {TYPE_2__ st; } ;


 int FUNC_0 (int,int ) ;

int
FUNC_1(struct ISO_SUSP_ATTRIBUTES *VAR_0, fsnode *VAR_1)
{
 VAR_0->attr.rr_entry.PN.h.length[0] = 20;
 VAR_0->attr.rr_entry.PN.h.version[0] = 1;

 if (sizeof (VAR_1->inode->st.st_rdev) > 4)
  FUNC_0(
      (uint64_t)VAR_1->inode->st.st_rdev >> 32,
      VAR_0->attr.rr_entry.PN.high);
 else
  FUNC_0(0, VAR_0->attr.rr_entry.PN.high);

 FUNC_0(VAR_1->inode->st.st_rdev & 0xffffffff,
  VAR_0->attr.rr_entry.PN.low);
 return 1;
}
