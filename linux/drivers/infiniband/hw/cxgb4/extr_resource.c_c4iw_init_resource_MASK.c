
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tpt_table; int qid_table; int pdid_table; int srq_table; } ;
struct c4iw_rdev {TYPE_1__ resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct c4iw_rdev*) ;

int FUNC_3(struct c4iw_rdev *VAR_2, u32 VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;
 VAR_6 = FUNC_0(&VAR_2->resource.tpt_table, 0, VAR_3, 1,
     VAR_0);
 if (VAR_6)
  goto tpt_err;
 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6)
  goto qid_err;
 VAR_6 = FUNC_0(&VAR_2->resource.pdid_table, 0,
     VAR_4, 1, 0);
 if (VAR_6)
  goto pdid_err;
 if (!VAR_5)
  VAR_6 = FUNC_0(&VAR_2->resource.srq_table, 0,
       1, 1, 0);
 else
  VAR_6 = FUNC_0(&VAR_2->resource.srq_table, 0,
       VAR_5, 0, 0);
 if (VAR_6)
  goto srq_err;
 return 0;
 srq_err:
 FUNC_1(&VAR_2->resource.pdid_table);
 pdid_err:
 FUNC_1(&VAR_2->resource.qid_table);
 qid_err:
 FUNC_1(&VAR_2->resource.tpt_table);
 tpt_err:
 return -VAR_1;
}
