
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_compress_encoder_t {int super; int compressor; } ;
typedef int h2o_sendvec_t ;
typedef int h2o_send_state_t ;
typedef int h2o_req_t ;
typedef int h2o_ostream_t ;


 int FUNC_0 (int ,int *,int *,size_t,int ,int **,size_t*) ;
 int FUNC_1 (int *,int *,int *,size_t,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(h2o_ostream_t *VAR_0, h2o_req_t *VAR_1, h2o_sendvec_t *VAR_2, size_t VAR_3, h2o_send_state_t VAR_4)
{
    struct st_compress_encoder_t *VAR_5 = (void *)VAR_0;
    h2o_sendvec_t *VAR_6;
    size_t VAR_7;

    if (VAR_3 == 0 && FUNC_2(VAR_4)) {
        FUNC_1(&VAR_5->super, VAR_1, VAR_2, VAR_3, VAR_4);
        return;
    }

    VAR_4 = FUNC_0(VAR_5->compressor, VAR_1, VAR_2, VAR_3, VAR_4, &VAR_6, &VAR_7);
    FUNC_1(&VAR_5->super, VAR_1, VAR_6, VAR_7, VAR_4);
}
