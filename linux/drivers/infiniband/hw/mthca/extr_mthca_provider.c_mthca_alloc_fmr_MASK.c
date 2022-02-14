
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_fmr {int dummy; } ;
struct mthca_fmr {struct ib_fmr ibmr; int attr; } ;
struct ib_pd {int device; } ;
struct ib_fmr_attr {int dummy; } ;
struct TYPE_2__ {int pd_num; } ;


 int VAR_0 ;
 struct ib_fmr* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mthca_fmr*) ;
 struct mthca_fmr* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,struct ib_fmr_attr*,int) ;
 int FUNC_5 (int ,int ,int ,struct mthca_fmr*) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (struct ib_pd*) ;

__attribute__((used)) static struct ib_fmr *FUNC_8(struct ib_pd *VAR_2, int VAR_3,
          struct ib_fmr_attr *VAR_4)
{
 struct mthca_fmr *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(sizeof *VAR_5, VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 FUNC_4(&VAR_5->attr, VAR_4, sizeof *VAR_4);
 VAR_6 = FUNC_5(FUNC_6(VAR_2->device), FUNC_7(VAR_2)->pd_num,
        FUNC_1(VAR_3), VAR_5);

 if (VAR_6) {
  FUNC_2(VAR_5);
  return FUNC_0(VAR_6);
 }

 return &VAR_5->ibmr;
}
