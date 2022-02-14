
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int lock; int qhandle; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned long,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int ,unsigned long*) ;
 int FUNC_5 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct spu_queue *VAR_3 = VAR_2;
 unsigned long VAR_4, VAR_5;

 FUNC_2(&VAR_3->lock);

 FUNC_0("CPU[%d]: Got MAU interrupt for qhdl[%lx]\n",
        FUNC_1(), VAR_3->qhandle);

 VAR_5 = FUNC_4(VAR_3->qhandle, &VAR_4);

 FUNC_0("CPU[%d]: MAU gethead[%lx] hv_ret[%lu]\n",
        FUNC_1(), VAR_4, VAR_5);

 FUNC_5(VAR_3->qhandle, VAR_4);

 FUNC_3(&VAR_3->lock);

 return VAR_0;
}
