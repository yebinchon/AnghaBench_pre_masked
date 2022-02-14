
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bv_cnt; } ;
struct bufobj {scalar_t__ bo_numoutput; TYPE_1__ bo_dirty; } ;
struct vnode {struct bufobj v_bufobj; } ;
struct mount {scalar_t__ mnt_secondary_writes; int mnt_secondary_accwrites; } ;


 int FUNC_0 (struct bufobj*) ;
 int FUNC_1 (struct bufobj*) ;
 int FUNC_2 (struct bufobj*) ;
 int VAR_0 ;
 int FUNC_3 (struct mount*) ;
 int FUNC_4 (struct mount*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__*,int ,int,char*,int ) ;

int
FUNC_6(struct mount *VAR_3,
        struct vnode *VAR_4,
        int VAR_5,
        int VAR_6,
        int VAR_7,
        int VAR_8)
{
 struct bufobj *VAR_9;
 int VAR_10;

 (void) VAR_5,
 (void) VAR_6;

 VAR_9 = &VAR_4->v_bufobj;
 FUNC_0(VAR_9);

 FUNC_3(VAR_3);
 while (VAR_3->mnt_secondary_writes != 0) {
  FUNC_2(VAR_9);
  FUNC_5(&VAR_3->mnt_secondary_writes, FUNC_4(VAR_3),
      (VAR_2 - 1) | VAR_1, "secwr", 0);
  FUNC_1(VAR_9);
  FUNC_3(VAR_3);
 }






 VAR_10 = 0;
 if (VAR_9->bo_numoutput > 0 ||
     VAR_9->bo_dirty.bv_cnt > 0 ||
     VAR_7 != 0 ||
     VAR_3->mnt_secondary_writes != 0 ||
     VAR_8 != VAR_3->mnt_secondary_accwrites)
  VAR_10 = VAR_0;
 FUNC_2(VAR_9);
 return (VAR_10);
}
