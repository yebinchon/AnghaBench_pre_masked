
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_sge {int length; } ;
struct rxe_dma_info {size_t cur_sge; int sge_offset; int resid; size_t num_sge; struct rxe_sge* sge; } ;


 int VAR_0 ;

int FUNC_0(struct rxe_dma_info *VAR_1, unsigned int VAR_2)
{
 struct rxe_sge *VAR_3 = &VAR_1->sge[VAR_1->cur_sge];
 int VAR_4 = VAR_1->sge_offset;
 int VAR_5 = VAR_1->resid;

 while (VAR_2) {
  unsigned int VAR_6;

  if (VAR_4 >= VAR_3->length) {
   VAR_3++;
   VAR_1->cur_sge++;
   VAR_4 = 0;
   if (VAR_1->cur_sge >= VAR_1->num_sge)
    return -VAR_0;
  }

  VAR_6 = VAR_2;

  if (VAR_6 > VAR_3->length - VAR_4)
   VAR_6 = VAR_3->length - VAR_4;

  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;
  VAR_2 -= VAR_6;
 }

 VAR_1->sge_offset = VAR_4;
 VAR_1->resid = VAR_5;

 return 0;
}
