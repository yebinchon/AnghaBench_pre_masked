
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_entry {int ce_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static inline int FUNC_5(const struct cache_entry *VAR_4)
{
 unsigned VAR_5 = FUNC_4(VAR_4->ce_mode);
 if (FUNC_3(VAR_5))
  return VAR_2;
 else if (FUNC_0(VAR_5) || FUNC_1(VAR_5))
  return VAR_0;
 else if (FUNC_2(VAR_5))
  return VAR_1;
 else
  return VAR_3;
}
