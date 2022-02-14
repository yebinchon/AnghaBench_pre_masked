
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int id_abbrev; scalar_t__ path; int mode; int id; } ;
struct TYPE_8__ {int id_abbrev; scalar_t__ path; scalar_t__ mode; int id; } ;
struct TYPE_10__ {scalar_t__ similarity; TYPE_2__ new_file; TYPE_1__ old_file; int status; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_buf ;
struct TYPE_12__ {int content_len; int content; int origin; } ;
struct TYPE_11__ {int flags; int id_strlen; int (* print_cb ) (TYPE_3__ const*,int *,TYPE_6__*,int ) ;int payload; TYPE_6__ line; int * buf; } ;
typedef TYPE_4__ diff_print_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (float) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,scalar_t__,...) ;
 char FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int,int) ;
 int FUNC_8 (char*,int,int *) ;
 int FUNC_9 (TYPE_3__ const*,int *,TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_10(
 const git_diff_delta *VAR_4, float VAR_5, void *VAR_6)
{
 diff_print_info *VAR_7 = VAR_6;
 git_buf *VAR_8 = VAR_7->buf;
 int VAR_9;
 char VAR_10 = FUNC_6(VAR_4->status);
 char VAR_11[VAR_3+1], VAR_12[VAR_3+1];

 FUNC_0(VAR_5);

 if ((VAR_7->flags & VAR_1) == 0 && VAR_10 == ' ')
  return 0;

 FUNC_1(VAR_8);

 VAR_9 = VAR_4->old_file.mode ? VAR_4->old_file.id_abbrev :
  VAR_4->new_file.id_abbrev;

 if (VAR_7->id_strlen > VAR_9) {
  FUNC_7(VAR_2,
   "the patch input contains %d id characters (cannot print %d)",
   VAR_9, VAR_7->id_strlen);
  return -1;
 }

 FUNC_8(VAR_11, VAR_7->id_strlen + 1, &VAR_4->old_file.id);
 FUNC_8(VAR_12, VAR_7->id_strlen + 1, &VAR_4->new_file.id);

 FUNC_5(
  VAR_8, (VAR_7->id_strlen <= VAR_3) ?
   ":%06o %06o %s... %s... %c" : ":%06o %06o %s %s %c",
  VAR_4->old_file.mode, VAR_4->new_file.mode, VAR_11, VAR_12, VAR_10);

 if (VAR_4->similarity > 0)
  FUNC_5(VAR_8, "%03u", VAR_4->similarity);

 if (VAR_4->old_file.path != VAR_4->new_file.path)
  FUNC_5(
   VAR_8, "\t%s %s\n", VAR_4->old_file.path, VAR_4->new_file.path);
 else
  FUNC_5(
   VAR_8, "\t%s\n", VAR_4->old_file.path ?
   VAR_4->old_file.path : VAR_4->new_file.path);

 if (FUNC_4(VAR_8))
  return -1;

 VAR_7->line.origin = VAR_0;
 VAR_7->line.content = FUNC_2(VAR_8);
 VAR_7->line.content_len = FUNC_3(VAR_8);

 return VAR_7->print_cb(VAR_4, ((void*)0), &VAR_7->line, VAR_7->payload);
}
