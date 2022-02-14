
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct uverbs_method_def {int handler; unsigned int num_attrs; struct uverbs_attr_def*** attrs; int id; } ;
struct TYPE_4__ {scalar_t__ access; } ;
struct TYPE_5__ {TYPE_1__ objs_arr; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_2__ u2; } ;
struct uverbs_attr_def {TYPE_3__ attr; int id; } ;
struct uverbs_api_object {int dummy; } ;
struct uverbs_api_ioctl_method {int driver_method; TYPE_3__ spec; int handler; } ;
struct uverbs_api_attr {int driver_method; TYPE_3__ spec; int handler; } ;
struct uverbs_api {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct uverbs_api_ioctl_method*) ;
 int FUNC_1 (struct uverbs_api_ioctl_method*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 struct uverbs_api_ioctl_method* FUNC_4 (struct uverbs_api*,int,int) ;
 struct uverbs_api_ioctl_method* FUNC_5 (struct uverbs_api*,int,int,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct uverbs_api *VAR_6,
        struct uverbs_api_object *VAR_7, u32 VAR_8,
        const struct uverbs_method_def *VAR_9,
        bool VAR_10)
{
 u32 VAR_11 = VAR_8 | FUNC_7(VAR_9->id);
 struct uverbs_api_ioctl_method *VAR_12;
 unsigned int VAR_13;
 bool VAR_14;

 if (!VAR_9->attrs)
  return 0;

 VAR_12 = FUNC_5(VAR_6, VAR_11, sizeof(*VAR_12),
          &VAR_14);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);
 if (VAR_14) {



  if (FUNC_2(VAR_9->handler))
   return -VAR_0;
 } else {
  FUNC_2(!VAR_9->handler);
  FUNC_3(VAR_12->handler, VAR_9->handler);
  if (VAR_9->handler != VAR_5)
   VAR_12->driver_method = VAR_10;
 }

 for (VAR_13 = 0; VAR_13 != VAR_9->num_attrs; VAR_13++) {
  const struct uverbs_attr_def *VAR_15 = (*VAR_9->attrs)[VAR_13];
  struct uverbs_api_attr *VAR_16;

  if (!VAR_15)
   continue;






  if (VAR_15->attr.type == VAR_3)
   VAR_12->driver_method |= VAR_10;





  if (VAR_15->attr.type == VAR_4) {
   u8 VAR_17 = VAR_15->attr.u2.objs_arr.access;

   if (FUNC_2(VAR_17 == VAR_2 ||
        VAR_17 == VAR_1))
    return -VAR_0;
  }

  VAR_16 =
   FUNC_4(VAR_6, VAR_11 | FUNC_6(VAR_15->id),
         sizeof(*VAR_16));

  if (FUNC_0(VAR_16))
   return FUNC_1(VAR_16);

  VAR_16->spec = VAR_15->attr;
 }

 return 0;
}
