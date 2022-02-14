
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct diff_filepair {int status; TYPE_2__* one; TYPE_1__* two; } ;
struct TYPE_4__ {int path; int oid; int mode; } ;
struct TYPE_3__ {int path; int oid; int mode; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct object_id*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct diff_filepair *VAR_0, struct object_id *VAR_1)
{
 switch (VAR_0->status) {
 case 128:
  FUNC_0(VAR_0->one->mode == VAR_0->two->mode);
  FUNC_0(!FUNC_1(&VAR_0->one->oid));
  FUNC_0(!FUNC_1(&VAR_0->two->oid));
  break;
 case 130:
  FUNC_0(FUNC_1(&VAR_0->one->oid));
  break;
 case 129:
  FUNC_0(FUNC_1(&VAR_0->two->oid));
  break;
 default:
  return -1;
 }
 FUNC_0(!FUNC_3(VAR_0->one->path, VAR_0->two->path));
 return FUNC_2(VAR_0->one->path, VAR_1);
}
