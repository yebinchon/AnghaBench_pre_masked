
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_mbox {scalar_t__ mbox_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct altera_mbox *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_1(VAR_1->mbox_base + VAR_0);
 return FUNC_0(VAR_2);
}
