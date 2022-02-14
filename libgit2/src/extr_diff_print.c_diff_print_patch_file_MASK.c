
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int id_abbrev; int mode; } ;
struct TYPE_9__ {int id_abbrev; } ;
struct TYPE_11__ {int flags; scalar_t__ status; TYPE_2__ new_file; TYPE_1__ old_file; } ;
typedef TYPE_3__ git_diff_delta ;
struct TYPE_13__ {int content_len; int content; int origin; } ;
struct TYPE_12__ {char* old_prefix; char* new_prefix; int flags; int id_strlen; int (* print_cb ) (TYPE_3__ const*,int *,TYPE_6__*,int ) ;int payload; TYPE_6__ line; int buf; } ;
typedef TYPE_4__ diff_print_info ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (float) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_3__ const*,char const*,char const*,int) ;
 int FUNC_5 (TYPE_3__ const*,int *,TYPE_6__*,int ) ;

__attribute__((used)) static int FUNC_6(
 const git_diff_delta *VAR_11, float VAR_12, void *VAR_13)
{
 int VAR_14;
 diff_print_info *VAR_15 = VAR_13;
 const char *VAR_16 =
  VAR_15->old_prefix ? VAR_15->old_prefix : VAR_1;
 const char *VAR_17 =
  VAR_15->new_prefix ? VAR_15->new_prefix : VAR_0;

 bool VAR_18 = (VAR_11->flags & VAR_6) ||
  (VAR_15->flags & VAR_7);
 bool VAR_19 = !!(VAR_15->flags & VAR_9);
 int VAR_20 = VAR_15->id_strlen;

 if (VAR_18 && VAR_19)
  VAR_20 = VAR_11->old_file.id_abbrev ? VAR_11->old_file.id_abbrev :
   VAR_11->new_file.id_abbrev;

 FUNC_0(VAR_12);

 if (FUNC_1(VAR_11->new_file.mode) ||
  VAR_11->status == VAR_3 ||
  VAR_11->status == VAR_2 ||
  VAR_11->status == VAR_4 ||
  (VAR_11->status == VAR_5 &&
   (VAR_15->flags & VAR_10) == 0))
  return 0;

 if ((VAR_14 = FUNC_4(
   VAR_15->buf, VAR_11, VAR_16, VAR_17, VAR_20)) < 0)
  return VAR_14;

 VAR_15->line.origin = VAR_8;
 VAR_15->line.content = FUNC_2(VAR_15->buf);
 VAR_15->line.content_len = FUNC_3(VAR_15->buf);

 return VAR_15->print_cb(VAR_11, ((void*)0), &VAR_15->line, VAR_15->payload);
}
