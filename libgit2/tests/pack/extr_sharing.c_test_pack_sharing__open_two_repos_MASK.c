
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; } ;
struct git_pack_file {TYPE_1__ refcount; } ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_object ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **,int *,int *,int ) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (void**,int ,size_t*,int *) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 git_repository *VAR_2, *VAR_3;
 git_object *VAR_4, *VAR_5;
 git_oid VAR_6;
 size_t VAR_7;
 void *VAR_8;
 int VAR_9;

 FUNC_2(FUNC_7(&VAR_2, FUNC_1("testrepo.git")));
 FUNC_2(FUNC_7(&VAR_3, FUNC_1("testrepo.git")));

 FUNC_5(&VAR_6, "a65fedf39aefe402d3bb6e24df4d4f5fe4547750");

 FUNC_2(FUNC_4(&VAR_4, VAR_2, &VAR_6, VAR_0));
 FUNC_2(FUNC_4(&VAR_5, VAR_3, &VAR_6, VAR_0));

 VAR_7 = 0;
 while ((VAR_9 = FUNC_8(&VAR_8, VAR_1, &VAR_7, ((void*)0))) == 0) {
  struct git_pack_file *VAR_10 = (struct git_pack_file *) VAR_8;

  FUNC_0(2, VAR_10->refcount.val);
 }

 FUNC_0(3, FUNC_9(VAR_1));

 FUNC_3(VAR_4);
 FUNC_3(VAR_5);
 FUNC_6(VAR_2);
 FUNC_6(VAR_3);


 FUNC_0(0, FUNC_9(VAR_1));
}
