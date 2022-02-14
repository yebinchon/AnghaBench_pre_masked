
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct st_golombset_encode_t {int dummy; } ;


 scalar_t__ FUNC_0 (struct st_golombset_encode_t*,int) ;
 int FUNC_1 (struct st_golombset_encode_t*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct st_golombset_encode_t *VAR_0, unsigned VAR_1, uint64_t VAR_2)
{

    uint64_t VAR_3 = VAR_2 >> VAR_1;
    for (; VAR_3 != 0; --VAR_3)
        if (FUNC_0(VAR_0, 0) != 0)
            return -1;
    if (FUNC_0(VAR_0, 1) != 0)
        return -1;

    return FUNC_1(VAR_0, VAR_1, VAR_2);
}
