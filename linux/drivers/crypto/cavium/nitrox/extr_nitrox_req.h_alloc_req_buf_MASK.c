
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
typedef int gfp_t ;


 void* FUNC_0 (size_t,int ) ;

__attribute__((used)) static inline void *FUNC_1(int VAR_0, int VAR_1, gfp_t VAR_2)
{
 size_t VAR_3;

 VAR_3 = sizeof(struct scatterlist) * VAR_0;
 VAR_3 += VAR_1;

 return FUNC_0(VAR_3, VAR_2);
}
