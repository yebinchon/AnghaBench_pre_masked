
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct vmw_private {int hw_lock; scalar_t__ io_start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct vmw_private *VAR_2,
        unsigned int VAR_3, uint32_t VAR_4)
{
 FUNC_1(&VAR_2->hw_lock);
 FUNC_0(VAR_3, VAR_2->io_start + VAR_0);
 FUNC_0(VAR_4, VAR_2->io_start + VAR_1);
 FUNC_2(&VAR_2->hw_lock);
}
