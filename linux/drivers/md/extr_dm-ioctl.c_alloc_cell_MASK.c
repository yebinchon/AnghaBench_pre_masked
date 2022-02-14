
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int dummy; } ;
struct hash_cell {int * new_map; struct mapped_device* md; int uuid_list; int name_list; struct hash_cell* name; int * uuid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct hash_cell*) ;
 struct hash_cell* FUNC_2 (int,int ) ;
 void* FUNC_3 (char const*,int ) ;

__attribute__((used)) static struct hash_cell *FUNC_4(const char *VAR_1, const char *VAR_2,
        struct mapped_device *VAR_3)
{
 struct hash_cell *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->name = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4->name) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }

 if (!VAR_2)
  VAR_4->uuid = ((void*)0);

 else {
  VAR_4->uuid = FUNC_3(VAR_2, VAR_0);
  if (!VAR_4->uuid) {
   FUNC_1(VAR_4->name);
   FUNC_1(VAR_4);
   return ((void*)0);
  }
 }

 FUNC_0(&VAR_4->name_list);
 FUNC_0(&VAR_4->uuid_list);
 VAR_4->md = VAR_3;
 VAR_4->new_map = ((void*)0);
 return VAR_4;
}
