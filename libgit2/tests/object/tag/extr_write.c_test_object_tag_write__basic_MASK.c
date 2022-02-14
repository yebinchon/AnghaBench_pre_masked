
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tag ;
struct TYPE_7__ {int time; int offset; } ;
struct TYPE_8__ {TYPE_1__ when; int email; int name; } ;
typedef TYPE_2__ git_signature ;
typedef int git_reference ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int **,int ,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__**,int ,int ,int,int) ;
 int FUNC_13 (int *,int ,char*,int *,TYPE_2__*,int ,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int **,int ,int *) ;
 int FUNC_16 (int *) ;
 TYPE_2__* FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_19(void)
{

 git_tag *VAR_6;
 git_oid VAR_7, VAR_8;
 git_signature *VAR_9;
 const git_signature *VAR_10;
 git_reference *VAR_11;
 git_object *VAR_12;

 FUNC_6(&VAR_7, VAR_2);
 FUNC_2(FUNC_4(&VAR_12, VAR_1, &VAR_7, VAR_0));


 FUNC_2(FUNC_12(&VAR_9, VAR_5, VAR_3, 123456789, 60));

 FUNC_2(
  FUNC_13(&VAR_8, VAR_1,
    "the-tag", VAR_12, VAR_9, VAR_4, 0)
 );

 FUNC_3(VAR_12);
 FUNC_11(VAR_9);

 FUNC_2(FUNC_15(&VAR_6, VAR_1, &VAR_8));
 FUNC_0(FUNC_5(FUNC_18(VAR_6), &VAR_7) == 0);


 VAR_10 = FUNC_17(VAR_6);
 FUNC_0(VAR_10 != ((void*)0));
 FUNC_1(VAR_10->name, VAR_5);
 FUNC_1(VAR_10->email, VAR_3);
 FUNC_0(VAR_10->when.time == 123456789);
 FUNC_0(VAR_10->when.offset == 60);

 FUNC_1(FUNC_16(VAR_6), VAR_4);

 FUNC_2(FUNC_9(&VAR_11, VAR_1, "refs/tags/the-tag"));
 FUNC_0(FUNC_5(FUNC_10(VAR_11), &VAR_8) == 0);
 FUNC_2(FUNC_7(VAR_11));
 FUNC_8(VAR_11);

 FUNC_14(VAR_6);
}
