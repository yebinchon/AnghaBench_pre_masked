
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int dummy; } ;
struct cache_entry {int name; int ce_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct cache_entry** VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,struct cache_entry*,struct pathspec const*,int *) ;
 scalar_t__ FUNC_4 (struct cache_entry*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(const struct pathspec *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct cache_entry *VAR_8 = VAR_1[VAR_6];

  if (FUNC_4(VAR_8))
   continue;
  if (!FUNC_1(VAR_8->ce_mode) && !FUNC_0(VAR_8->ce_mode))
   continue;
  if (VAR_4 && !FUNC_3(&VAR_3, VAR_8, VAR_4, ((void*)0)))
   continue;
  VAR_7 |= FUNC_2(VAR_8->name, VAR_5 | VAR_0);
 }

 return VAR_7;
}
