
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int fs_nr; } ;
struct dn_fsk {scalar_t__ qht; TYPE_2__ fs; } ;
struct TYPE_3__ {int id; } ;
struct dn_fs {TYPE_1__ oid; } ;
struct copy_args {int end; scalar_t__* start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,TYPE_2__*,char*,int ) ;
 int FUNC_2 (struct copy_args*,struct dn_fsk*,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct copy_args *VAR_2, struct dn_fsk *VAR_3, int VAR_4)
{
 struct dn_fs *VAR_5 = (struct dn_fs *)(*VAR_2->start);
 if (!VAR_3)
  return 0;
 FUNC_0("flowset %d", VAR_3->fs.fs_nr);
 if (FUNC_1(VAR_2->start, VAR_2->end, &VAR_3->fs, "flowset", VAR_3->fs.fs_nr))
  return VAR_0;
 VAR_5->oid.id = (VAR_3->fs.flags & VAR_1) ?
  FUNC_3(VAR_3->qht) : (VAR_3->qht ? 1 : 0);
 if (VAR_4) {
  FUNC_2(VAR_2, VAR_3, 0);
 }
 return 0;
}
