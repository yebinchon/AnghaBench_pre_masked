
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct st_golombset_decode_t {int dummy; } ;


 int FUNC_0 (struct st_golombset_decode_t*) ;

__attribute__((used)) static int FUNC_1(struct st_golombset_decode_t *VAR_0, unsigned VAR_1, uint64_t *VAR_2)
{
    int VAR_3;

    *VAR_2 = 0;
    for (; VAR_1 != 0; --VAR_1) {
        if ((VAR_3 = FUNC_0(VAR_0)) == -1)
            return -1;
        *VAR_2 = (*VAR_2 * 2) + VAR_3;
    }

    return 0;
}
