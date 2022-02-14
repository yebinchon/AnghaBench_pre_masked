
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vop {int irq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct vop*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static bool FUNC_3(struct vop *VAR_2)
{
 uint32_t VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->irq_lock, VAR_4);

 VAR_3 = FUNC_0(VAR_2, VAR_1, VAR_0);

 FUNC_2(&VAR_2->irq_lock, VAR_4);

 return !!VAR_3;
}
