
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dataq; } ;
struct virtio_crypto_sym_request {TYPE_2__ base; int iv; } ;
struct ablkcipher_request {int dummy; } ;
struct TYPE_3__ {int engine; } ;


 int FUNC_0 (int ,struct ablkcipher_request*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(
 struct virtio_crypto_sym_request *VAR_0,
 struct ablkcipher_request *VAR_1,
 int VAR_2)
{
 FUNC_0(VAR_0->base.dataq->engine,
        VAR_1, VAR_2);
 FUNC_1(VAR_0->iv);
 FUNC_2(&VAR_0->base);
}
