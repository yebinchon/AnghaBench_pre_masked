
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tree_desc {int dummy; } ;
struct TYPE_12__ {int oid; int flags; } ;
struct tree {TYPE_3__ object; int size; int buffer; } ;
struct traversal_context {TYPE_2__* revs; } ;
struct strbuf {int dummy; } ;
struct TYPE_16__ {int hash; } ;
struct name_entry {int path; TYPE_7__ oid; int mode; } ;
struct TYPE_13__ {int flags; } ;
struct blob {TYPE_4__ object; } ;
typedef enum interesting { ____Placeholder_interesting } interesting ;
struct TYPE_15__ {int index; } ;
struct TYPE_14__ {scalar_t__ nr; } ;
struct TYPE_10__ {TYPE_5__ pathspec; } ;
struct TYPE_11__ {TYPE_6__* repo; TYPE_1__ diffopt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct tree_desc*,int ,int ) ;
 struct blob* FUNC_5 (TYPE_6__*,TYPE_7__*) ;
 struct tree* FUNC_6 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct traversal_context*,struct blob*,struct strbuf*,int ) ;
 int FUNC_9 (struct traversal_context*,int ,struct strbuf*,int ) ;
 int FUNC_10 (struct traversal_context*,struct tree*,struct strbuf*,int ) ;
 scalar_t__ FUNC_11 (struct tree_desc*,struct name_entry*) ;
 int FUNC_12 (int ,struct name_entry*,struct strbuf*,int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_13(struct traversal_context *VAR_4,
      struct tree *VAR_5,
      struct strbuf *VAR_6)
{
 struct tree_desc VAR_7;
 struct name_entry VAR_8;
 enum interesting VAR_9 = VAR_4->revs->diffopt.pathspec.nr == 0 ?
  VAR_1 : VAR_3;

 FUNC_4(&VAR_7, VAR_5->buffer, VAR_5->size);

 while (FUNC_11(&VAR_7, &VAR_8)) {
  if (VAR_9 != VAR_1) {
   VAR_9 = FUNC_12(VAR_4->revs->repo->index,
             &VAR_8, VAR_6, 0,
             &VAR_4->revs->diffopt.pathspec);
   if (VAR_9 == VAR_2)
    break;
   if (VAR_9 == VAR_3)
    continue;
  }

  if (FUNC_0(VAR_8.mode)) {
   struct tree *VAR_10 = FUNC_6(VAR_4->revs->repo, &VAR_8.oid);
   if (!VAR_10) {
    FUNC_3(FUNC_2("entry '%s' in tree %s has tree mode, "
          "but is not a tree"),
        VAR_8.path, FUNC_7(&VAR_5->object.oid));
   }
   VAR_10->object.flags |= VAR_0;
   FUNC_10(VAR_4, VAR_10, VAR_6, VAR_8.path);
  }
  else if (FUNC_1(VAR_8.mode))
   FUNC_9(VAR_4, VAR_8.oid.hash,
     VAR_6, VAR_8.path);
  else {
   struct blob *VAR_11 = FUNC_5(VAR_4->revs->repo, &VAR_8.oid);
   if (!VAR_11) {
    FUNC_3(FUNC_2("entry '%s' in tree %s has blob mode, "
          "but is not a blob"),
        VAR_8.path, FUNC_7(&VAR_5->object.oid));
   }
   VAR_11->object.flags |= VAR_0;
   FUNC_8(VAR_4, VAR_11, VAR_6, VAR_8.path);
  }
 }
}
