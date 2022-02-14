
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap {int dummy; } ;
struct dir_rename_entry {char* dir; int ent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct dir_rename_entry* FUNC_1 (struct hashmap*,struct dir_rename_entry*,int ,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct dir_rename_entry *FUNC_3(struct hashmap *VAR_1,
            char *VAR_2)
{
 struct dir_rename_entry VAR_3;

 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_0(&VAR_3.ent, FUNC_2(VAR_2));
 VAR_3.dir = VAR_2;
 return FUNC_1(VAR_1, &VAR_3, VAR_0, ((void*)0));
}
