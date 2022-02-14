
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spacc_req {int result; TYPE_1__* req; int dst_addr; int dst_ddt; int src_addr; int src_ddt; } ;
struct ablkcipher_request {scalar_t__ src; scalar_t__ dst; int nbytes; } ;
struct TYPE_3__ {int (* complete ) (TYPE_1__*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ablkcipher_request* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct spacc_req*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(struct spacc_req *VAR_3)
{
 struct ablkcipher_request *VAR_4 = FUNC_0(VAR_3->req);

 if (VAR_4->src != VAR_4->dst) {
  FUNC_1(VAR_3, VAR_3->src_ddt, VAR_3->src_addr, VAR_4->src,
          VAR_4->nbytes, VAR_2);
  FUNC_1(VAR_3, VAR_3->dst_ddt, VAR_3->dst_addr, VAR_4->dst,
          VAR_4->nbytes, VAR_1);
 } else
  FUNC_1(VAR_3, VAR_3->dst_ddt, VAR_3->dst_addr, VAR_4->dst,
          VAR_4->nbytes, VAR_0);

 VAR_3->req->complete(VAR_3->req, VAR_3->result);
}
