
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_and_oids_entry {char* path; int trees; int ent; } ;
struct object_id {int dummy; } ;
struct hashmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 struct path_and_oids_entry* FUNC_1 (struct hashmap*,struct path_and_oids_entry*,int ,int *) ;
 int FUNC_2 (struct hashmap*,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct object_id const*) ;
 int FUNC_5 (char const*) ;
 struct path_and_oids_entry* FUNC_6 (int,int) ;
 char* FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct hashmap *VAR_1,
      const char *VAR_2,
      const struct object_id *VAR_3)
{
 int VAR_4 = FUNC_5(VAR_2);
 struct path_and_oids_entry VAR_5;
 struct path_and_oids_entry *VAR_6;

 FUNC_0(&VAR_5.ent, VAR_4);


 VAR_5.path = (char *)VAR_2;
 FUNC_3(&VAR_5.trees, 0);

 VAR_6 = FUNC_1(VAR_1, &VAR_5, VAR_0, ((void*)0));
 if (!VAR_6) {
  VAR_6 = FUNC_6(1, sizeof(struct path_and_oids_entry));
  FUNC_0(&VAR_6->ent, VAR_4);
  VAR_6->path = FUNC_7(VAR_5.path);
  FUNC_3(&VAR_6->trees, 16);
  FUNC_2(VAR_1, &VAR_6->ent);
 }

 FUNC_4(&VAR_6->trees, VAR_3);
}
