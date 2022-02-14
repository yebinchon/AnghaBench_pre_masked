
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_status; struct bio* bi_private; } ;
typedef int mempool_t ;


 int FUNC_0 (struct bio*,int *) ;
 int FUNC_1 (struct bio*,struct bio*) ;

__attribute__((used)) static void FUNC_2(struct bio *VAR_0, mempool_t *VAR_1)
{
 struct bio *VAR_2 = VAR_0->bi_private;

 if (!VAR_0->bi_status)
  FUNC_1(VAR_2, VAR_0);

 FUNC_0(VAR_0, VAR_1);
}
