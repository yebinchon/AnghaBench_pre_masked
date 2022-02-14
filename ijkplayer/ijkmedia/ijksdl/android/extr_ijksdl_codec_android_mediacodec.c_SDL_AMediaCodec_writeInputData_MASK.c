
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_5__ {int (* func_writeInputData ) (TYPE_1__*,size_t,int const*,size_t) ;} ;
typedef TYPE_1__ SDL_AMediaCodec ;


 int FUNC_0 (int (*) (TYPE_1__*,size_t,int const*,size_t)) ;
 int FUNC_1 (TYPE_1__*,size_t,int const*,size_t) ;

ssize_t FUNC_2(SDL_AMediaCodec* VAR_0, size_t VAR_1, const uint8_t *VAR_2, size_t VAR_3)
{
    FUNC_0(VAR_0->func_writeInputData);
    return VAR_0->func_writeInputData(VAR_0, VAR_1, VAR_2, VAR_3);
}
