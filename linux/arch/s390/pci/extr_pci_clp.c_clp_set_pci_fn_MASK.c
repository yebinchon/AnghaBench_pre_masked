
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
struct TYPE_7__ {scalar_t__ rsp; int len; } ;
struct TYPE_8__ {TYPE_3__ hdr; int fh; } ;
struct TYPE_5__ {int len; int cmd; } ;
struct TYPE_6__ {void* ndas; void* oc; int fh; TYPE_1__ hdr; } ;
struct clp_req_rsp_set_pci {TYPE_4__ response; TYPE_2__ request; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct clp_req_rsp_set_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct clp_req_rsp_set_pci*) ;
 int FUNC_2 (struct clp_req_rsp_set_pci*,int ) ;
 int FUNC_3 (struct clp_req_rsp_set_pci*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(u32 *VAR_7, u8 VAR_8, u8 VAR_9)
{
 struct clp_req_rsp_set_pci *VAR_10;
 int VAR_11, VAR_12 = 100;

 VAR_10 = FUNC_0(VAR_6);
 if (!VAR_10)
  return -VAR_5;

 do {
  FUNC_3(VAR_10, 0, sizeof(*VAR_10));
  VAR_10->request.hdr.len = sizeof(VAR_10->request);
  VAR_10->request.hdr.cmd = VAR_3;
  VAR_10->response.hdr.len = sizeof(VAR_10->response);
  VAR_10->request.fh = *VAR_7;
  VAR_10->request.oc = VAR_9;
  VAR_10->request.ndas = VAR_8;

  VAR_11 = FUNC_2(VAR_10, VAR_0);
  if (VAR_10->response.hdr.rsp == VAR_2) {
   VAR_12--;
   if (VAR_12 < 0)
    break;
   FUNC_4(20);
  }
 } while (VAR_10->response.hdr.rsp == VAR_2);

 if (!VAR_11 && VAR_10->response.hdr.rsp == VAR_1)
  *VAR_7 = VAR_10->response.fh;
 else {
  FUNC_5("Set PCI FN:\n");
  FUNC_6(VAR_10->response.hdr.rsp, VAR_11);
  VAR_11 = -VAR_4;
 }
 FUNC_1(VAR_10);
 return VAR_11;
}
