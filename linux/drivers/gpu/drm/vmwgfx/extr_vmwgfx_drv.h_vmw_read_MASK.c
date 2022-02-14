
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_private {int hw_lock; scalar_t__ io_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline uint32_t FUNC_4(struct vmw_private *VAR_2,
    unsigned int VAR_3)
{
 u32 VAR_4;

 FUNC_2(&VAR_2->hw_lock);
 FUNC_1(VAR_3, VAR_2->io_start + VAR_0);
 VAR_4 = FUNC_0(VAR_2->io_start + VAR_1);
 FUNC_3(&VAR_2->hw_lock);

 return VAR_4;
}
