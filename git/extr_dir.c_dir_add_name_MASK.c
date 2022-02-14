
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_struct {scalar_t__ nr; struct dir_entry** entries; int alloc; } ;
struct dir_entry {int dummy; } ;


 int FUNC_0 (struct dir_entry**,scalar_t__,int ) ;
 struct dir_entry* FUNC_1 (char const*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct index_state*,char const*,int,int ) ;

__attribute__((used)) static struct dir_entry *FUNC_3(struct dir_struct *VAR_1,
          struct index_state *VAR_2,
          const char *VAR_3, int VAR_4)
{
 if (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0))
  return ((void*)0);

 FUNC_0(VAR_1->entries, VAR_1->nr+1, VAR_1->alloc);
 return VAR_1->entries[VAR_1->nr++] = FUNC_1(VAR_3, VAR_4);
}
