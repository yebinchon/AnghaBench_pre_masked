
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_bitmap {int lock; int bitmap; } ;


 int FUNC_0 (int ,unsigned int,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct msi_bitmap *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2)
{
 unsigned long VAR_3;

 FUNC_1("msi_bitmap: freeing 0x%x at offset 0x%x\n",
   VAR_2, VAR_1);

 FUNC_2(&VAR_0->lock, VAR_3);
 FUNC_0(VAR_0->bitmap, VAR_1, VAR_2);
 FUNC_3(&VAR_0->lock, VAR_3);
}
