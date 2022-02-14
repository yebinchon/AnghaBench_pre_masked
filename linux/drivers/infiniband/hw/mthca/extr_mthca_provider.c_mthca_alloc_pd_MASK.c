
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_pd {int pd_num; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {struct ib_device* device; } ;
struct ib_device {int dummy; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_udata*,int *,int) ;
 int FUNC_1 (int ,int,struct mthca_pd*) ;
 int FUNC_2 (int ,struct mthca_pd*) ;
 int FUNC_3 (struct ib_device*) ;
 struct mthca_pd* FUNC_4 (struct ib_pd*) ;

__attribute__((used)) static int FUNC_5(struct ib_pd *VAR_1, struct ib_udata *VAR_2)
{
 struct ib_device *VAR_3 = VAR_1->device;
 struct mthca_pd *VAR_4 = FUNC_4(VAR_1);
 int VAR_5;

 VAR_5 = FUNC_1(FUNC_3(VAR_3), !VAR_2, VAR_4);
 if (VAR_5)
  return VAR_5;

 if (VAR_2) {
  if (FUNC_0(VAR_2, &VAR_4->pd_num, sizeof (__u32))) {
   FUNC_2(FUNC_3(VAR_3), VAR_4);
   return -VAR_0;
  }
 }

 return 0;
}
