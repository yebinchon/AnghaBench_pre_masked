
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {unsigned int ce_mode; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_3(const struct cache_entry *VAR_0,
          unsigned int VAR_1)
{
 extern int VAR_2, VAR_3;
 if (!VAR_3 && FUNC_1(VAR_1) &&
     VAR_0 && FUNC_0(VAR_0->ce_mode))
  return VAR_0->ce_mode;
 if (!VAR_2 && FUNC_1(VAR_1)) {
  if (VAR_0 && FUNC_1(VAR_0->ce_mode))
   return VAR_0->ce_mode;
  return FUNC_2(0666);
 }
 return FUNC_2(VAR_1);
}
