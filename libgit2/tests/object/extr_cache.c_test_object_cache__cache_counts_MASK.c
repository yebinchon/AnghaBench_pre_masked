
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_odb_object ;
typedef int git_odb ;
typedef int git_object ;
struct TYPE_7__ {scalar_t__ type; scalar_t__ size; int * sha; } ;
struct TYPE_6__ {int objects; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 TYPE_5__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,TYPE_1__*,int *,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int **,int *,int *) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int **,TYPE_1__*) ;
 int FUNC_15 (TYPE_1__**,int ) ;
 scalar_t__ VAR_6 ;

void FUNC_16(void)
{
 int VAR_7, VAR_8, VAR_9 = 0;
 git_oid VAR_10;
 git_odb_object *VAR_11;
 git_object *VAR_12;
 git_odb *VAR_13;

 FUNC_5(VAR_2, VAR_6, VAR_3);

 FUNC_3(FUNC_15(&VAR_5, FUNC_2("testrepo.git")));
 FUNC_3(FUNC_14(&VAR_13, VAR_5));

 VAR_8 = (int)FUNC_4(&VAR_5->objects);

 for (VAR_7 = 0; VAR_4[VAR_7].sha != ((void*)0); ++VAR_7) {
  int VAR_14 = (int)FUNC_4(&VAR_5->objects);

  FUNC_3(FUNC_13(&VAR_10, VAR_4[VAR_7].sha));


  if ((VAR_7 & 1) == 0) {
   FUNC_3(FUNC_12(&VAR_11, VAR_13, &VAR_10));
   FUNC_0(VAR_4[VAR_7].type == FUNC_11(VAR_11));
   FUNC_10(VAR_11);
  } else {
   FUNC_3(FUNC_7(&VAR_12, VAR_5, &VAR_10, VAR_0));
   FUNC_0(VAR_4[VAR_7].type == FUNC_8(VAR_12));
   FUNC_6(VAR_12);
  }

  if ((VAR_4[VAR_7].type == VAR_6 && VAR_4[VAR_7].size >= VAR_3) ||
      (VAR_4[VAR_7].type != VAR_6 && VAR_4[VAR_7].type == VAR_1))
   FUNC_1(VAR_14, (int)FUNC_4(&VAR_5->objects));
  else {
   FUNC_1(VAR_14 + 1, (int)FUNC_4(&VAR_5->objects));
   VAR_9++;
  }
 }

 FUNC_1(VAR_9, (int)FUNC_4(&VAR_5->objects) - VAR_8);

 for (VAR_7 = 0; VAR_4[VAR_7].sha != ((void*)0); ++VAR_7) {
  int VAR_15 = (int)FUNC_4(&VAR_5->objects);

  FUNC_3(FUNC_13(&VAR_10, VAR_4[VAR_7].sha));
  FUNC_3(FUNC_7(&VAR_12, VAR_5, &VAR_10, VAR_0));
  FUNC_0(VAR_4[VAR_7].type == FUNC_8(VAR_12));
  FUNC_6(VAR_12);

  FUNC_1(VAR_15, (int)FUNC_4(&VAR_5->objects));
 }

 FUNC_9(VAR_13);
}
