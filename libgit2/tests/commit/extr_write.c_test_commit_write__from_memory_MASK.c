
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int git_tree ;
struct TYPE_9__ {int time; int offset; } ;
struct TYPE_10__ {TYPE_1__ when; int email; int name; } ;
typedef TYPE_2__ git_signature ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_commit ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int *,TYPE_2__*,TYPE_2__*,int *,int ,int *,int,int *) ;
 int FUNC_6 (int **,int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__**,int ,int ,int,int) ;
 int FUNC_12 (int **,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_13(void)
{
   git_oid VAR_7, VAR_8, VAR_9;
   git_signature *VAR_10, *VAR_11;
   const git_signature *VAR_12, *VAR_13;
   git_commit *VAR_14;
   git_tree *VAR_15;

   FUNC_9(&VAR_7, VAR_6);
   FUNC_2(FUNC_12(&VAR_15, VAR_4, &VAR_7));

   FUNC_9(&VAR_8, VAR_5);
   FUNC_2(FUNC_6(&VAR_14, VAR_4, &VAR_8));


   FUNC_2(FUNC_11(&VAR_11, VAR_3, VAR_2, 123456789, 60));
   FUNC_2(FUNC_11(&VAR_10, VAR_3, VAR_2, 987654321, 90));

   FUNC_2(FUNC_5(
      &VAR_9,
      VAR_4,
      ((void*)0),
      VAR_10,
      VAR_11,
      ((void*)0),
      VAR_1,
      VAR_15,
      1, VAR_14));

   FUNC_8((git_object *)VAR_14);
   FUNC_8((git_object *)VAR_15);

   FUNC_10(VAR_11);
   FUNC_10(VAR_10);

   FUNC_2(FUNC_6(&VAR_0, VAR_4, &VAR_9));


   VAR_12 = FUNC_3(VAR_0);
   FUNC_0(VAR_12 != ((void*)0));
   FUNC_1(VAR_3, VAR_12->name);
   FUNC_1(VAR_2, VAR_12->email);
   FUNC_0(VAR_12->when.time == 987654321);
   FUNC_0(VAR_12->when.offset == 90);

   VAR_13 = FUNC_4(VAR_0);
   FUNC_0(VAR_13 != ((void*)0));
   FUNC_1(VAR_3, VAR_13->name);
   FUNC_1(VAR_2, VAR_13->email);
   FUNC_0(VAR_13->when.time == 123456789);
   FUNC_0(VAR_13->when.offset == 60);

   FUNC_1(VAR_1, FUNC_7(VAR_0));
}
