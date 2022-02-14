
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ah; int lock; struct ocrdma_av* va; } ;
struct ocrdma_dev {TYPE_1__ av_tbl; } ;
struct ocrdma_av {scalar_t__ valid; } ;
struct ocrdma_ah {int id; struct ocrdma_av* av; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

int FUNC_2(struct ocrdma_dev *VAR_3, struct ocrdma_ah *VAR_4)
{
 int VAR_5;
 int VAR_6 = -VAR_1;
 struct ocrdma_av *VAR_7;
 unsigned long VAR_8;

 VAR_7 = VAR_3->av_tbl.va;
 FUNC_0(&VAR_3->av_tbl.lock, VAR_8);
 for (VAR_5 = 0; VAR_5 < VAR_3->av_tbl.num_ah; VAR_5++) {
  if (VAR_7->valid == 0) {
   VAR_7->valid = VAR_2;
   VAR_4->av = VAR_7;
   VAR_4->id = VAR_5;
   VAR_6 = 0;
   break;
  }
  VAR_7++;
 }
 if (VAR_5 == VAR_3->av_tbl.num_ah)
  VAR_6 = -VAR_0;
 FUNC_1(&VAR_3->av_tbl.lock, VAR_8);
 return VAR_6;
}
