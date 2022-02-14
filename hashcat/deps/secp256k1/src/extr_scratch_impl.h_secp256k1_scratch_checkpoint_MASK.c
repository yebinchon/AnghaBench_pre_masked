
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t alloc_size; int magic; } ;
typedef TYPE_1__ secp256k1_scratch ;
typedef int secp256k1_callback ;


 scalar_t__ memcmp (int ,char*,int) ;
 int secp256k1_callback_call (int const*,char*) ;

__attribute__((used)) static size_t secp256k1_scratch_checkpoint(const secp256k1_callback* error_callback, const secp256k1_scratch* scratch) {
    if (memcmp(scratch->magic, "scratch", 8) != 0) {
        secp256k1_callback_call(error_callback, "invalid scratch space");
        return 0;
    }
    return scratch->alloc_size;
}
