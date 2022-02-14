
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint64_t ;
struct TYPE_16__ {size_t size; TYPE_5__* entries; } ;
struct TYPE_15__ {TYPE_1__* scheme; int path; int method; int authority; } ;
struct TYPE_17__ {TYPE_3__ headers; TYPE_2__ input; int conn; int version; } ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_18__ {int value; int * name; } ;
typedef TYPE_5__ h2o_header_t ;
struct TYPE_20__ {int buf; } ;
struct TYPE_19__ {int buf; } ;
struct TYPE_14__ {int name; } ;
struct TYPE_13__ {int buf; } ;
struct TYPE_12__ {int buf; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 TYPE_11__* VAR_0 ;
 TYPE_10__* VAR_1 ;
 TYPE_9__* VAR_2 ;
 TYPE_8__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_3(h2o_req_t *VAR_6, uint64_t VAR_7)
{
    FUNC_1(VAR_4, VAR_6->conn, VAR_7, VAR_6->version);
    if (FUNC_0(VAR_5, VAR_6->conn)) {
        FUNC_2(VAR_6, VAR_7, VAR_0->buf, VAR_6->input.authority);
        FUNC_2(VAR_6, VAR_7, VAR_1->buf, VAR_6->input.method);
        FUNC_2(VAR_6, VAR_7, VAR_2->buf, VAR_6->input.path);
        FUNC_2(VAR_6, VAR_7, VAR_3->buf, VAR_6->input.scheme->name);
        size_t VAR_8;
        for (VAR_8 = 0; VAR_8 != VAR_6->headers.size; ++VAR_8) {
            h2o_header_t *VAR_9 = VAR_6->headers.entries + VAR_8;
            FUNC_2(VAR_6, VAR_7, *VAR_9->name, VAR_9->value);
        }
    }
}
