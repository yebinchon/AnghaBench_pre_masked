
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_6__ {int recursive; } ;
struct diff_options {int pathspec; int single_follow; int output_format; int detect_rename; TYPE_1__ flags; } ;
struct diff_filepair {char status; TYPE_4__* one; TYPE_3__* two; } ;
struct TYPE_7__ {int oid; } ;
struct commit {TYPE_2__ object; } ;
struct blame_origin {int mode; int blob_oid; int path; struct commit* commit; } ;
struct TYPE_10__ {int nr; struct diff_filepair** queue; } ;
struct TYPE_9__ {int mode; int oid; int path; } ;
struct TYPE_8__ {int path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct diff_options*) ;
 TYPE_5__ VAR_2 ;
 int FUNC_2 (struct diff_options*) ;
 int FUNC_3 (int ,int ,char*,struct diff_options*) ;
 int FUNC_4 (struct diff_options*) ;
 int FUNC_5 (int ,struct diff_options*) ;
 int FUNC_6 (struct commit*) ;
 struct blame_origin* FUNC_7 (struct commit*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (struct repository*,struct diff_options*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static struct blame_origin *FUNC_12(struct repository *VAR_3,
     struct commit *VAR_4,
     struct blame_origin *VAR_5)
{
 struct blame_origin *VAR_6 = ((void*)0);
 struct diff_options VAR_7;
 int VAR_8;

 FUNC_10(VAR_3, &VAR_7);
 VAR_7.flags.recursive = 1;
 VAR_7.detect_rename = VAR_0;
 VAR_7.output_format = VAR_1;
 VAR_7.single_follow = VAR_5->path;
 FUNC_2(&VAR_7);

 if (FUNC_8(&VAR_5->commit->object.oid))
  FUNC_5(FUNC_6(VAR_4), &VAR_7);
 else
  FUNC_3(FUNC_6(VAR_4),
         FUNC_6(VAR_5->commit),
         "", &VAR_7);
 FUNC_4(&VAR_7);

 for (VAR_8 = 0; VAR_8 < VAR_2.nr; VAR_8++) {
  struct diff_filepair *VAR_9 = VAR_2.queue[VAR_8];
  if ((VAR_9->status == 'R' || VAR_9->status == 'C') &&
      !FUNC_11(VAR_9->two->path, VAR_5->path)) {
   VAR_6 = FUNC_7(VAR_4, VAR_9->one->path);
   FUNC_9(&VAR_6->blob_oid, &VAR_9->one->oid);
   VAR_6->mode = VAR_9->one->mode;
   break;
  }
 }
 FUNC_1(&VAR_7);
 FUNC_0(&VAR_7.pathspec);
 return VAR_6;
}
