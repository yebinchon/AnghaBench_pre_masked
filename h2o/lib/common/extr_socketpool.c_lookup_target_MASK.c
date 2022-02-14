
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_11__ {scalar_t__ scheme; } ;
typedef TYPE_2__ h2o_url_t ;
struct TYPE_12__ {TYPE_2__ url; } ;
typedef TYPE_3__ h2o_socketpool_target_t ;
struct TYPE_10__ {size_t size; TYPE_3__** entries; } ;
struct TYPE_13__ {TYPE_1__ targets; } ;
typedef TYPE_4__ h2o_socketpool_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static size_t FUNC_2(h2o_socketpool_t *VAR_1, h2o_url_t *VAR_2)
{
    uint16_t VAR_3 = FUNC_0(VAR_2);
    size_t VAR_4 = 0;
    for (; VAR_4 != VAR_1->targets.size; ++VAR_4) {
        h2o_socketpool_target_t *VAR_5 = VAR_1->targets.entries[VAR_4];
        if (VAR_5->url.scheme != VAR_2->scheme)
            continue;
        if (FUNC_0(&VAR_5->url) != VAR_3)
            continue;
        if (!FUNC_1(&VAR_5->url, VAR_2))
            continue;
        return VAR_4;
    }
    return VAR_0;
}
