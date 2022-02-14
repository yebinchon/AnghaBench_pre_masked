
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clone {int commit_lock; TYPE_1__* ti; int cmd; } ;
struct TYPE_2__ {int table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clone*,char*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct clone*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct clone *VAR_2)
{
 int VAR_3 = 0;

 FUNC_6(&VAR_2->commit_lock);

 if (!FUNC_1(VAR_2->cmd))
  goto out;

 if (FUNC_8(FUNC_5(VAR_2) >= VAR_0)) {
  VAR_3 = -VAR_1;
  goto out;
 }

 VAR_3 = FUNC_3(VAR_2->cmd);

 if (FUNC_8(VAR_3)) {
  FUNC_0(VAR_2, "dm_clone_metadata_commit", VAR_3);
  goto out;
 }

 if (FUNC_2(VAR_2->cmd))
  FUNC_4(VAR_2->ti->table);
out:
 FUNC_7(&VAR_2->commit_lock);

 return VAR_3;
}
