
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct cache_entry {int ce_mode; int name; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct cache_entry const*) ;
 int FUNC_3 (struct index_state const*,struct pathspec const*,int ,int ,int ,char*,int) ;

__attribute__((used)) static inline int FUNC_4(const struct index_state *VAR_0,
    const struct cache_entry *VAR_1,
    const struct pathspec *VAR_2,
    char *VAR_3)
{
 return FUNC_3(VAR_0, VAR_2, VAR_1->name, FUNC_2(VAR_1), 0, VAR_3,
         FUNC_0(VAR_1->ce_mode) || FUNC_1(VAR_1->ce_mode));
}
