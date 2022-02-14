
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_qdma_format {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(const struct fsl_qdma_format *VAR_2)
{
 return (FUNC_0(VAR_2->status) & VAR_0) >> VAR_1;
}
