
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct subprocess_entry {char const* cmd; int ent; } ;
struct hashmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct subprocess_entry* FUNC_1 (struct hashmap*,struct subprocess_entry*,int ,int *) ;
 int FUNC_2 (char const*) ;

struct subprocess_entry *FUNC_3(struct hashmap *VAR_1, const char *VAR_2)
{
 struct subprocess_entry VAR_3;

 FUNC_0(&VAR_3.ent, FUNC_2(VAR_2));
 VAR_3.cmd = VAR_2;
 return FUNC_1(VAR_1, &VAR_3, VAR_0, ((void*)0));
}
