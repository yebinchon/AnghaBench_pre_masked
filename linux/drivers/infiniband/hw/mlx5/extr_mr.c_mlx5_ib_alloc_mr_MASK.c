
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ib_udata {int dummy; } ;
struct ib_pd {int dummy; } ;
struct ib_mr {int dummy; } ;
typedef enum ib_mr_type { ____Placeholder_ib_mr_type } ib_mr_type ;


 struct ib_mr* FUNC_0 (struct ib_pd*,int,int ,int ) ;

struct ib_mr *FUNC_1(struct ib_pd *VAR_0, enum ib_mr_type VAR_1,
          u32 VAR_2, struct ib_udata *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, 0);
}
