
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; int dlen; int id; } ;
typedef TYPE_1__ object_data ;
typedef int git_oid ;
typedef int git_odb ;
typedef int git_object_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*) ;
 int FUNC_6 (size_t*,int *,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(object_data *VAR_0)
{
 git_oid VAR_1;
 git_odb *VAR_2;
 size_t VAR_3;
 git_object_t VAR_4;

 FUNC_8(VAR_0);

 FUNC_2(FUNC_5(&VAR_2, "test-objects"));
 FUNC_2(FUNC_7(&VAR_1, VAR_0->id));
 FUNC_2(FUNC_6(&VAR_3, &VAR_4, VAR_2, &VAR_1));

 FUNC_1(VAR_0->dlen, VAR_3);
 FUNC_0(FUNC_3(VAR_0->type), VAR_4);

 FUNC_4(VAR_2);
}
