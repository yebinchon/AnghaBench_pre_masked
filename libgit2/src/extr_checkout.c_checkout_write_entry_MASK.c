
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_15__ {char* path; int mode; int id; } ;
typedef TYPE_2__ git_index_entry ;
struct TYPE_16__ {int ptr; } ;
typedef TYPE_3__ git_buf ;
struct TYPE_14__ {char* our_label; char* their_label; } ;
struct TYPE_17__ {int strategy; TYPE_1__ opts; } ;
typedef TYPE_4__ checkout_data ;
struct TYPE_18__ {TYPE_2__ const* ours; scalar_t__ directoryfile; scalar_t__ name_collision; TYPE_2__ const* theirs; } ;
typedef TYPE_5__ checkout_conflictdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,char const*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_3__**,TYPE_4__*,char*) ;
 int FUNC_5 (TYPE_4__*,int *,int ,char const*,int ,struct stat*) ;

__attribute__((used)) static int FUNC_6(
 checkout_data *VAR_3,
 checkout_conflictdata *VAR_4,
 const git_index_entry *VAR_5)
{
 const char *VAR_6 = ((void*)0), *VAR_7;
 git_buf *VAR_8;
 struct stat VAR_9;
 int VAR_10;

 FUNC_1 (VAR_5 == VAR_4->ours || VAR_5 == VAR_4->theirs);

 if (FUNC_4(&VAR_8, VAR_3, VAR_5->path) < 0)
  return -1;

 if ((VAR_4->name_collision || VAR_4->directoryfile) &&
  (VAR_3->strategy & VAR_1) == 0 &&
  (VAR_3->strategy & VAR_2) == 0) {

  if (VAR_5 == VAR_4->ours)
   VAR_7 = VAR_3->opts.our_label ? VAR_3->opts.our_label :
    "ours";
  else
   VAR_7 = VAR_3->opts.their_label ? VAR_3->opts.their_label :
    "theirs";

  if (FUNC_2(VAR_8, VAR_7) < 0)
   return -1;

  VAR_6 = VAR_5->path;
 }

 if ((VAR_3->strategy & VAR_0) != 0 &&
  (VAR_10 = FUNC_3(VAR_3, VAR_8->ptr, VAR_5->mode)) <= 0)
  return VAR_10;

 if (!FUNC_0(VAR_5->mode))
  return FUNC_5(VAR_3,
           &VAR_5->id, VAR_8->ptr, VAR_6, VAR_5->mode, &VAR_9);

 return 0;
}
