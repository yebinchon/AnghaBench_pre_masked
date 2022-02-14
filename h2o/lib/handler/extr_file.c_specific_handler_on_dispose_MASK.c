
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; } ;
struct st_h2o_specific_file_handler_t {int mime_type; TYPE_1__ real_path; } ;
typedef int h2o_handler_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(h2o_handler_t *VAR_0)
{
    struct st_h2o_specific_file_handler_t *VAR_1 = (void *)VAR_0;

    FUNC_0(VAR_1->real_path.base);
    FUNC_1(VAR_1->mime_type);
}
