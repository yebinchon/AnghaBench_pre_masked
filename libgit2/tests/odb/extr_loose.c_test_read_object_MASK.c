
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int id; } ;
typedef TYPE_2__ object_data ;
struct TYPE_13__ {int type; int len; int data; } ;
typedef TYPE_3__ git_rawobj ;
typedef int git_oid ;
struct TYPE_11__ {int type; int size; } ;
struct TYPE_14__ {TYPE_1__ cached; int buffer; } ;
typedef TYPE_4__ git_odb_object ;
typedef int git_odb ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (TYPE_4__**,int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(object_data *VAR_0)
{
    git_oid VAR_1;
    git_odb_object *VAR_2;
 git_odb *VAR_3;
 git_rawobj VAR_4;

    FUNC_7(VAR_0);

    FUNC_0(FUNC_4(&VAR_3, "test-objects"));
    FUNC_0(FUNC_6(&VAR_1, VAR_0->id));
    FUNC_0(FUNC_5(&VAR_2, VAR_3, &VAR_1));

 VAR_4.data = VAR_2->buffer;
 VAR_4.len = VAR_2->cached.size;
 VAR_4.type = VAR_2->cached.type;

    FUNC_1(&VAR_4, VAR_0);

    FUNC_3(VAR_2);
 FUNC_2(VAR_3);
}
