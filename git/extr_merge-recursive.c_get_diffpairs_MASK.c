
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int oid; } ;
struct tree {TYPE_2__ object; } ;
struct merge_options {scalar_t__ rename_limit; TYPE_3__* priv; int show_rename_progress; int rename_score; int repo; } ;
struct diff_queue_struct {int * queue; scalar_t__ nr; } ;
struct TYPE_4__ {int recursive; scalar_t__ rename_empty; } ;
struct diff_options {scalar_t__ detect_rename; int rename_limit; scalar_t__ needed_rename_limit; void* output_format; int show_rename_progress; int rename_score; TYPE_1__ flags; } ;
struct TYPE_6__ {scalar_t__ needed_rename_limit; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct diff_options*) ;
 struct diff_queue_struct VAR_2 ;
 int FUNC_1 (struct diff_options*) ;
 int FUNC_2 (int *,int *,char*,struct diff_options*) ;
 int FUNC_3 (struct diff_options*) ;
 scalar_t__ FUNC_4 (struct merge_options*) ;
 int FUNC_5 (int ,struct diff_options*) ;
 struct diff_queue_struct* FUNC_6 (int) ;

__attribute__((used)) static struct diff_queue_struct *FUNC_7(struct merge_options *VAR_3,
            struct tree *VAR_4,
            struct tree *VAR_5)
{
 struct diff_queue_struct *VAR_6;
 struct diff_options VAR_7;

 FUNC_5(VAR_3->repo, &VAR_7);
 VAR_7.flags.recursive = 1;
 VAR_7.flags.rename_empty = 0;
 VAR_7.detect_rename = FUNC_4(VAR_3);






 if (VAR_7.detect_rename > VAR_0)
  VAR_7.detect_rename = VAR_0;
 VAR_7.rename_limit = (VAR_3->rename_limit >= 0) ? VAR_3->rename_limit : 1000;
 VAR_7.rename_score = VAR_3->rename_score;
 VAR_7.show_rename_progress = VAR_3->show_rename_progress;
 VAR_7.output_format = VAR_1;
 FUNC_1(&VAR_7);
 FUNC_2(&VAR_4->object.oid, &VAR_5->object.oid, "", &VAR_7);
 FUNC_3(&VAR_7);
 if (VAR_7.needed_rename_limit > VAR_3->priv->needed_rename_limit)
  VAR_3->priv->needed_rename_limit = VAR_7.needed_rename_limit;

 VAR_6 = FUNC_6(sizeof(*VAR_6));
 *VAR_6 = VAR_2;

 VAR_7.output_format = VAR_1;
 VAR_2.nr = 0;
 VAR_2.queue = ((void*)0);
 FUNC_0(&VAR_7);
 return VAR_6;
}
