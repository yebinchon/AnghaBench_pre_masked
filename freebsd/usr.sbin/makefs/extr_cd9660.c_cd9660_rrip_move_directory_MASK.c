
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int newname ;
struct TYPE_24__ {int rock_ridge_move_count; TYPE_8__* rr_moved_dir; int rootNode; } ;
typedef TYPE_4__ iso9660_disk ;
struct TYPE_25__ {TYPE_3__* isoDirRecord; struct TYPE_25__* rr_relocated; TYPE_8__* parent; TYPE_8__* rr_real_parent; TYPE_2__* node; } ;
typedef TYPE_5__ cd9660node ;
struct TYPE_28__ {int cn_children; TYPE_1__* isoDirRecord; } ;
struct TYPE_27__ {int st_mtime; scalar_t__ st_ino; } ;
struct TYPE_26__ {int tv_sec; } ;
struct TYPE_23__ {int* length; int* name_len; int name; } ;
struct TYPE_22__ {int name; } ;
struct TYPE_21__ {int date; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_5__*,int ) ;
 TYPE_8__* FUNC_2 (TYPE_4__*,int ,int ,TYPE_5__*) ;
 TYPE_5__* FUNC_3 (TYPE_4__*,int ,TYPE_8__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_5__*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (char*,int,char*,int) ;
 TYPE_7__ VAR_3 ;
 TYPE_6__ VAR_4 ;
 int FUNC_8 (int ,char*,int) ;

__attribute__((used)) static cd9660node *
FUNC_9(iso9660_disk *VAR_5, cd9660node *VAR_6)
{
 char VAR_7[9];
 cd9660node *VAR_8;
 if (VAR_5->rr_moved_dir == ((void*)0)) {
  VAR_5->rr_moved_dir = FUNC_2(
      VAR_5, VAR_1,
      VAR_5->rootNode, VAR_6);
  if (VAR_5->rr_moved_dir == ((void*)0))
   return 0;
  FUNC_5(VAR_5->rr_moved_dir->isoDirRecord->date,
      VAR_3.st_ino ? VAR_3.st_mtime : VAR_4.tv_sec);
 }


 VAR_8 = FUNC_3(VAR_5, VAR_6->node->name, VAR_6->parent,
     VAR_6);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_5->rock_ridge_move_count++;
 FUNC_7(VAR_7, sizeof(VAR_7), "%08i",
     VAR_5->rock_ridge_move_count);


 VAR_6->rr_real_parent = VAR_6->parent;


 if (FUNC_0(&VAR_6->rr_real_parent->cn_children)) {
  FUNC_1(&VAR_6->rr_real_parent->cn_children, VAR_8,
      VAR_2);
 } else {
  FUNC_4(VAR_6->rr_real_parent, VAR_8);
 }


 VAR_6->parent = VAR_5->rr_moved_dir;


 VAR_8->rr_relocated = VAR_6;


 FUNC_4(VAR_5->rr_moved_dir, VAR_6);




 FUNC_6(VAR_6->isoDirRecord->name, 0, VAR_0);
 FUNC_8(VAR_6->isoDirRecord->name, VAR_7, 8);
 VAR_6->isoDirRecord->length[0] = 34 + 8;
 VAR_6->isoDirRecord->name_len[0] = 8;

 return VAR_6;
}
