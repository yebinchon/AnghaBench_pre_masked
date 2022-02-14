
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct namedobj_instance {size_t (* hash_f ) (struct namedobj_instance*,int ,int ) ;size_t nn_size; int count; int * values; int * names; } ;
struct named_object {int kidx; int set; int name; } ;


 int FUNC_0 (int *,struct named_object*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct namedobj_instance*,int ) ;
 size_t FUNC_2 (struct namedobj_instance*,int ,int ) ;

void
FUNC_3(struct namedobj_instance *VAR_2, struct named_object *VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = VAR_2->hash_f(VAR_2, VAR_3->name, VAR_3->set) % VAR_2->nn_size;
 FUNC_0(&VAR_2->names[VAR_4], VAR_3, VAR_0);

 VAR_4 = FUNC_1(VAR_2, VAR_3->kidx);
 FUNC_0(&VAR_2->values[VAR_4], VAR_3, VAR_1);

 VAR_2->count--;
}
