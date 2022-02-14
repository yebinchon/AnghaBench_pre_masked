
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_16__ {TYPE_2__* entries; } ;
struct TYPE_13__ {int * mime_attr; TYPE_9__ headers; } ;
struct TYPE_14__ {TYPE_4__ res; TYPE_1__* pathconf; } ;
typedef TYPE_5__ h2o_req_t ;
struct TYPE_12__ {int attr; } ;
struct TYPE_15__ {TYPE_3__ data; } ;
typedef TYPE_6__ h2o_mimemap_type_t ;
struct TYPE_11__ {int value; } ;
struct TYPE_10__ {int mimemap; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_9__*,int ,int) ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 (int ,int ,int ) ;

void FUNC_2(h2o_req_t *VAR_2)
{
    ssize_t VAR_3;
    h2o_mimemap_type_t *VAR_4;

    if (VAR_2->res.mime_attr != ((void*)0))
        return;

    if ((VAR_3 = FUNC_0(&VAR_2->res.headers, VAR_0, -1)) != -1 &&
        (VAR_4 = FUNC_1(VAR_2->pathconf->mimemap, VAR_2->res.headers.entries[VAR_3].value, 0)) !=
            ((void*)0))
        VAR_2->res.mime_attr = &VAR_4->data.attr;
    else
        VAR_2->res.mime_attr = &VAR_1;
}
