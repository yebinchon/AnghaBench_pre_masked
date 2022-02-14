
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_24__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_18__ ;
typedef struct TYPE_26__ TYPE_16__ ;


struct TYPE_29__ {size_t length; TYPE_2__** contents; } ;
struct TYPE_28__ {size_t next_idx; TYPE_24__ entries; } ;
typedef TYPE_1__ tree_iterator_frame ;
struct TYPE_30__ {int tree_entry; } ;
typedef TYPE_2__ tree_iterator_entry ;
struct TYPE_26__ {int ptr; } ;
struct TYPE_27__ {int flags; } ;
struct TYPE_31__ {int entry; TYPE_16__ entry_path; TYPE_18__ base; } ;
typedef TYPE_3__ tree_iterator ;
typedef int git_iterator ;
typedef int git_index_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_24__*) ;
 int FUNC_2 (TYPE_24__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_18__*) ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_18__*,int ) ;
 int FUNC_7 (TYPE_18__*,int ,int) ;
 int FUNC_8 (TYPE_18__*,int ) ;
 int FUNC_9 (TYPE_16__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_1__*) ;
 TYPE_1__* FUNC_11 (TYPE_3__*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(const git_index_entry **VAR_2, git_iterator *VAR_3)
{
 tree_iterator *VAR_4 = (tree_iterator *)VAR_3;
 int VAR_5 = 0;

 VAR_4->base.flags |= VAR_0;


 while (1) {
  tree_iterator_entry *VAR_6, *VAR_7;
  tree_iterator_frame *VAR_8;
  bool VAR_9;

  if ((VAR_8 = FUNC_11(VAR_4)) == ((void*)0)) {
   VAR_5 = VAR_1;
   break;
  }


  if (VAR_8->next_idx == VAR_8->entries.length) {
   FUNC_13(VAR_4);
   continue;
  }




  if (VAR_8->next_idx == 0 && !FUNC_1(&VAR_8->entries))
   FUNC_2(&VAR_8->entries);


  VAR_6 = FUNC_10(VAR_8);
  VAR_7 = VAR_8->entries.contents[VAR_8->next_idx];
  VAR_8->next_idx++;




  if (FUNC_4(&VAR_4->base) &&
   VAR_6 &&
   FUNC_12(VAR_6, VAR_7) == 0)
   continue;

  if ((VAR_5 = FUNC_9(&VAR_4->entry_path, VAR_7)) < 0)
   break;


  if (!FUNC_7(&VAR_4->base, VAR_4->entry_path.ptr, 0))
   continue;


  if (FUNC_6(&VAR_4->base, VAR_4->entry_path.ptr)) {
   VAR_5 = VAR_1;
   break;
  }


  if (!FUNC_8(&VAR_4->base, VAR_4->entry_path.ptr))
   continue;

  VAR_9 = FUNC_0(VAR_7->tree_entry);


  if (VAR_9 && !FUNC_5(VAR_4)) {





   if (FUNC_3(VAR_4)) {
    if ((VAR_5 = FUNC_14(VAR_4, VAR_7)) < 0)
     break;
   }

   continue;
  }

  FUNC_15(VAR_4, VAR_8, VAR_7);




  if (VAR_9 && FUNC_3(VAR_4))
   VAR_5 = FUNC_14(VAR_4, VAR_7);

  break;
 }

 if (VAR_2)
  *VAR_2 = (VAR_5 == 0) ? &VAR_4->entry : ((void*)0);

 return VAR_5;
}
