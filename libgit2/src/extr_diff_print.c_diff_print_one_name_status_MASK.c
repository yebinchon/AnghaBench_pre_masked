
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mode; char const* path; } ;
struct TYPE_8__ {scalar_t__ mode; char const* path; } ;
struct TYPE_10__ {TYPE_2__ old_file; TYPE_1__ new_file; int status; } ;
typedef TYPE_3__ git_diff_delta ;
typedef int git_buf ;
struct TYPE_12__ {int content_len; int content; int origin; } ;
struct TYPE_11__ {int (* strcomp ) (char const*,char const*) ;int flags; int (* print_cb ) (TYPE_3__ const*,int *,TYPE_6__*,int ) ;int payload; TYPE_6__ line; int * buf; } ;
typedef TYPE_4__ diff_print_info ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (float) ;
 char FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*,char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,char,char const*,...) ;
 char FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__ const*,int *,TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_10(
 const git_diff_delta *VAR_2, float VAR_3, void *VAR_4)
{
 diff_print_info *VAR_5 = VAR_4;
 git_buf *VAR_6 = VAR_5->buf;
 char VAR_7, VAR_8, VAR_9 = FUNC_8(VAR_2->status);
 int(*VAR_10)(const char *, const char *) = VAR_5->strcomp ?
  VAR_5->strcomp : FUNC_2;

 FUNC_0(VAR_3);

 if ((VAR_5->flags & VAR_1) == 0 && VAR_9 == ' ')
  return 0;

 VAR_7 = FUNC_1(VAR_2->old_file.mode);
 VAR_8 = FUNC_1(VAR_2->new_file.mode);

 FUNC_3(VAR_6);

 if (VAR_2->old_file.path != VAR_2->new_file.path &&
  VAR_10(VAR_2->old_file.path,VAR_2->new_file.path) != 0)
  FUNC_7(VAR_6, "%c\t%s%c %s%c\n", VAR_9,
   VAR_2->old_file.path, VAR_7, VAR_2->new_file.path, VAR_8);
 else if (VAR_2->old_file.mode != VAR_2->new_file.mode &&
  VAR_2->old_file.mode != 0 && VAR_2->new_file.mode != 0)
  FUNC_7(VAR_6, "%c\t%s%c %s%c\n", VAR_9,
   VAR_2->old_file.path, VAR_7, VAR_2->new_file.path, VAR_8);
 else if (VAR_7 != ' ')
  FUNC_7(VAR_6, "%c\t%s%c\n", VAR_9, VAR_2->old_file.path, VAR_7);
 else
  FUNC_7(VAR_6, "%c\t%s\n", VAR_9, VAR_2->old_file.path);
 if (FUNC_6(VAR_6))
  return -1;

 VAR_5->line.origin = VAR_0;
 VAR_5->line.content = FUNC_4(VAR_6);
 VAR_5->line.content_len = FUNC_5(VAR_6);

 return VAR_5->print_cb(VAR_2, ((void*)0), &VAR_5->line, VAR_5->payload);
}
