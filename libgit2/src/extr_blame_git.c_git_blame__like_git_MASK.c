
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int commit; } ;
typedef TYPE_2__ git_blame__origin ;
struct TYPE_15__ {int guilty; int is_boundary; TYPE_2__* suspect; struct TYPE_15__* next; } ;
typedef TYPE_3__ git_blame__entry ;
struct TYPE_13__ {int oldest_commit; } ;
struct TYPE_16__ {TYPE_1__ options; TYPE_3__* ent; } ;
typedef TYPE_4__ git_blame ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_2__*) ;

int FUNC_7(git_blame *VAR_0, uint32_t VAR_1)
{
 int VAR_2 = 0;

 while (1) {
  git_blame__entry *VAR_3;
  git_blame__origin *VAR_4 = ((void*)0);


  for (VAR_3 = VAR_0->ent; !VAR_4 && VAR_3; VAR_3 = VAR_3->next)
   if (!VAR_3->guilty)
    VAR_4 = VAR_3->suspect;
  if (!VAR_4)
   break;


  FUNC_4(VAR_4);

  if ((VAR_2 = FUNC_5(VAR_0, VAR_4, VAR_1)) < 0)
   break;


  for (VAR_3 = VAR_0->ent; VAR_3; VAR_3 = VAR_3->next) {
   if (FUNC_6(VAR_3->suspect, VAR_4)) {
    VAR_3->guilty = 1;
    VAR_3->is_boundary = !FUNC_2(
      FUNC_1(VAR_4->commit),
      &VAR_0->options.oldest_commit);
   }
  }
  FUNC_3(VAR_4);
 }

 if (!VAR_2)
  FUNC_0(VAR_0);

 return VAR_2;
}
