
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_15__ {int len; TYPE_11__* stat; } ;
struct TYPE_13__ {int len; TYPE_9__* stat; } ;
struct TYPE_23__ {int len; TYPE_7__* stat; } ;
struct TYPE_21__ {int len; TYPE_5__* stat; } ;
struct TYPE_19__ {int len; TYPE_3__* stat; } ;
struct TYPE_17__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_12__ post_bit_count; TYPE_10__ post_bit_error; TYPE_8__ pre_bit_count; TYPE_6__ pre_bit_error; TYPE_4__ cnr; TYPE_2__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_24__ {void* scale; } ;
struct TYPE_22__ {void* scale; } ;
struct TYPE_20__ {void* scale; } ;
struct TYPE_18__ {void* scale; } ;
struct TYPE_16__ {void* scale; } ;
struct TYPE_14__ {void* scale; } ;


 void* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;


 VAR_2->strength.len = 1;
 VAR_2->strength.stat[0].scale = VAR_0;
 VAR_2->cnr.len = 1;
 VAR_2->cnr.stat[0].scale = VAR_0;
 VAR_2->pre_bit_error.len = 1;
 VAR_2->pre_bit_error.stat[0].scale = VAR_0;
 VAR_2->pre_bit_count.len = 1;
 VAR_2->pre_bit_count.stat[0].scale = VAR_0;
 VAR_2->post_bit_error.len = 1;
 VAR_2->post_bit_error.stat[0].scale = VAR_0;
 VAR_2->post_bit_count.len = 1;
 VAR_2->post_bit_count.stat[0].scale = VAR_0;

 return 0;
}
