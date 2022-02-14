
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;
struct cache_entry {int ce_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct index_state*,struct cache_entry const*,int,int) ;
 int FUNC_1 (struct index_state*,struct cache_entry const*,int,int) ;

__attribute__((used)) static int FUNC_2(struct index_state *VAR_1,
      const struct cache_entry *VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5;




 if (VAR_2->ce_flags & VAR_0)
  return 0;






 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);





 return VAR_5 + FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
