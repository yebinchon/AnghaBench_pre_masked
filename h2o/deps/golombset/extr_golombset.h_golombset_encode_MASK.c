
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct st_golombset_encode_t {unsigned char* member_0; unsigned char* member_1; unsigned char* dst; } ;


 scalar_t__ FUNC_0 (struct st_golombset_encode_t*,unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_0, uint64_t *VAR_1, size_t VAR_2, void *VAR_3, size_t *VAR_4)
{
    struct st_golombset_encode_t VAR_5 = {(unsigned char *)VAR_3 - 1, (unsigned char *)VAR_3 + *VAR_4};
    size_t VAR_6;
    uint64_t VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 != VAR_2; ++VAR_6) {
        if (FUNC_0(&VAR_5, VAR_0, VAR_1[VAR_6] - VAR_7) != 0)
            return -1;
        VAR_7 = VAR_1[VAR_6] + 1;
    }

    *VAR_4 = VAR_5.dst + 1 - (unsigned char *)VAR_3;

    return 0;
}
