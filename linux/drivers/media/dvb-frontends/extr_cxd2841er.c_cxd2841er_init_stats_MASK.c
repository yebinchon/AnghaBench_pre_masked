
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int len; TYPE_9__* stat; } ;
struct TYPE_19__ {int len; TYPE_7__* stat; } ;
struct TYPE_17__ {int len; TYPE_5__* stat; } ;
struct TYPE_15__ {int len; TYPE_3__* stat; } ;
struct TYPE_13__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_10__ post_bit_count; TYPE_8__ post_bit_error; TYPE_6__ block_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* scale; } ;
struct TYPE_12__ {int scale; } ;


 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;

 VAR_3->strength.len = 1;
 VAR_3->strength.stat[0].scale = VAR_1;
 VAR_3->cnr.len = 1;
 VAR_3->cnr.stat[0].scale = VAR_0;
 VAR_3->block_error.len = 1;
 VAR_3->block_error.stat[0].scale = VAR_0;
 VAR_3->post_bit_error.len = 1;
 VAR_3->post_bit_error.stat[0].scale = VAR_0;
 VAR_3->post_bit_count.len = 1;
 VAR_3->post_bit_count.stat[0].scale = VAR_0;
}
