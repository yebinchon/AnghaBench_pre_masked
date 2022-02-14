
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptls_iovec_t ;
struct TYPE_4__ {int digest_size; } ;
typedef TYPE_1__ ptls_hash_algorithm_t ;


 int FUNC_0 (TYPE_1__*,void*,size_t,int ,char*,int ,char const*) ;
 int FUNC_1 (void const*,int ) ;

__attribute__((used)) static int FUNC_2(ptls_hash_algorithm_t *VAR_0, void *VAR_1, size_t VAR_2, int VAR_3, const void *VAR_4,
                           ptls_iovec_t VAR_5, const char *VAR_6)
{
    return FUNC_0(VAR_0, VAR_1, VAR_2, FUNC_1(VAR_4, VAR_0->digest_size), VAR_3 ? "iv" : "key", VAR_5,
                                  VAR_6);
}
