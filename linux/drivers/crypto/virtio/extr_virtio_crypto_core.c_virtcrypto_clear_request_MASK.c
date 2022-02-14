
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_crypto_request {int sgs; int req_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct virtio_crypto_request *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0->req_data);
  FUNC_0(VAR_0->sgs);
 }
}
