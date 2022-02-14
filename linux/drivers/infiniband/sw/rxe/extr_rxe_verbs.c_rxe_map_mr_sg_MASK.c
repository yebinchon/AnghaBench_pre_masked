
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct rxe_mem {int va; int iova; int page_mask; int offset; int page_shift; int length; scalar_t__ nbuf; } ;
struct ib_mr {int iova; int page_size; int length; } ;


 int FUNC_0 (struct ib_mr*,struct scatterlist*,int,unsigned int*,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 struct rxe_mem* FUNC_2 (struct ib_mr*) ;

__attribute__((used)) static int FUNC_3(struct ib_mr *VAR_1, struct scatterlist *VAR_2,
    int VAR_3, unsigned int *VAR_4)
{
 struct rxe_mem *VAR_5 = FUNC_2(VAR_1);
 int VAR_6;

 VAR_5->nbuf = 0;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0);

 VAR_5->va = VAR_1->iova;
 VAR_5->iova = VAR_1->iova;
 VAR_5->length = VAR_1->length;
 VAR_5->page_shift = FUNC_1(VAR_1->page_size);
 VAR_5->page_mask = VAR_1->page_size - 1;
 VAR_5->offset = VAR_5->iova & VAR_5->page_mask;

 return VAR_6;
}
