
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int header_len; int header; } ;
typedef TYPE_2__ git_diff_hunk ;
struct TYPE_10__ {int mode; } ;
struct TYPE_12__ {TYPE_1__ new_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_14__ {int content_len; int content; int origin; } ;
struct TYPE_13__ {int (* print_cb ) (TYPE_3__ const*,TYPE_2__ const*,TYPE_7__*,int ) ;int payload; TYPE_7__ line; } ;
typedef TYPE_4__ diff_print_info ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__ const*,TYPE_2__ const*,TYPE_7__*,int ) ;

__attribute__((used)) static int FUNC_2(
 const git_diff_delta *VAR_1,
 const git_diff_hunk *VAR_2,
 void *VAR_3)
{
 diff_print_info *VAR_4 = VAR_3;

 if (FUNC_0(VAR_1->new_file.mode))
  return 0;

 VAR_4->line.origin = VAR_0;
 VAR_4->line.content = VAR_2->header;
 VAR_4->line.content_len = VAR_2->header_len;

 return VAR_4->print_cb(VAR_1, VAR_2, &VAR_4->line, VAR_4->payload);
}
