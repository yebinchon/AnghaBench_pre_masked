
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xive_irq_bitmap {int base; int count; int list; void* bitmap; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xive_irq_bitmap*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(int VAR_3, int VAR_4)
{
 struct xive_irq_bitmap *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(&VAR_5->lock);
 VAR_5->base = VAR_3;
 VAR_5->count = VAR_4;
 VAR_5->bitmap = FUNC_1(VAR_5->count, VAR_1);
 if (!VAR_5->bitmap) {
  FUNC_0(VAR_5);
  return -VAR_0;
 }
 FUNC_2(&VAR_5->list, &VAR_2);

 FUNC_3("Using IRQ range [%x-%x]", VAR_5->base,
  VAR_5->base + VAR_5->count - 1);
 return 0;
}
