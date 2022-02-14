
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xive_irq_bitmap {int count; scalar_t__ base; int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct xive_irq_bitmap *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->bitmap, VAR_1->count);
 if (VAR_2 != VAR_1->count) {
  FUNC_1(VAR_2, VAR_1->bitmap);
  VAR_2 += VAR_1->base;
 } else {
  VAR_2 = -VAR_0;
 }

 return VAR_2;
}
