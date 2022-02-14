
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct object_cb_data {TYPE_1__* expand; int opt; int scratch; } ;
struct TYPE_2__ {int oid; } ;


 int FUNC_0 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_1 (int *,struct object_id const*) ;

__attribute__((used)) static int FUNC_2(const struct object_id *VAR_0, void *VAR_1)
{
 struct object_cb_data *VAR_2 = VAR_1;
 FUNC_1(&VAR_2->expand->oid, VAR_0);
 FUNC_0(((void*)0), VAR_2->scratch, VAR_2->opt, VAR_2->expand);
 return 0;
}
