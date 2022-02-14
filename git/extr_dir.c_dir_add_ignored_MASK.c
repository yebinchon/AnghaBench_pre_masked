
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_struct {scalar_t__ ignored_nr; struct dir_entry** ignored; int ignored_alloc; } ;
struct dir_entry {int dummy; } ;


 int FUNC_0 (struct dir_entry**,scalar_t__,int ) ;
 struct dir_entry* FUNC_1 (char const*,int) ;
 int FUNC_2 (struct index_state*,char const*,int) ;

struct dir_entry *FUNC_3(struct dir_struct *VAR_0,
      struct index_state *VAR_1,
      const char *VAR_2, int VAR_3)
{
 if (!FUNC_2(VAR_1, VAR_2, VAR_3))
  return ((void*)0);

 FUNC_0(VAR_0->ignored, VAR_0->ignored_nr+1, VAR_0->ignored_alloc);
 return VAR_0->ignored[VAR_0->ignored_nr++] = FUNC_1(VAR_2, VAR_3);
}
