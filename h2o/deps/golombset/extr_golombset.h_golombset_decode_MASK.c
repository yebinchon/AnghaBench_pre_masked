
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct st_golombset_decode_t {void const* member_0; unsigned char* member_1; int member_2; } ;


 scalar_t__ FUNC_0 (struct st_golombset_decode_t*,unsigned int,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, const void *VAR_1, size_t VAR_2, uint64_t *VAR_3, size_t *VAR_4)
{
    struct st_golombset_decode_t VAR_5 = {VAR_1, (unsigned char *)VAR_1 + VAR_2, 8};
    size_t VAR_6 = 0;
    uint64_t VAR_7 = 0;

    while (1) {
        uint64_t VAR_8;
        if (FUNC_0(&VAR_5, VAR_0, &VAR_8) != 0)
            break;
        if (VAR_6 == *VAR_4) {

            return -1;
        }
        VAR_8 += VAR_7;
        VAR_3[VAR_6++] = VAR_8;
        VAR_7 = VAR_8 + 1;
    }
    *VAR_4 = VAR_6;
    return 0;
}
