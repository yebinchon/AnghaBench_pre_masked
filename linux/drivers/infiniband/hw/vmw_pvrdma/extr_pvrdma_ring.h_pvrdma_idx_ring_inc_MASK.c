
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atomic_t ;
typedef int __u32 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void FUNC_2(atomic_t *VAR_0, __u32 VAR_1)
{
 __u32 VAR_2 = FUNC_0(VAR_0) + 1;

 VAR_2 &= (VAR_1 << 1) - 1;
 FUNC_1(VAR_0, VAR_2);
}
