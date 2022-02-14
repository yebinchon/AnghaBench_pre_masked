
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct tree {TYPE_1__ object; } ;
struct traversal_context {TYPE_3__* revs; int show_data; int (* show_commit ) (struct commit*,int ) ;} ;
struct strbuf {int dummy; } ;
struct TYPE_6__ {int oid; scalar_t__ parsed; } ;
struct commit {TYPE_2__ object; } ;
struct TYPE_7__ {scalar_t__ tree_blobs_in_commit_order; int tree_objects; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*,struct tree*) ;
 int FUNC_2 (int ,int ) ;
 struct tree* FUNC_3 (struct commit*) ;
 struct commit* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct strbuf*,int ) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct commit*,int ) ;
 int FUNC_9 (struct traversal_context*,struct strbuf*) ;

__attribute__((used)) static void FUNC_10(struct traversal_context *VAR_2)
{
 struct commit *VAR_3;
 struct strbuf VAR_4;
 FUNC_6(&VAR_4, VAR_1);

 while ((VAR_3 = FUNC_4(VAR_2->revs)) != ((void*)0)) {




  if (!VAR_2->revs->tree_objects)
   ;
  else if (FUNC_3(VAR_3)) {
   struct tree *VAR_5 = FUNC_3(VAR_3);
   VAR_5->object.flags |= VAR_0;
   FUNC_1(VAR_2->revs, VAR_5);
  } else if (VAR_3->object.parsed) {
   FUNC_2(FUNC_0("unable to load root tree for commit %s"),
         FUNC_5(&VAR_3->object.oid));
  }
  VAR_2->show_commit(VAR_3, VAR_2->show_data);

  if (VAR_2->revs->tree_blobs_in_commit_order)





   FUNC_9(VAR_2, &VAR_4);
 }
 FUNC_9(VAR_2, &VAR_4);
 FUNC_7(&VAR_4);
}
