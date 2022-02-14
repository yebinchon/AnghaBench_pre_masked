
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fsl_qdma_format {int addr_lo; int addr_hi; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void
FUNC_3(struct fsl_qdma_format *VAR_0, u64 VAR_1)
{
 VAR_0->addr_hi = FUNC_2(VAR_1);
 VAR_0->addr_lo = FUNC_0(FUNC_1(VAR_1));
}
