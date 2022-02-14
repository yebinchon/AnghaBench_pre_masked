
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;
typedef int __u32 ;
typedef unsigned int const __s32 ;


 unsigned int const VAR_0 ;
 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int const,int) ;

__attribute__((used)) static inline __s32 FUNC_2(atomic_t *VAR_1, __u32 VAR_2)
{
 const unsigned int VAR_3 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_3, VAR_2))
  return VAR_3 & (VAR_2 - 1);
 return VAR_0;
}
