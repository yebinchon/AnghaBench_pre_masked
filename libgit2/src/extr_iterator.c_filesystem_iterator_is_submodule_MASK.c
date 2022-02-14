
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ attr; } ;
typedef TYPE_2__ git_tree_entry ;
struct TYPE_11__ {scalar_t__ mode; } ;
typedef TYPE_3__ git_index_entry ;
struct TYPE_9__ {int entry_srch; scalar_t__ index; } ;
struct TYPE_12__ {int index_snapshot; TYPE_1__ base; scalar_t__ tree; } ;
typedef TYPE_4__ filesystem_iterator ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (size_t*,int *,int ,char const*,size_t,int ) ;
 int FUNC_1 (TYPE_2__**,scalar_t__,char const*) ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_3__* FUNC_3 (int *,size_t) ;

__attribute__((used)) static int FUNC_4(
 bool *VAR_2, filesystem_iterator *VAR_3, const char *VAR_4, size_t VAR_5)
{
 bool VAR_6 = 0;
 int VAR_7;

 *VAR_2 = 0;


 if (VAR_3->tree) {
  git_tree_entry *VAR_8;

  VAR_7 = FUNC_1(&VAR_8, VAR_3->tree, VAR_4);

  if (VAR_7 < 0 && VAR_7 != VAR_0)
   return VAR_7;

  if (!VAR_7) {
   VAR_6 = (VAR_8->attr == VAR_1);
   FUNC_2(VAR_8);
  }
 }

 if (!VAR_6 && VAR_3->base.index) {
  size_t VAR_9;

  VAR_7 = FUNC_0(&VAR_9,
   &VAR_3->index_snapshot, VAR_3->base.entry_srch, VAR_4, VAR_5, 0);

  if (VAR_7 < 0 && VAR_7 != VAR_0)
   return VAR_7;

  if (!VAR_7) {
   git_index_entry *VAR_10 = FUNC_3(&VAR_3->index_snapshot, VAR_9);
   VAR_6 = (VAR_10->mode == VAR_1);
  }
 }

 *VAR_2 = VAR_6;
 return 0;
}
