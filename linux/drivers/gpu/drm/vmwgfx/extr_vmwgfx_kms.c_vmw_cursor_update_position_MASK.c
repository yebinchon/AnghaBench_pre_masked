
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u32 ;
struct vmw_private {int cursor_lock; int * mmio_virt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct vmw_private *VAR_4,
           bool VAR_5, int VAR_6, int VAR_7)
{
 u32 *VAR_8 = VAR_4->mmio_virt;
 uint32_t VAR_9;

 FUNC_0(&VAR_4->cursor_lock);
 FUNC_3(VAR_5 ? 1 : 0, VAR_8 + VAR_1);
 FUNC_3(VAR_6, VAR_8 + VAR_2);
 FUNC_3(VAR_7, VAR_8 + VAR_3);
 VAR_9 = FUNC_2(VAR_8 + VAR_0);
 FUNC_3(++VAR_9, VAR_8 + VAR_0);
 FUNC_1(&VAR_4->cursor_lock);
}
