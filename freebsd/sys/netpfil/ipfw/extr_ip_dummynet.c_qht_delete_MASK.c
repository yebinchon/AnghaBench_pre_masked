
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dn_queue {int dummy; } ;
struct TYPE_2__ {int flags; int fs_nr; } ;
struct dn_fsk {int * qht; TYPE_1__ fs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int,int *) ;
 int FUNC_1 (struct dn_queue*,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,void*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(struct dn_fsk *VAR_3, int VAR_4)
{
 FUNC_0("fs %d start flags %d qht %p",
  VAR_3->fs.fs_nr, VAR_4, VAR_3->qht);
 if (!VAR_3->qht)
  return;
 if (VAR_3->fs.flags & VAR_1) {
  FUNC_3(VAR_3->qht, VAR_2, (void *)(uintptr_t)VAR_4);
  if (VAR_4 & VAR_0) {
   FUNC_2(VAR_3->qht, 0);
   VAR_3->qht = ((void*)0);
  }
 } else {
  FUNC_1((struct dn_queue *)(VAR_3->qht), VAR_4);
  if (VAR_4 & VAR_0)
   VAR_3->qht = ((void*)0);
 }
}
