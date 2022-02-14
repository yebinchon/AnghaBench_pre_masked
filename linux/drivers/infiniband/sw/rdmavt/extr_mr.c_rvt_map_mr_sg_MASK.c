
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct scatterlist {int dummy; } ;
struct TYPE_6__ {size_t length; TYPE_2__** map; scalar_t__ offset; scalar_t__ iova; scalar_t__ user_base; int page_shift; } ;
struct rvt_mr {TYPE_3__ mr; } ;
struct ib_mr {scalar_t__ length; scalar_t__ iova; } ;
struct TYPE_5__ {TYPE_1__* segs; } ;
struct TYPE_4__ {scalar_t__ vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_mr*,struct scatterlist*,int,unsigned int*,int ) ;
 int VAR_1 ;
 struct rvt_mr* FUNC_1 (struct ib_mr*) ;
 int FUNC_2 (struct ib_mr*,int,unsigned int*) ;

int FUNC_3(struct ib_mr *VAR_2, struct scatterlist *VAR_3,
    int VAR_4, unsigned int *VAR_5)
{
 struct rvt_mr *VAR_6 = FUNC_1(VAR_2);
 int VAR_7;

 VAR_6->mr.length = 0;
 VAR_6->mr.page_shift = VAR_0;
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_1);
 VAR_6->mr.user_base = VAR_2->iova;
 VAR_6->mr.iova = VAR_2->iova;
 VAR_6->mr.offset = VAR_2->iova - (u64)VAR_6->mr.map[0]->segs[0].vaddr;
 VAR_6->mr.length = (size_t)VAR_2->length;
 FUNC_2(VAR_2, VAR_4, VAR_5);
 return VAR_7;
}
