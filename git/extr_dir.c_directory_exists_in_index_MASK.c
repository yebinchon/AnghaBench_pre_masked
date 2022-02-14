
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int cache_nr; struct cache_entry** cache; } ;
struct cache_entry {unsigned char* name; int ce_mode; } ;
typedef enum exist_status { ____Placeholder_exist_status } exist_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct index_state*,char const*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct index_state*,char const*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (unsigned char*,char const*,int) ;

__attribute__((used)) static enum exist_status FUNC_4(struct index_state *VAR_4,
         const char *VAR_5, int VAR_6)
{
 int VAR_7;

 if (VAR_0)
  return FUNC_1(VAR_4, VAR_5, VAR_6);

 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  VAR_7 = -VAR_7-1;
 while (VAR_7 < VAR_4->cache_nr) {
  const struct cache_entry *VAR_8 = VAR_4->cache[VAR_7++];
  unsigned char VAR_9;

  if (FUNC_3(VAR_8->name, VAR_5, VAR_6))
   break;
  VAR_9 = VAR_8->name[VAR_6];
  if (VAR_9 > '/')
   break;
  if (VAR_9 == '/')
   return VAR_1;
  if (!VAR_9 && FUNC_0(VAR_8->ce_mode))
   return VAR_2;
 }
 return VAR_3;
}
