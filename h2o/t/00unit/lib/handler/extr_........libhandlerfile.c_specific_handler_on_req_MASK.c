
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int len; int base; } ;
struct st_h2o_specific_file_handler_t {int mime_type; TYPE_1__ real_path; int flags; } ;
struct st_h2o_sendfile_generator_t {int dummy; } ;
struct TYPE_9__ {int path_normalized; } ;
typedef TYPE_2__ h2o_req_t ;
typedef int h2o_handler_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct st_h2o_sendfile_generator_t* FUNC_0 (TYPE_2__*,int ,int ,int*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_3 (struct st_h2o_sendfile_generator_t*,TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(h2o_handler_t *VAR_4, h2o_req_t *VAR_5)
{
    struct st_h2o_specific_file_handler_t *VAR_6 = (void *)VAR_4;
    struct st_h2o_sendfile_generator_t *VAR_7;
    int VAR_8;


    if ((VAR_7 = FUNC_0(VAR_5, VAR_6->real_path.base, VAR_6->real_path.len, &VAR_8, VAR_6->flags)) == ((void*)0)) {
        if (VAR_8) {
            FUNC_1(VAR_5, "Access Forbidden", "access forbidden", 0);
        } else if (VAR_3 == VAR_2) {
            return -1;
        } else if (VAR_3 == VAR_1 || VAR_3 == VAR_0) {
            FUNC_2(VAR_5, "Service Unavailable", "please try again later", 0);
        } else {
            FUNC_1(VAR_5, "Access Forbidden", "access forbidden", 0);
        }
        return 0;
    }

    return FUNC_3(VAR_7, VAR_5, VAR_5->path_normalized, VAR_6->real_path.base, VAR_6->real_path.len, VAR_6->mime_type);
}
