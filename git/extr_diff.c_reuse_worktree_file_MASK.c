
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct object_id {int dummy; } ;
struct index_state {struct cache_entry** cache; } ;
struct cache_entry {int ce_flags; int ce_mode; int oid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct cache_entry const*) ;
 scalar_t__ FUNC_2 (struct cache_entry const*) ;
 scalar_t__ FUNC_3 (struct object_id const*) ;
 int FUNC_4 (struct index_state*,struct cache_entry const*,struct stat*,int ) ;
 int FUNC_5 (struct index_state*,char const*,int) ;
 int FUNC_6 (char const*,struct stat*) ;
 int FUNC_7 (struct object_id const*,int *) ;
 int FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (struct index_state*,char const*) ;

__attribute__((used)) static int FUNC_10(struct index_state *VAR_2,
          const char *VAR_3,
          const struct object_id *VAR_4,
          int VAR_5)
{
 const struct cache_entry *VAR_6;
 struct stat VAR_7;
 int VAR_8, VAR_9;
 if (!VAR_2->cache)
  return 0;
 if (!VAR_1 && !VAR_5 && FUNC_3(VAR_4))
  return 0;





 if (!VAR_5 && FUNC_9(VAR_2, VAR_3))
  return 0;

 VAR_9 = FUNC_8(VAR_3);
 VAR_8 = FUNC_5(VAR_2, VAR_3, VAR_9);
 if (VAR_8 < 0)
  return 0;
 VAR_6 = VAR_2->cache[VAR_8];





 if (!FUNC_7(VAR_4, &VAR_6->oid) || !FUNC_0(VAR_6->ce_mode))
  return 0;





 if ((VAR_6->ce_flags & VAR_0) || FUNC_1(VAR_6))
  return 0;




 if (FUNC_2(VAR_6) ||
     (!FUNC_6(VAR_3, &VAR_7) && !FUNC_4(VAR_2, VAR_6, &VAR_7, 0)))
  return 1;

 return 0;
}
