
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;


 scalar_t__ FUNC_0 (int const*,size_t,int const*,size_t,scalar_t__,scalar_t__,scalar_t__,int*,size_t) ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3(const char *VAR_0, const char *VAR_1, uint64_t VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    uint8_t VAR_5[64];
    size_t VAR_6;
    size_t VAR_7 = (sizeof VAR_5 / sizeof VAR_5[0]);
    size_t VAR_8 = FUNC_2(VAR_0);
    size_t VAR_9 = FUNC_2(VAR_1);
    int VAR_10 = 0;

    if (FUNC_0(
            (const uint8_t *) VAR_0, VAR_8, (const uint8_t *) VAR_1,
            VAR_9, VAR_2, VAR_3, VAR_4, VAR_5, VAR_7) != 0) {
        FUNC_1("pwhash_scryptsalsa208sha256_ll([%s],[%s]) failure\n", VAR_0,
               VAR_1);
        return;
    }

    FUNC_1("scrypt('%s', '%s', %lu, %lu, %lu, %lu) =\n", VAR_0, VAR_1,
           (unsigned long) VAR_2, (unsigned long) VAR_3, (unsigned long) VAR_4,
           (unsigned long) VAR_7);

    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
        FUNC_1("%02x%c", VAR_5[VAR_6], VAR_10 < 15 ? ' ' : '\n');
        VAR_10 = VAR_10 < 15 ? VAR_10 + 1 : 0;
    }
}
