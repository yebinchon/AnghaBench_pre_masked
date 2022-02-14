
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uverbs_api_write_method {int disabled; } ;
struct uverbs_api_object {int disabled; } ;
struct uverbs_api_ioctl_method {int disabled; } ;
struct uverbs_api {int dummy; } ;
struct uapi_definition {scalar_t__ scope; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct uverbs_api_write_method*) ;
 int FUNC_1 (struct uverbs_api_write_method*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;
 struct uverbs_api_write_method* FUNC_3 (struct uverbs_api*,int ,int,int*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct uverbs_api *VAR_3,
       const struct uapi_definition *VAR_4,
       u32 VAR_5,
       u32 VAR_6)
{
 bool VAR_7;

 if (VAR_4->scope == VAR_2) {
  struct uverbs_api_object *VAR_8;

  VAR_8 = FUNC_3(
   VAR_3, VAR_5, sizeof(*VAR_8), &VAR_7);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
  VAR_8->disabled = 1;
  return 0;
 }

 if (VAR_4->scope == VAR_1 &&
     FUNC_4(VAR_6)) {
  struct uverbs_api_ioctl_method *VAR_9;

  VAR_9 = FUNC_3(VAR_3, VAR_6,
           sizeof(*VAR_9), &VAR_7);
  if (FUNC_0(VAR_9))
   return FUNC_1(VAR_9);
  VAR_9->disabled = 1;
  return 0;
 }

 if (VAR_4->scope == VAR_1 &&
     (FUNC_6(VAR_6) ||
      FUNC_5(VAR_6))) {
  struct uverbs_api_write_method *VAR_10;

  VAR_10 = FUNC_3(VAR_3, VAR_6,
          sizeof(*VAR_10), &VAR_7);
  if (FUNC_0(VAR_10))
   return FUNC_1(VAR_10);
  VAR_10->disabled = 1;
  return 0;
 }

 FUNC_2(1);
 return -VAR_0;
}
