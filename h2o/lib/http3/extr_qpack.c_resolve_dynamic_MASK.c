
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct st_h2o_qpack_header_table_t {int dummy; } ;
struct st_h2o_qpack_header_t {int dummy; } ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (scalar_t__*,int const**,int const*,unsigned int) ;
 char* VAR_0 ;
 struct st_h2o_qpack_header_t* FUNC_1 (struct st_h2o_qpack_header_table_t*,scalar_t__,char const**) ;

__attribute__((used)) static struct st_h2o_qpack_header_t *FUNC_2(struct st_h2o_qpack_header_table_t *VAR_1, int64_t VAR_2,
                                                     const uint8_t **VAR_3, const uint8_t *VAR_4, unsigned VAR_5,
                                                     const char **VAR_6)
{
    int64_t VAR_7;

    if (FUNC_0(&VAR_7, VAR_3, VAR_4, VAR_5) != 0 || VAR_7 >= VAR_2) {
        *VAR_6 = VAR_0;
        return ((void*)0);
    }
    return FUNC_1(VAR_1, VAR_2 - VAR_7, VAR_6);
}
