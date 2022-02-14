
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sg_buf ;
typedef int git_commit ;
struct TYPE_23__ {struct TYPE_23__* previous; scalar_t__ blob; int * commit; } ;
typedef TYPE_2__ git_blame__origin ;
struct TYPE_22__ {int oldest_commit; } ;
struct TYPE_24__ {TYPE_1__ options; } ;
typedef TYPE_3__ git_blame ;


 scalar_t__ FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (TYPE_3__*,int *,TYPE_2__*) ;
 TYPE_2__** FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_2__**) ;
 int * FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int **,int *,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (TYPE_2__**,int ,int) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_16 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_17(git_blame *VAR_1, git_blame__origin *VAR_2, uint32_t VAR_3)
{
 git_commit *VAR_4 = VAR_2->commit;
 int VAR_5, VAR_6;
 git_blame__origin *VAR_7[16];
 git_blame__origin *VAR_8, **VAR_9 = VAR_7;
 int VAR_10, VAR_11 = 0;

 VAR_6 = FUNC_9(VAR_4);
 if (!FUNC_10(FUNC_7(VAR_4), &VAR_1->options.oldest_commit))

  VAR_6 = 0;
 else if (VAR_3 & VAR_0 && VAR_6 > 1)

  VAR_6 = 1;

 if (!VAR_6) {
  FUNC_11(&VAR_1->options.oldest_commit, FUNC_7(VAR_4));
  goto finish;
 } else if (VAR_6 < (int)FUNC_0(VAR_7))
  FUNC_12(VAR_7, 0, sizeof(VAR_7));
 else {
  VAR_9 = FUNC_3(VAR_6, sizeof(*VAR_9));
  FUNC_1(VAR_9);
 }

 for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
  git_commit *VAR_12;
  int VAR_13, VAR_14;

  if (VAR_9[VAR_5])
   continue;

  if ((VAR_11 = FUNC_8(&VAR_12, VAR_2->commit, VAR_5)) < 0)
   goto finish;
  VAR_8 = FUNC_2(VAR_1, VAR_12, VAR_2);

  if (!VAR_8) {






   FUNC_6(VAR_12);
   continue;
  }
  if (VAR_8->blob && VAR_2->blob &&
      !FUNC_10(FUNC_5(VAR_8->blob), FUNC_5(VAR_2->blob))) {
   VAR_11 = FUNC_16(VAR_1, VAR_2, VAR_8);
   FUNC_13(VAR_8);
   goto finish;
  }
  for (VAR_13 = VAR_14 = 0; VAR_13<VAR_5; VAR_13++)
   if (VAR_9[VAR_13] &&
     !FUNC_10(FUNC_5(VAR_9[VAR_13]->blob), FUNC_5(VAR_8->blob))) {
    VAR_14 = 1;
    break;
   }
  if (!VAR_14)
   VAR_9[VAR_5] = VAR_8;
  else
   FUNC_13(VAR_8);
 }


 for (VAR_5=0; VAR_5<VAR_6; VAR_5++) {
  git_blame__origin *VAR_15 = VAR_9[VAR_5];
  if (!VAR_15)
   continue;
  if (!VAR_2->previous) {
   FUNC_14(VAR_15);
   VAR_2->previous = VAR_15;
  }

  if ((VAR_10 = FUNC_15(VAR_1, VAR_2, VAR_15)) != 0) {
   if (VAR_10 < 0)
    VAR_11 = -1;

   goto finish;
  }
 }





finish:
 for (VAR_5=0; VAR_5<VAR_6; VAR_5++)
  if (VAR_9[VAR_5])
   FUNC_13(VAR_9[VAR_5]);
 if (VAR_9 != VAR_7)
  FUNC_4(VAR_9);
 return VAR_11;
}
