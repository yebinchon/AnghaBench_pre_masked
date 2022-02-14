
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct dir_struct {int dummy; } ;
struct cache_entry {int dummy; } ;


 int FUNC_0 (struct cache_entry const*) ;
 int FUNC_1 (struct dir_struct*,struct index_state*,char const*,int*) ;

__attribute__((used)) static int FUNC_2(struct dir_struct *VAR_0, struct index_state *VAR_1,
         const char *VAR_2, const struct cache_entry *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3);
 return FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
}
