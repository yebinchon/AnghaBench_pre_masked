
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int path; } ;
struct TYPE_8__ {scalar_t__ status; TYPE_1__ new_file; } ;
typedef TYPE_2__ git_diff_delta ;
typedef int git_buf ;
struct TYPE_10__ {int content_len; int content; int origin; } ;
struct TYPE_9__ {int flags; int (* print_cb ) (TYPE_2__ const*,int *,TYPE_5__*,int ) ;int payload; TYPE_5__ line; int * buf; } ;
typedef TYPE_3__ diff_print_info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (float) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,char) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__ const*,int *,TYPE_5__*,int ) ;

__attribute__((used)) static int FUNC_8(
 const git_diff_delta *VAR_3, float VAR_4, void *VAR_5)
{
 diff_print_info *VAR_6 = VAR_5;
 git_buf *VAR_7 = VAR_6->buf;

 FUNC_0(VAR_4);

 if ((VAR_6->flags & VAR_2) == 0 &&
  VAR_3->status == VAR_0)
  return 0;

 FUNC_1(VAR_7);
 FUNC_6(VAR_7, VAR_3->new_file.path);
 FUNC_5(VAR_7, '\n');
 if (FUNC_4(VAR_7))
  return -1;

 VAR_6->line.origin = VAR_1;
 VAR_6->line.content = FUNC_2(VAR_7);
 VAR_6->line.content_len = FUNC_3(VAR_7);

 return VAR_6->print_cb(VAR_3, ((void*)0), &VAR_6->line, VAR_6->payload);
}
