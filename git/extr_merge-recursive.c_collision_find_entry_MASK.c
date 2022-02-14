
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int dummy; } ;
struct collision_entry {char* target_file; int ent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct collision_entry* FUNC_1 (struct hashmap*,struct collision_entry*,int ,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct collision_entry *FUNC_3(struct hashmap *VAR_1,
          char *VAR_2)
{
 struct collision_entry VAR_3;

 FUNC_0(&VAR_3.ent, FUNC_2(VAR_2));
 VAR_3.target_file = VAR_2;
 return FUNC_1(VAR_1, &VAR_3, VAR_0, ((void*)0));
}
