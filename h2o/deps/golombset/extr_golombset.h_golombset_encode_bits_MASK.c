
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct st_golombset_encode_t {int dummy; } ;


 scalar_t__ FUNC_0 (struct st_golombset_encode_t*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct st_golombset_encode_t *VAR_0, unsigned VAR_1, uint64_t VAR_2)
{
    if (VAR_1 != 0) {
        do {
            --VAR_1;
            if (FUNC_0(VAR_0, (VAR_2 >> VAR_1) & 1) != 0)
                return -1;
        } while (VAR_1 != 0);
    }
    return 0;
}
