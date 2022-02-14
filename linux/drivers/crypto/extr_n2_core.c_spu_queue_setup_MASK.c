
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int * q; int q_type; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (struct spu_queue*,int ) ;

__attribute__((used)) static int FUNC_3(struct spu_queue *VAR_1)
{
 int VAR_2;

 VAR_1->q = FUNC_1(VAR_1->q_type);
 if (!VAR_1->q)
  return -VAR_0;

 VAR_2 = FUNC_2(VAR_1, VAR_1->q_type);
 if (VAR_2) {
  FUNC_0(VAR_1->q, VAR_1->q_type);
  VAR_1->q = ((void*)0);
 }

 return VAR_2;
}
