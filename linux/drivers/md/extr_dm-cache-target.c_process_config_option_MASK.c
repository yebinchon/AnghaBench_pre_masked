
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {unsigned long migration_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(struct cache *VAR_2, const char *VAR_3, const char *VAR_4)
{
 unsigned long VAR_5;

 if (!FUNC_1(VAR_3, "migration_threshold")) {
  if (FUNC_0(VAR_4, 10, &VAR_5))
   return -VAR_0;

  VAR_2->migration_threshold = VAR_5;
  return 0;
 }

 return VAR_1;
}
