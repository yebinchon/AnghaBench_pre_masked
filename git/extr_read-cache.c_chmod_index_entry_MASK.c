
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_changed; } ;
struct cache_entry {int ce_mode; int ce_flags; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct index_state*,int ) ;
 int FUNC_2 (struct index_state*,struct cache_entry*) ;

int FUNC_3(struct index_state *VAR_2, struct cache_entry *VAR_3,
        char VAR_4)
{
 if (!FUNC_0(VAR_3->ce_mode))
  return -1;
 switch (VAR_4) {
 case '+':
  VAR_3->ce_mode |= 0111;
  break;
 case '-':
  VAR_3->ce_mode &= ~0111;
  break;
 default:
  return -2;
 }
 FUNC_1(VAR_2, VAR_3->name);
 VAR_3->ce_flags |= VAR_1;
 FUNC_2(VAR_2, VAR_3);
 VAR_2->cache_changed |= VAR_0;

 return 0;
}
