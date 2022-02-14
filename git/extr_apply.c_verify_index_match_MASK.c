
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct cache_entry {int ce_mode; } ;
struct apply_state {TYPE_1__* repo; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct cache_entry const*,struct stat*,int) ;

__attribute__((used)) static int FUNC_3(struct apply_state *VAR_2,
         const struct cache_entry *VAR_3,
         struct stat *VAR_4)
{
 if (FUNC_1(VAR_3->ce_mode)) {
  if (!FUNC_0(VAR_4->st_mode))
   return -1;
  return 0;
 }
 return FUNC_2(VAR_2->repo->index, VAR_3, VAR_4,
        VAR_1 | VAR_0);
}
