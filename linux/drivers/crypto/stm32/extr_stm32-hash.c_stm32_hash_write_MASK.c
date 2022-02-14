
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_hash_dev {scalar_t__ io_base; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct stm32_hash_dev *VAR_0,
        u32 VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_2, VAR_0->io_base + VAR_1);
}
