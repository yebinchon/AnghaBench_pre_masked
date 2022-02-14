
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct uverbs_api_write_method {scalar_t__ is_ex; int disabled; int resp_size; int req_size; int has_resp; int has_udata; scalar_t__ handler; } ;
struct uverbs_api {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_ex; int resp_size; int req_size; int has_resp; int has_udata; int command_num; } ;
struct uapi_definition {TYPE_1__ write; scalar_t__ func_write; } ;
struct ib_device {int uverbs_ex_cmd_mask; int uverbs_cmd_mask; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct uverbs_api_write_method*) ;
 int FUNC_2 (struct uverbs_api_write_method*) ;
 scalar_t__ FUNC_3 (int) ;
 struct uverbs_api_write_method* FUNC_4 (struct uverbs_api*,int ,int,int*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct uverbs_api *VAR_1,
        struct ib_device *VAR_2,
        const struct uapi_definition *VAR_3,
        u32 VAR_4,
        u32 *VAR_5)
{
 struct uverbs_api_write_method *VAR_6;
 u32 VAR_7 = VAR_4;
 bool VAR_8;

 if (VAR_3->write.is_ex)
  VAR_7 |= FUNC_5(VAR_3->write.command_num);
 else
  VAR_7 |= FUNC_6(VAR_3->write.command_num);

 VAR_6 = FUNC_4(VAR_1, VAR_7, sizeof(*VAR_6),
          &VAR_8);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 if (FUNC_3(VAR_8 && (VAR_3->write.is_ex != VAR_6->is_ex)))
  return -VAR_0;

 VAR_6->is_ex = VAR_3->write.is_ex;
 VAR_6->handler = VAR_3->func_write;
 if (VAR_3->write.is_ex)
  VAR_6->disabled = !(VAR_2->uverbs_ex_cmd_mask &
      FUNC_0(VAR_3->write.command_num));
 else
  VAR_6->disabled = !(VAR_2->uverbs_cmd_mask &
      FUNC_0(VAR_3->write.command_num));

 if (!VAR_3->write.is_ex && VAR_3->func_write) {
  VAR_6->has_udata = VAR_3->write.has_udata;
  VAR_6->has_resp = VAR_3->write.has_resp;
  VAR_6->req_size = VAR_3->write.req_size;
  VAR_6->resp_size = VAR_3->write.resp_size;
 }

 *VAR_5 = VAR_7;
 return 0;
}
