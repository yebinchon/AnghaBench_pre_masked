
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rewrite_notes_ref; } ;
struct TYPE_5__ {int repo; TYPE_1__ options; } ;
typedef TYPE_2__ git_rebase ;
typedef int git_config ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int*,int *,char*) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int **,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(git_buf *VAR_1, git_rebase *VAR_2)
{
 git_config *VAR_3 = ((void*)0);
 int VAR_4, VAR_5;

 if (VAR_2->options.rewrite_notes_ref) {
  FUNC_0(VAR_1,
   VAR_2->options.rewrite_notes_ref,
   FUNC_6(VAR_2->options.rewrite_notes_ref));
  return 0;
 }

 if ((VAR_5 = FUNC_5(&VAR_3, VAR_2->repo)) < 0 ||
  (VAR_5 = FUNC_2(&VAR_4, VAR_3, "notes.rewrite.rebase")) < 0) {

  if (VAR_5 != VAR_0)
   goto done;

  FUNC_4();
  VAR_4 = 1;
 }

 VAR_5 = VAR_4 ?
  FUNC_3(VAR_1, VAR_3, "notes.rewriteref") :
  VAR_0;

done:
 FUNC_1(VAR_3);
 return VAR_5;
}
