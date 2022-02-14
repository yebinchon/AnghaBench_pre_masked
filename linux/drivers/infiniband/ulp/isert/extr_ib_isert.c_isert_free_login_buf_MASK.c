
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isert_conn {int login_req_buf; int login_req_dma; int login_rsp_buf; int login_rsp_dma; TYPE_1__* device; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct ib_device* ib_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct isert_conn *VAR_3)
{
 struct ib_device *VAR_4 = VAR_3->device->ib_device;

 FUNC_0(VAR_4, VAR_3->login_rsp_dma,
       VAR_2, VAR_1);
 FUNC_1(VAR_3->login_rsp_buf);

 FUNC_0(VAR_4, VAR_3->login_req_dma,
       VAR_2,
       VAR_0);
 FUNC_1(VAR_3->login_req_buf);
}
