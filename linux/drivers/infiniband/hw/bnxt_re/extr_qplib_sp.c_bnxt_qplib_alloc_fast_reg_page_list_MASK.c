
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_qplib_res {int pdev; } ;
struct TYPE_2__ {int max_elements; } ;
struct bnxt_qplib_frpl {int max_pg_ptrs; TYPE_1__ hwq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_1__*,int *,int*,int ,int ,int ,int ) ;
 int FUNC_1 (int) ;

int FUNC_2(struct bnxt_qplib_res *VAR_5,
     struct bnxt_qplib_frpl *VAR_6,
     int VAR_7)
{
 int VAR_8, VAR_9, VAR_10;


 VAR_8 = FUNC_1(VAR_7);
 VAR_9 = VAR_8 >> VAR_3;
 if (!VAR_9)
  VAR_9++;

 if (VAR_9 > VAR_2)
  return -VAR_0;

 VAR_6->hwq.max_elements = VAR_9;
 VAR_10 = FUNC_0(VAR_5->pdev, &VAR_6->hwq, ((void*)0),
           &VAR_6->hwq.max_elements, VAR_4, 0,
           VAR_4, VAR_1);
 if (!VAR_10)
  VAR_6->max_pg_ptrs = VAR_8;

 return VAR_10;
}
