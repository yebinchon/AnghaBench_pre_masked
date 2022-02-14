
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dir_hash; } ;
struct dir_entry {unsigned int namelen; int ent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int) ;
 struct dir_entry* FUNC_1 (int *,struct dir_entry*,int ,char const*) ;

__attribute__((used)) static struct dir_entry *FUNC_2(struct index_state *VAR_1,
  const char *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct dir_entry VAR_5;
 FUNC_0(&VAR_5.ent, VAR_4);
 VAR_5.namelen = VAR_3;
 return FUNC_1(&VAR_1->dir_hash, &VAR_5, VAR_0, VAR_2);
}
