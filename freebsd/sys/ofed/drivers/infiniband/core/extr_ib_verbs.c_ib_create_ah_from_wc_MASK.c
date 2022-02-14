
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_wc {int dummy; } ;
struct ib_pd {int device; } ;
struct ib_grh {int dummy; } ;
struct ib_ah_attr {int dummy; } ;
struct ib_ah {int dummy; } ;


 struct ib_ah* FUNC_0 (int) ;
 struct ib_ah* FUNC_1 (struct ib_pd*,struct ib_ah_attr*) ;
 int FUNC_2 (int ,int ,struct ib_wc const*,struct ib_grh const*,struct ib_ah_attr*) ;

struct ib_ah *FUNC_3(struct ib_pd *VAR_0, const struct ib_wc *VAR_1,
       const struct ib_grh *VAR_2, u8 VAR_3)
{
 struct ib_ah_attr VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_0->device, VAR_3, VAR_1, VAR_2, &VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);

 return FUNC_1(VAR_0, &VAR_4);
}
