
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ioatdma_chan {scalar_t__ reg_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(struct ioatdma_chan *VAR_2, u64 VAR_3)
{
 FUNC_0(VAR_3 & 0x00000000FFFFFFFF,
        VAR_2->reg_base + VAR_1);
 FUNC_0(VAR_3 >> 32,
        VAR_2->reg_base + VAR_0);
}
