
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int * url; int inner; } ;
typedef TYPE_2__ Context ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int *,int **,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(URLContext *VAR_1, const char *VAR_2, int VAR_3, AVDictionary **VAR_4)
{
    Context *VAR_5 = VAR_1->priv_data;

    if (!VAR_5->url || !*VAR_5->url)
        return VAR_0;

    return FUNC_0(&VAR_5->inner,
                                VAR_5->url,
                                VAR_3,
                                &VAR_1->interrupt_callback,
                                VAR_4,
                                VAR_1->protocol_whitelist,
                                VAR_1->protocol_blacklist,
                                VAR_1);
}
