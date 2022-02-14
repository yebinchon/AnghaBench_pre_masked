
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ va; } ;
struct i40iw_puda_buf {TYPE_1__ mem; } ;


 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static void FUNC_1(struct i40iw_puda_buf *VAR_0,
        struct i40iw_puda_buf *VAR_1,
        u16 VAR_2, u32 VAR_3,
        u32 VAR_4)
{
 void *VAR_5 = (u8 *)VAR_0->mem.va + VAR_2;
 void *VAR_6 = (u8 *)VAR_1->mem.va + VAR_3;

 FUNC_0(VAR_6, VAR_5, VAR_4);
}
