
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct zpci_dev {int dummy; } ;
struct TYPE_7__ {int len; scalar_t__ rsp; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
struct TYPE_5__ {int len; int cmd; } ;
struct TYPE_6__ {int pfgid; TYPE_1__ hdr; } ;
struct clp_req_rsp_query_pci_grp {TYPE_4__ response; TYPE_2__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct clp_req_rsp_query_pci_grp* FUNC_0 (int ) ;
 int FUNC_1 (struct clp_req_rsp_query_pci_grp*) ;
 int FUNC_2 (struct clp_req_rsp_query_pci_grp*,int ) ;
 int FUNC_3 (struct zpci_dev*,TYPE_4__*) ;
 int FUNC_4 (struct clp_req_rsp_query_pci_grp*,int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(struct zpci_dev *VAR_6, u8 VAR_7)
{
 struct clp_req_rsp_query_pci_grp *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_5);
 if (!VAR_8)
  return -VAR_4;

 FUNC_4(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->request.hdr.len = sizeof(VAR_8->request);
 VAR_8->request.hdr.cmd = VAR_1;
 VAR_8->response.hdr.len = sizeof(VAR_8->response);
 VAR_8->request.pfgid = VAR_7;

 VAR_9 = FUNC_2(VAR_8, VAR_0);
 if (!VAR_9 && VAR_8->response.hdr.rsp == VAR_2)
  FUNC_3(VAR_6, &VAR_8->response);
 else {
  FUNC_5("Q PCI FGRP:\n");
  FUNC_6(VAR_8->response.hdr.rsp, VAR_9);
  VAR_9 = -VAR_3;
 }
 FUNC_1(VAR_8);
 return VAR_9;
}
