
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int qhandle; int q; } ;
struct spu_qreg {unsigned long type; struct spu_queue* queue; } ;


 int VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long,int ,int ,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static long FUNC_3(void *VAR_2)
{
 struct spu_qreg *VAR_3 = VAR_2;
 struct spu_queue *VAR_4 = VAR_3->queue;
 unsigned long VAR_5 = VAR_3->type;
 unsigned long VAR_6;

 VAR_6 = FUNC_1(VAR_5, FUNC_0(VAR_4->q),
     VAR_0, &VAR_4->qhandle);
 if (!VAR_6)
  FUNC_2(VAR_4->qhandle, 0);

 return VAR_6 ? -VAR_1 : 0;
}
