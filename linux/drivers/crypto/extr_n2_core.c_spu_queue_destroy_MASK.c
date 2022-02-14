
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int q_type; int q; int qhandle; } ;


 int FUNC_0 (int ,int ) ;
 unsigned long FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct spu_queue *VAR_0)
{
 unsigned long VAR_1;

 if (!VAR_0->q)
  return;

 VAR_1 = FUNC_1(VAR_0->q_type, VAR_0->qhandle, 0, &VAR_0->qhandle);

 if (!VAR_1)
  FUNC_0(VAR_0->q, VAR_0->q_type);
}
