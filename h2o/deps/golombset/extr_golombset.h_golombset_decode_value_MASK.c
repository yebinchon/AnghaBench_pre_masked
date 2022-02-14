
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct st_golombset_decode_t {int dummy; } ;


 int FUNC_0 (struct st_golombset_decode_t*) ;
 int FUNC_1 (struct st_golombset_decode_t*,unsigned int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct st_golombset_decode_t *VAR_0, unsigned VAR_1, uint64_t *VAR_2)
{
    uint64_t VAR_3;
    int VAR_4;


    for (VAR_3 = 0; ; ++VAR_3) {
        if ((VAR_4 = FUNC_0(VAR_0)) == -1)
            return -1;
        if (VAR_4)
            break;
    }

    if (FUNC_1(VAR_0, VAR_1, VAR_2) == -1)
        return -1;

    *VAR_2 += VAR_3 << VAR_1;

    return 0;
}
