
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t max_size; void* data; int magic; } ;
typedef TYPE_1__ secp256k1_scratch ;
typedef int secp256k1_callback ;


 int VAR_0 ;
 void* FUNC_0 (int const*,size_t const) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static secp256k1_scratch* FUNC_3(const secp256k1_callback* VAR_1, size_t VAR_2) {
    const size_t VAR_3 = ((sizeof(secp256k1_scratch) + VAR_0 - 1) / VAR_0) * VAR_0;
    void *VAR_4 = FUNC_0(VAR_1, VAR_3 + VAR_2);
    secp256k1_scratch* VAR_5 = (secp256k1_scratch *)VAR_4;
    if (VAR_5 != ((void*)0)) {
        FUNC_2(VAR_5, 0, sizeof(*VAR_5));
        FUNC_1(VAR_5->magic, "scratch", 8);
        VAR_5->data = (void *) ((char *) VAR_4 + VAR_3);
        VAR_5->max_size = VAR_2;
    }
    return VAR_5;
}
