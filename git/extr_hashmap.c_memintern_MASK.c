
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hash; } ;
struct pool_entry {size_t len; void const* data; TYPE_1__ ent; } ;
struct hashmap {int tablesize; } ;


 int FUNC_0 (struct pool_entry*,void const*,void const*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct hashmap*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 struct pool_entry* FUNC_3 (struct hashmap*,struct pool_entry*,int ,void const*) ;
 int FUNC_4 (struct hashmap*,int ,int *,int ) ;
 int FUNC_5 (void const*,size_t) ;
 int VAR_1 ;

const void *FUNC_6(const void *VAR_2, size_t VAR_3)
{
 static struct hashmap VAR_4;
 struct pool_entry VAR_5, *VAR_6;


 if (!VAR_4.tablesize)
  FUNC_4(&VAR_4, VAR_1, ((void*)0), 0);


 FUNC_2(&VAR_5.ent, FUNC_5(VAR_2, VAR_3));
 VAR_5.len = VAR_3;
 VAR_6 = FUNC_3(&VAR_4, &VAR_5, VAR_0, VAR_2);
 if (!VAR_6) {

  FUNC_0(VAR_6, VAR_2, VAR_2, VAR_3);
  FUNC_2(&VAR_6->ent, VAR_5.ent.hash);
  VAR_6->len = VAR_3;
  FUNC_1(&VAR_4, &VAR_6->ent);
 }
 return VAR_6->data;
}
