
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* _ostr_top; TYPE_4__* _generator; } ;
typedef TYPE_1__ h2o_req_t ;
struct TYPE_9__ {int (* stop ) (TYPE_4__*,TYPE_1__*) ;} ;
struct TYPE_8__ {struct TYPE_8__* next; int (* stop ) (TYPE_2__*,TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(h2o_req_t *VAR_0)
{

    if (VAR_0->_generator != ((void*)0)) {

        if (VAR_0->_generator->stop != ((void*)0))
            VAR_0->_generator->stop(VAR_0->_generator, VAR_0);
        VAR_0->_generator = ((void*)0);
    }

    while (VAR_0->_ostr_top->next != ((void*)0)) {
        if (VAR_0->_ostr_top->stop != ((void*)0))
            VAR_0->_ostr_top->stop(VAR_0->_ostr_top, VAR_0);
        VAR_0->_ostr_top = VAR_0->_ostr_top->next;
    }
}
