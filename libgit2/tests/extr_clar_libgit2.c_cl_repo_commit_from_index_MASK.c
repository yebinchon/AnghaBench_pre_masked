
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_time_t ;
struct TYPE_8__ {scalar_t__ email; scalar_t__ name; } ;
typedef TYPE_1__ git_signature ;
typedef int git_repository ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;
typedef int git_index ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,char*,TYPE_1__*,TYPE_1__*,int *,char const*,int *,int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (char*,int,int *) ;
 int FUNC_9 (int *) ;
 char* FUNC_10 (int *) ;
 int FUNC_11 (int **,int *) ;
 int FUNC_12 (int **,int **,int *,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__**,int ,int ,int ,int ) ;
 int FUNC_15 (TYPE_1__**,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int **,int *,int *) ;
 int FUNC_18 (char*,int ) ;
 int FUNC_19 (int ) ;

void FUNC_20(
 git_oid *VAR_3,
 git_repository *VAR_4,
 git_signature *VAR_5,
 git_time_t VAR_6,
 const char *VAR_7)
{
 git_index *VAR_8;
 git_oid VAR_9, VAR_10;
 git_object *VAR_11 = ((void*)0);
 git_reference *VAR_12 = ((void*)0);
 git_tree *VAR_13 = ((void*)0);
 char VAR_14[128];
 int VAR_15 = (VAR_5 == ((void*)0));


 FUNC_12(&VAR_11, &VAR_12, VAR_4, "HEAD");


 FUNC_1(FUNC_11(&VAR_8, VAR_4));
 FUNC_1(FUNC_5(&VAR_10, VAR_8));
 FUNC_1(FUNC_4(VAR_8));
 FUNC_3(VAR_8);

 FUNC_1(FUNC_17(&VAR_13, VAR_4, &VAR_10));

 if (VAR_5)
  FUNC_0(VAR_5->name && VAR_5->email);
 else if (!VAR_6)
  FUNC_1(FUNC_15(&VAR_5, VAR_2, VAR_0));
 else
  FUNC_1(FUNC_14(
   &VAR_5, VAR_2, VAR_0, VAR_6, 0));

 if (!VAR_7) {
  FUNC_18(VAR_14, VAR_1);
  FUNC_8(VAR_14 + FUNC_19(VAR_1),
   sizeof(VAR_14) - FUNC_19(VAR_1), &VAR_10);
  VAR_7 = VAR_14;
 }

 FUNC_1(FUNC_2(
  &VAR_9, VAR_4, VAR_12 ? FUNC_10(VAR_12) : "HEAD",
  VAR_5, VAR_5, ((void*)0), VAR_7, VAR_13, VAR_11 ? 1 : 0, VAR_11));

 if (VAR_3)
  FUNC_7(VAR_3, &VAR_9);

 FUNC_6(VAR_11);
 FUNC_9(VAR_12);
 if (VAR_15)
  FUNC_13(VAR_5);
 FUNC_16(VAR_13);
}
