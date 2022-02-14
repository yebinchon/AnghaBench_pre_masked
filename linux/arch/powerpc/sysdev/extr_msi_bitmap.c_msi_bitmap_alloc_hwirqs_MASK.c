
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msi_bitmap {int irq_count; int lock; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(struct msi_bitmap *VAR_1, int VAR_2)
{
 unsigned long VAR_3;
 int VAR_4, VAR_5 = FUNC_2(VAR_2);

 FUNC_4(&VAR_1->lock, VAR_3);

 VAR_4 = FUNC_0(VAR_1->bitmap, VAR_1->irq_count, 0,
         VAR_2, (1 << VAR_5) - 1);
 if (VAR_4 > VAR_1->irq_count)
  goto err;

 FUNC_1(VAR_1->bitmap, VAR_4, VAR_2);
 FUNC_5(&VAR_1->lock, VAR_3);

 FUNC_3("msi_bitmap: allocated 0x%x at offset 0x%x\n", VAR_2, VAR_4);

 return VAR_4;
err:
 FUNC_5(&VAR_1->lock, VAR_3);
 return -VAR_0;
}
