
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long len; } ;
struct TYPE_8__ {TYPE_3__ hdr; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct clp_req_rsp_slpc {TYPE_4__ response; TYPE_2__ request; } ;
struct clp_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clp_req_rsp_slpc*,int ) ;

__attribute__((used)) static int FUNC_1(struct clp_req *VAR_4, struct clp_req_rsp_slpc *VAR_5)
{
 unsigned long VAR_6 = VAR_3 - sizeof(VAR_5->request);

 if (VAR_5->request.hdr.len != sizeof(VAR_5->request) ||
     VAR_5->response.hdr.len > VAR_6)
  return -VAR_1;
 return FUNC_0(VAR_5, VAR_0) ? -VAR_2 : 0;
}
