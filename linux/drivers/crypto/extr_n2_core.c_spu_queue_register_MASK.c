
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spu_queue {int sharing; } ;
struct spu_qreg {unsigned long type; struct spu_queue* queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int,int ,struct spu_qreg*) ;

__attribute__((used)) static int FUNC_2(struct spu_queue *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_2->sharing, VAR_0);
 struct spu_qreg VAR_5 = { .queue = VAR_2, .type = VAR_3 };

 return FUNC_1(VAR_4, VAR_1, &VAR_5);
}
