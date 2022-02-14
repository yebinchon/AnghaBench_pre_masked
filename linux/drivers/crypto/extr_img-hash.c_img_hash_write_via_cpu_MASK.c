
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct img_hash_request_ctx {int total; int buffer; scalar_t__ bufcnt; int sg; } ;
struct img_hash_dev {int flags; TYPE_1__* req; } ;
struct TYPE_2__ {int nbytes; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct img_hash_request_ctx* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct img_hash_dev*,int) ;
 int FUNC_2 (struct img_hash_dev*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct img_hash_dev *VAR_2)
{
 struct img_hash_request_ctx *VAR_3 = FUNC_0(VAR_2->req);

 VAR_3->bufcnt = FUNC_3(VAR_2->req->src, FUNC_4(VAR_3->sg),
     VAR_3->buffer, VAR_2->req->nbytes);

 VAR_3->total = VAR_2->req->nbytes;
 VAR_3->bufcnt = 0;

 VAR_2->flags |= (VAR_0 | VAR_1);

 FUNC_1(VAR_2, 0);

 return FUNC_2(VAR_2, VAR_3->buffer, VAR_3->total, 1);
}
