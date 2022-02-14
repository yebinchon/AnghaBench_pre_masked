
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int size; } ;
struct drbd_peer_request {TYPE_1__ i; } ;
struct crypto_shash {int dummy; } ;


 int FUNC_0 (struct crypto_shash*,struct drbd_peer_request*,void*) ;

__attribute__((used)) static void FUNC_1(struct crypto_shash *VAR_0,
         struct drbd_peer_request *VAR_1, void *VAR_2,
         unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_1->i.size;
 VAR_1->i.size = VAR_3;
 FUNC_0(VAR_0, VAR_1, VAR_2);
 VAR_1->i.size = VAR_4;
}
