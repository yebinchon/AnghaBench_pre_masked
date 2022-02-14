
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct st_h2o_qpack_header_t {scalar_t__ value_len; TYPE_1__* name; int value; } ;
struct TYPE_7__ {scalar_t__ max_size; } ;
struct TYPE_8__ {TYPE_2__ table; } ;
typedef TYPE_3__ h2o_qpack_decoder_t ;
struct TYPE_6__ {scalar_t__ len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int,int const*,size_t,int ,char const**) ;
 int FUNC_1 (TYPE_3__*,struct st_h2o_qpack_header_t*) ;
 int FUNC_2 (struct st_h2o_qpack_header_t*) ;
 char* VAR_3 ;

__attribute__((used)) static int FUNC_3(h2o_qpack_decoder_t *VAR_4, struct st_h2o_qpack_header_t *VAR_5, int VAR_6,
                                   const uint8_t *VAR_7, size_t VAR_8, const char **VAR_9)
{
    if ((VAR_5->value_len = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_5->value, VAR_9)) == VAR_2)
        goto Fail;
    if (VAR_5->name->len + VAR_5->value_len + VAR_1 > VAR_4->table.max_size) {
        *VAR_9 = VAR_3;
        goto Fail;
    }
    FUNC_1(VAR_4, VAR_5);
    return 0;
Fail:
    FUNC_2(VAR_5);
    return VAR_0;
}
