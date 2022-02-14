
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int id; } ;
typedef TYPE_2__ object_data ;
struct TYPE_16__ {int type; int len; int data; } ;
typedef TYPE_3__ git_rawobj ;
typedef int git_oid ;
struct TYPE_14__ {int type; int size; } ;
struct TYPE_17__ {TYPE_1__ cached; int buffer; } ;
typedef TYPE_4__ git_odb_object ;
typedef int git_odb ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (TYPE_4__**,int *,int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int VAR_0 ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int *,int *,TYPE_3__*) ;

void FUNC_13(object_data *VAR_1, git_rawobj *VAR_2)
{
   git_odb *VAR_3;
   git_oid VAR_4, VAR_5;
   git_odb_object *VAR_6;
   git_rawobj VAR_7;

   FUNC_10();
   FUNC_2(FUNC_6(&VAR_3, VAR_0));
   FUNC_2(FUNC_9(&VAR_4, VAR_1->id));

   FUNC_12(&VAR_5, VAR_3, VAR_2);
   FUNC_1(FUNC_8(&VAR_4, &VAR_5) == 0);
   FUNC_0(VAR_1);

   FUNC_2(FUNC_7(&VAR_6, VAR_3, &VAR_4));

   VAR_7.data = VAR_6->buffer;
   VAR_7.len = VAR_6->cached.size;
   VAR_7.type = VAR_6->cached.type;

   FUNC_3(&VAR_7, VAR_2);

   FUNC_5(VAR_6);
   FUNC_4(VAR_3);
   FUNC_11(VAR_1);
}
