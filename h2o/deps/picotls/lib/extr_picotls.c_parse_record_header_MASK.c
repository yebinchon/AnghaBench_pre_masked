
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct st_ptls_record_t {scalar_t__ type; size_t length; void* version; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__ const*) ;

__attribute__((used)) static int FUNC_1(struct st_ptls_record_t *VAR_4, const uint8_t *VAR_5)
{
    VAR_4->type = VAR_5[0];
    VAR_4->version = FUNC_0(VAR_5 + 1);
    VAR_4->length = FUNC_0(VAR_5 + 3);

    if (VAR_4->length >
        (size_t)(VAR_4->type == VAR_1 ? VAR_2 : VAR_3))
        return VAR_0;

    return 0;
}
