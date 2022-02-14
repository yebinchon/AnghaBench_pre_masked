
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu {unsigned long class_0_pending; int register_lock; scalar_t__ class_0_dar; int (* stop_callback ) (struct spu*,int ) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct spu*,int ) ;
 int FUNC_3 (struct spu*,int ,unsigned long) ;
 unsigned long FUNC_4 (struct spu*,int ) ;
 scalar_t__ FUNC_5 (struct spu*) ;
 int FUNC_6 (struct spu*,int ) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_1, void *VAR_2)
{
 struct spu *VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_3 = VAR_2;

 FUNC_0(&VAR_3->register_lock);
 VAR_5 = FUNC_2(VAR_3, 0);
 VAR_4 = FUNC_4(VAR_3, 0) & VAR_5;

 VAR_3->class_0_pending |= VAR_4;
 VAR_3->class_0_dar = FUNC_5(VAR_3);
 VAR_3->stop_callback(VAR_3, 0);
 VAR_3->class_0_pending = 0;
 VAR_3->class_0_dar = 0;

 FUNC_3(VAR_3, 0, VAR_4);
 FUNC_1(&VAR_3->register_lock);

 return VAR_0;
}
