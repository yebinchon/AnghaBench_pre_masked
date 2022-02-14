
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
struct diff_options {int pathspec; int output_format; scalar_t__ detect_rename; TYPE_1__ flags; } ;
struct diff_filepair {int status; TYPE_4__* one; TYPE_3__* two; } ;
struct TYPE_7__ {int oid; } ;
struct commit {TYPE_2__ object; } ;
struct blame_origin {char const* path; int mode; int blob_oid; struct commit* commit; struct blame_origin* next; } ;
struct TYPE_10__ {int nr; struct diff_filepair** queue; } ;
struct TYPE_9__ {char* path; int mode; int oid; } ;
struct TYPE_8__ {char* path; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct blame_origin* FUNC_0 (struct blame_origin*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct diff_options*) ;
 TYPE_5__ VAR_4 ;
 int FUNC_4 (struct diff_options*) ;
 int FUNC_5 (int ,int ,char*,struct diff_options*) ;
 int FUNC_6 (struct diff_options*) ;
 int FUNC_7 (int ,struct diff_options*) ;
 struct blame_origin* FUNC_8 (struct commit*) ;
 int FUNC_9 (struct commit*) ;
 struct blame_origin* FUNC_10 (struct commit*,char*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int,int ,char*,char const**) ;
 int FUNC_14 (struct repository*,struct diff_options*) ;
 int FUNC_15 (char const*,char const*) ;

__attribute__((used)) static struct blame_origin *FUNC_16(struct repository *VAR_5,
     struct commit *VAR_6,
     struct blame_origin *VAR_7)
{
 struct blame_origin *VAR_8;
 struct diff_options VAR_9;
 const char *VAR_10[2];


 for (VAR_8 = FUNC_8(VAR_6); VAR_8; VAR_8 = VAR_8->next)
  if (!FUNC_15(VAR_8->path, VAR_7->path)) {




   return FUNC_0 (VAR_8);
  }





 FUNC_14(VAR_5, &VAR_9);
 VAR_9.flags.recursive = 1;
 VAR_9.detect_rename = 0;
 VAR_9.output_format = VAR_0;
 VAR_10[0] = VAR_7->path;
 VAR_10[1] = ((void*)0);

 FUNC_13(&VAR_9.pathspec,
         VAR_1 & ~VAR_2,
         VAR_3, "", VAR_10);
 FUNC_4(&VAR_9);

 if (FUNC_11(&VAR_7->commit->object.oid))
  FUNC_7(FUNC_9(VAR_6), &VAR_9);
 else
  FUNC_5(FUNC_9(VAR_6),
         FUNC_9(VAR_7->commit),
         "", &VAR_9);
 FUNC_6(&VAR_9);

 if (!VAR_4.nr) {

  VAR_8 = FUNC_10(VAR_6, VAR_7->path);
  FUNC_12(&VAR_8->blob_oid, &VAR_7->blob_oid);
  VAR_8->mode = VAR_7->mode;
 } else {






  int VAR_11;
  struct diff_filepair *VAR_12 = ((void*)0);
  for (VAR_11 = 0; VAR_11 < VAR_4.nr; VAR_11++) {
   const char *VAR_13;
   VAR_12 = VAR_4.queue[VAR_11];
   VAR_13 = VAR_12->one->path ? VAR_12->one->path : VAR_12->two->path;
   if (!FUNC_15(VAR_13, VAR_7->path))
    break;
  }
  if (!VAR_12)
   FUNC_2("internal error in blame::find_origin");
  switch (VAR_12->status) {
  default:
   FUNC_2("internal error in blame::find_origin (%c)",
       VAR_12->status);
  case 'M':
   VAR_8 = FUNC_10(VAR_6, VAR_7->path);
   FUNC_12(&VAR_8->blob_oid, &VAR_12->one->oid);
   VAR_8->mode = VAR_12->one->mode;
   break;
  case 'A':
  case 'T':

   break;
  }
 }
 FUNC_3(&VAR_9);
 FUNC_1(&VAR_9.pathspec);
 return VAR_8;
}
