
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pack_idx_entry {int dummy; } ;
struct object_entry_pool {int entries; struct object_entry* next_free; struct object_entry_pool* next_pool; } ;
struct object_entry {scalar_t__ pack_id; int idx; } ;
struct TYPE_2__ {int hash; } ;


 int FUNC_0 (struct pack_idx_entry**,int) ;
 struct object_entry_pool* VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct pack_idx_entry**) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_3 (int *,struct pack_idx_entry**,int,int *,int ) ;

__attribute__((used)) static const char *FUNC_4(void)
{
 const char *VAR_5;
 struct pack_idx_entry **VAR_6, **VAR_7, **VAR_8;
 struct object_entry *VAR_9;
 struct object_entry_pool *VAR_10;


 FUNC_0(VAR_6, VAR_1);
 VAR_7 = VAR_6;
 for (VAR_10 = VAR_0; VAR_10; VAR_10 = VAR_10->next_pool)
  for (VAR_9 = VAR_10->next_free; VAR_9-- != VAR_10->entries;)
   if (VAR_3 == VAR_9->pack_id)
    *VAR_7++ = &VAR_9->idx;
 VAR_8 = VAR_6 + VAR_1;
 if (VAR_7 != VAR_8)
  FUNC_1("internal consistency error creating the index");

 VAR_5 = FUNC_3(((void*)0), VAR_6, VAR_1, &VAR_4,
     VAR_2->hash);
 FUNC_2(VAR_6);
 return VAR_5;
}
