
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mthca_mr {int * mtt; } ;
struct mthca_dev {int dummy; } ;


 int FUNC_0 (struct mthca_dev*,int ,int,int ,unsigned long long,int ,struct mthca_mr*) ;

int FUNC_1(struct mthca_dev *VAR_0, u32 VAR_1,
      u32 VAR_2, struct mthca_mr *VAR_3)
{
 VAR_3->mtt = ((void*)0);
 return FUNC_0(VAR_0, VAR_1, 12, 0, ~0ULL, VAR_2, VAR_3);
}
