
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gart_device {unsigned long iovmm_base; unsigned long iovmm_end; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(struct gart_device *VAR_1,
        unsigned long VAR_2, size_t VAR_3)
{
 return FUNC_0(VAR_2 < VAR_1->iovmm_base || VAR_3 != VAR_0 ||
   VAR_2 + VAR_3 > VAR_1->iovmm_end);
}
