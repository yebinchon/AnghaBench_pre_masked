
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uverbs_attr_bundle {int dummy; } ;
struct ib_sge {int dummy; } ;
struct ib_pd {int dummy; } ;
typedef enum ib_uverbs_advise_mr_advice { ____Placeholder_ib_uverbs_advise_mr_advice } ib_uverbs_advise_mr_advice ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_pd*,int,int ,struct ib_sge*,int ) ;

int FUNC_1(struct ib_pd *VAR_3,
        enum ib_uverbs_advise_mr_advice VAR_4,
        u32 VAR_5,
        struct ib_sge *VAR_6,
        u32 VAR_7,
        struct uverbs_attr_bundle *VAR_8)
{
 if (VAR_4 != VAR_1 &&
     VAR_4 != VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7);
}
