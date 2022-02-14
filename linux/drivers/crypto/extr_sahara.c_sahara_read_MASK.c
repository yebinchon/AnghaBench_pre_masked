
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sahara_dev {scalar_t__ regs_base; } ;


 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct sahara_dev *VAR_0, u32 VAR_1)
{
 return FUNC_0(VAR_0->regs_base + VAR_1);
}
