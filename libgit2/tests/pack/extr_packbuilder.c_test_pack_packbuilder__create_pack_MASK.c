
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_oid ;
typedef int git_indexer_progress ;
typedef int git_hash_ctx ;
struct TYPE_7__ {int size; int ptr; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,char*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int ,int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *,char*,int ,int *,int *) ;
 int FUNC_13 (char*,int *) ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 () ;

void FUNC_16(void)
{
 git_indexer_progress VAR_5;
 git_buf VAR_6 = VAR_0, VAR_7 = VAR_0;
 git_hash_ctx VAR_8;
 git_oid VAR_9;
 char VAR_10[VAR_1+1]; VAR_10[VAR_1] = '\0';

 FUNC_15();

 FUNC_1(FUNC_12(&VAR_2, ".", 0, ((void*)0), ((void*)0)));
 FUNC_1(FUNC_14(VAR_3, VAR_4, &VAR_5));
 FUNC_1(FUNC_10(VAR_2, &VAR_5));

 FUNC_13(VAR_10, FUNC_11(VAR_2));
 FUNC_4(&VAR_7, "pack-%s.pack", VAR_10);
 FUNC_1(FUNC_5(&VAR_6, FUNC_2(&VAR_7)));

 FUNC_1(FUNC_7(&VAR_8));
 FUNC_1(FUNC_9(&VAR_8, VAR_6.ptr, VAR_6.size));
 FUNC_1(FUNC_8(&VAR_9, &VAR_8));
 FUNC_6(&VAR_8);

 FUNC_3(&VAR_7);
 FUNC_3(&VAR_6);

 FUNC_13(VAR_10, &VAR_9);

 FUNC_0(VAR_10, "5d410bdf97cf896f9007681b92868471d636954b");
}
