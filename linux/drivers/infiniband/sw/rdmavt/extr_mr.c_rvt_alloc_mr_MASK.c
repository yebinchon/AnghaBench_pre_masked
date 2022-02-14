
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_mr {int dummy; } ;
struct rvt_mr {struct ib_mr ibmr; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 int VAR_0 ;
 struct ib_mr* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct rvt_mr*) ;
 struct rvt_mr* FUNC_2 (int ,struct ib_pd*) ;

struct ib_mr *FUNC_3(struct ib_pd *VAR_2, enum ib_mr_type VAR_3,
      u32 VAR_4, struct ib_udata *VAR_5)
{
 struct rvt_mr *VAR_6;

 if (VAR_3 != VAR_1)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_2(VAR_4, VAR_2);
 if (FUNC_1(VAR_6))
  return (struct ib_mr *)VAR_6;

 return &VAR_6->ibmr;
}
