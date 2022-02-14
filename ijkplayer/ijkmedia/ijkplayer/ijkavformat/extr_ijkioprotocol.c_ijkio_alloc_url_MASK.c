
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int priv_data_size; } ;
struct TYPE_7__ {void* priv_data; TYPE_2__* prot; } ;
typedef TYPE_1__ IjkURLContext ;


 void* FUNC_0 (int,int) ;
 TYPE_2__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char const*,char*,int ) ;

int FUNC_3(IjkURLContext **VAR_4, const char *VAR_5) {
    if (!VAR_4) {
        return -1;
    }

    IjkURLContext *VAR_6 = ((void*)0);
    if (!FUNC_2(VAR_5, "cache:", FUNC_1("cache:"))) {
        VAR_6 = (IjkURLContext *)FUNC_0(1, sizeof(IjkURLContext));
        VAR_6->prot = &VAR_1;
        VAR_6->priv_data = FUNC_0(1, VAR_1.priv_data_size);
    } else if (!FUNC_2(VAR_5, "ffio:", FUNC_1("ffio:"))) {
        VAR_6 = (IjkURLContext *)FUNC_0(1, sizeof(IjkURLContext));
        VAR_6->prot = &VAR_2;
        VAR_6->priv_data = FUNC_0(1, VAR_2.priv_data_size);
    } else if (!FUNC_2(VAR_5, "httphook:", FUNC_1("httphook:"))) {
        VAR_6 = (IjkURLContext *)FUNC_0(1, sizeof(IjkURLContext));
        VAR_6->prot = &VAR_3;
        VAR_6->priv_data = FUNC_0(1, VAR_3.priv_data_size);
    }







      else {
        return -1;
    }

    *VAR_4 = VAR_6;

    return 0;
}
