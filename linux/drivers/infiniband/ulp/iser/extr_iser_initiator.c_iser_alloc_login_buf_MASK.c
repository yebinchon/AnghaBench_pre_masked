
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iser_login_desc {void* req; void* req_dma; void* rsp; void* rsp_dma; } ;
struct iser_device {int ib_device; } ;
struct TYPE_2__ {struct iser_device* device; } ;
struct iser_conn {struct iser_login_desc login_desc; TYPE_1__ ib_conn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ,void*,int ,int ) ;
 scalar_t__ FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*,int ,int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct iser_conn *VAR_6)
{
 struct iser_device *VAR_7 = VAR_6->ib_conn.device;
 struct iser_login_desc *VAR_8 = &VAR_6->login_desc;

 VAR_8->req = FUNC_4(VAR_4, VAR_3);
 if (!VAR_8->req)
  return -VAR_2;

 VAR_8->req_dma = FUNC_0(VAR_7->ib_device, VAR_8->req,
       VAR_4,
       VAR_1);
 if (FUNC_1(VAR_7->ib_device,
    VAR_8->req_dma))
  goto free_req;

 VAR_8->rsp = FUNC_4(VAR_5, VAR_3);
 if (!VAR_8->rsp)
  goto unmap_req;

 VAR_8->rsp_dma = FUNC_0(VAR_7->ib_device, VAR_8->rsp,
        VAR_5,
        VAR_0);
 if (FUNC_1(VAR_7->ib_device,
    VAR_8->rsp_dma))
  goto free_rsp;

 return 0;

free_rsp:
 FUNC_3(VAR_8->rsp);
unmap_req:
 FUNC_2(VAR_7->ib_device, VAR_8->req_dma,
       VAR_4,
       VAR_1);
free_req:
 FUNC_3(VAR_8->req);

 return -VAR_2;
}
