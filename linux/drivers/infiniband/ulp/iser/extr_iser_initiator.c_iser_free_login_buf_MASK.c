
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_login_desc {int * rsp; int * req; int rsp_dma; int req_dma; } ;
struct iser_device {int ib_device; } ;
struct TYPE_2__ {struct iser_device* device; } ;
struct iser_conn {struct iser_login_desc login_desc; TYPE_1__ ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct iser_conn *VAR_4)
{
 struct iser_device *VAR_5 = VAR_4->ib_conn.device;
 struct iser_login_desc *VAR_6 = &VAR_4->login_desc;

 if (!VAR_6->req)
  return;

 FUNC_0(VAR_5->ib_device, VAR_6->req_dma,
       VAR_2, VAR_1);

 FUNC_0(VAR_5->ib_device, VAR_6->rsp_dma,
       VAR_3, VAR_0);

 FUNC_1(VAR_6->req);
 FUNC_1(VAR_6->rsp);


 VAR_6->req = ((void*)0);
 VAR_6->rsp = ((void*)0);
}
