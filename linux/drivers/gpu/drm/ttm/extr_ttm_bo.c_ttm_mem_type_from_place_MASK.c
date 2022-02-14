
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_place {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(const struct ttm_place *VAR_2,
       uint32_t *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->flags & VAR_1);
 if (FUNC_1(!VAR_4))
  return -VAR_0;

 *VAR_3 = VAR_4 - 1;
 return 0;
}
