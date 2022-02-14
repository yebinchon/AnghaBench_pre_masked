
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ib_header {void** lrh; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(struct ib_header *VAR_0,
        u16 VAR_1, u16 VAR_2,
        u16 VAR_3, u16 VAR_4)
{
 VAR_0->lrh[0] = FUNC_0(VAR_1);
 VAR_0->lrh[1] = FUNC_0(VAR_3);
 VAR_0->lrh[2] = FUNC_0(VAR_2);
 VAR_0->lrh[3] = FUNC_0(VAR_4);
}
