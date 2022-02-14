
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ttm_mem_type_manager {int default_caching; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(struct ttm_mem_type_manager *VAR_4,
          uint32_t VAR_5,
          uint32_t VAR_6)
{
 uint32_t VAR_7 = VAR_6 & VAR_3;
 uint32_t VAR_8 = VAR_6 & ~VAR_3;





 if ((VAR_5 & VAR_7) != 0)
  VAR_8 |= (VAR_5 & VAR_7);
 else if ((VAR_4->default_caching & VAR_7) != 0)
  VAR_8 |= VAR_4->default_caching;
 else if ((VAR_0 & VAR_7) != 0)
  VAR_8 |= VAR_0;
 else if ((VAR_2 & VAR_7) != 0)
  VAR_8 |= VAR_2;
 else if ((VAR_1 & VAR_7) != 0)
  VAR_8 |= VAR_1;

 return VAR_8;
}
