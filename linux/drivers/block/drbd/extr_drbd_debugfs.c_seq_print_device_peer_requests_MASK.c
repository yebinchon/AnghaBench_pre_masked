
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct drbd_device {scalar_t__ flush_jif; int vnr; int minor; int flags; TYPE_1__* resource; int sync_ee; int read_ee; int active_ee; } ;
struct TYPE_2__ {int req_lock; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct seq_file*,struct drbd_device*,int *,unsigned long) ;
 int FUNC_2 (struct seq_file*,char*,int ,int ,int ) ;
 int FUNC_3 (struct seq_file*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_1,
 struct drbd_device *VAR_2, unsigned long VAR_3)
{
 FUNC_3(VAR_1, "minor\tvnr\tsector\tsize\trw\tage\tflags\n");
 FUNC_4(&VAR_2->resource->req_lock);
 FUNC_1(VAR_1, VAR_2, &VAR_2->active_ee, VAR_3);
 FUNC_1(VAR_1, VAR_2, &VAR_2->read_ee, VAR_3);
 FUNC_1(VAR_1, VAR_2, &VAR_2->sync_ee, VAR_3);
 FUNC_5(&VAR_2->resource->req_lock);
 if (FUNC_6(VAR_0, &VAR_2->flags)) {
  FUNC_2(VAR_1, "%u\t%u\t-\t-\tF\t%u\tflush\n",
   VAR_2->minor, VAR_2->vnr,
   FUNC_0(VAR_3 - VAR_2->flush_jif));
 }
}
