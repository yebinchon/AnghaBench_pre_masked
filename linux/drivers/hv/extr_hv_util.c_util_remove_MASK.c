
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hv_util_service {int recv_buffer; int (* util_deinit ) () ;} ;
struct hv_device {int channel; } ;


 struct hv_util_service* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hv_device *VAR_0)
{
 struct hv_util_service *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->util_deinit)
  VAR_1->util_deinit();
 FUNC_3(VAR_0->channel);
 FUNC_1(VAR_1->recv_buffer);

 return 0;
}
