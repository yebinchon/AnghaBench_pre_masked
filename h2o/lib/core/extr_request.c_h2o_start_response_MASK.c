
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int _ostr_top; TYPE_2__* prefilters; int * _generator; } ;
typedef TYPE_1__ h2o_req_t ;
typedef int h2o_generator_t ;
struct TYPE_8__ {int (* on_setup_ostream ) (TYPE_2__*,TYPE_1__*,int *) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,int *) ;

void FUNC_4(h2o_req_t *VAR_0, h2o_generator_t *VAR_1)
{
    FUNC_2(VAR_0);


    FUNC_0(VAR_0->_generator == ((void*)0));
    VAR_0->_generator = VAR_1;


    if (VAR_0->prefilters != ((void*)0)) {
        VAR_0->prefilters->on_setup_ostream(VAR_0->prefilters, VAR_0, &VAR_0->_ostr_top);
    } else {
        FUNC_1(VAR_0, &VAR_0->_ostr_top);
    }
}
