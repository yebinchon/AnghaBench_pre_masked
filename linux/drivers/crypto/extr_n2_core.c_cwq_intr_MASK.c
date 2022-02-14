
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {unsigned long head; int lock; int qhandle; } ;
typedef int irqreturn_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,unsigned long,...) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (struct spu_queue*,unsigned long) ;
 unsigned long FUNC_5 (int ,unsigned long*) ;
 unsigned long FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_2, void *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 struct spu_queue *VAR_7 = VAR_3;

 FUNC_0("CPU[%d]: Got CWQ interrupt for qhdl[%lx]\n",
        FUNC_1(), VAR_7->qhandle);

 FUNC_2(&VAR_7->lock);

 VAR_6 = FUNC_5(VAR_7->qhandle, &VAR_5);

 FUNC_0("CPU[%d]: CWQ gethead[%lx] hv_ret[%lu]\n",
        FUNC_1(), VAR_5, VAR_6);

 for (VAR_4 = VAR_7->head; VAR_4 != VAR_5; VAR_4 = FUNC_4(VAR_7, VAR_4)) {

 }

 VAR_6 = FUNC_6(VAR_7->qhandle, VAR_5);
 if (VAR_6 == VAR_0)
  VAR_7->head = VAR_5;

 FUNC_3(&VAR_7->lock);

 return VAR_1;
}
