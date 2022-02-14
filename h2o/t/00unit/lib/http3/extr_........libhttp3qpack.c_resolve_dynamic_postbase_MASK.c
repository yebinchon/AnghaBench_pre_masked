
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct st_h2o_qpack_header_table_t {int dummy; } ;
struct st_h2o_qpack_header_t {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*,int const**,int const*,unsigned int) ;
 char* VAR_1 ;
 struct st_h2o_qpack_header_t* FUNC_1 (struct st_h2o_qpack_header_table_t*,scalar_t__,char const**) ;

__attribute__((used)) static struct st_h2o_qpack_header_t *FUNC_2(struct st_h2o_qpack_header_table_t *VAR_2, int64_t VAR_3,
                                                              const uint8_t **VAR_4, const uint8_t *VAR_5, unsigned VAR_6,
                                                              const char **VAR_7)
{
    int64_t VAR_8;

    if (FUNC_0(&VAR_8, VAR_4, VAR_5, VAR_6) != 0 || VAR_8 > VAR_0 - (VAR_3 + 1)) {
        *VAR_7 = VAR_1;
        return ((void*)0);
    }
    return FUNC_1(VAR_2, VAR_3 + VAR_8 + 1, VAR_7);
}
