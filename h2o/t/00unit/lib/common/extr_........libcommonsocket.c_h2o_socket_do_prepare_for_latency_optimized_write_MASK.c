
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_8__ {size_t suggested_write_size; } ;
struct TYPE_9__ {TYPE_1__ _latency_optimization; } ;
typedef TYPE_2__ h2o_socket_t ;
typedef int h2o_socket_latency_optimization_conditions_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,int *) ;
 int FUNC_5 (TYPE_2__*,int const*,int ,int ,int ,int ,int ,int ) ;

size_t FUNC_6(h2o_socket_t *VAR_2,
                                                         const h2o_socket_latency_optimization_conditions_t *VAR_3)
{
    uint32_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
    uint64_t VAR_8 = VAR_0;
    int VAR_9 = 1;



    VAR_9 = 0;






    if (VAR_9)
        VAR_8 = FUNC_1(FUNC_3(VAR_2));



    if (VAR_9 && FUNC_4(FUNC_2(VAR_2), &VAR_4, &VAR_5, &VAR_6, &VAR_7) != 0)
        VAR_9 = 0;


    if (VAR_9) {
        FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_1);
    } else {
        FUNC_0(VAR_2, VAR_1);
    }

    return VAR_2->_latency_optimization.suggested_write_size;


}
