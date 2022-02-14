
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_api {int dummy; } ;
struct ib_uverbs_device {struct uverbs_api* uapi; } ;
struct ib_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct uverbs_api*) ;
 int FUNC_1 (struct uverbs_api*) ;
 struct uverbs_api* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_0,
     struct ib_uverbs_device *VAR_1)
{
 struct uverbs_api *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_1->uapi = VAR_2;
 return 0;
}
