
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int len; TYPE_3__* stat; } ;
struct TYPE_6__ {int len; TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ post_bit_count; TYPE_4__ post_bit_error; TYPE_2__ block_count; TYPE_4__ block_error; TYPE_4__ cnr; TYPE_4__ strength; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct dib7000p_state* demodulator_priv; } ;
struct dib7000p_state {scalar_t__ per_jiffies_stats; scalar_t__ ber_jiffies_stats; int old_ucb; } ;
struct TYPE_7__ {void* scale; scalar_t__ uvalue; } ;
struct TYPE_5__ {void* scale; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,int *) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_2)
{
 struct dib7000p_state *VAR_3 = VAR_2->demodulator_priv;
 struct dtv_frontend_properties *VAR_4 = &VAR_2->dtv_property_cache;
 u32 VAR_5;

 FUNC_1(&VAR_4->strength, 0, sizeof(VAR_4->strength));
 FUNC_1(&VAR_4->cnr, 0, sizeof(VAR_4->cnr));
 FUNC_1(&VAR_4->post_bit_error, 0, sizeof(VAR_4->post_bit_error));
 FUNC_1(&VAR_4->post_bit_count, 0, sizeof(VAR_4->post_bit_count));
 FUNC_1(&VAR_4->block_error, 0, sizeof(VAR_4->block_error));

 VAR_4->strength.len = 1;
 VAR_4->cnr.len = 1;
 VAR_4->block_error.len = 1;
 VAR_4->block_count.len = 1;
 VAR_4->post_bit_error.len = 1;
 VAR_4->post_bit_count.len = 1;

 VAR_4->strength.stat[0].scale = VAR_0;
 VAR_4->strength.stat[0].uvalue = 0;

 VAR_4->cnr.stat[0].scale = VAR_1;
 VAR_4->block_error.stat[0].scale = VAR_1;
 VAR_4->block_count.stat[0].scale = VAR_1;
 VAR_4->post_bit_error.stat[0].scale = VAR_1;
 VAR_4->post_bit_count.stat[0].scale = VAR_1;

 FUNC_0(VAR_2, &VAR_5);

 VAR_3->old_ucb = VAR_5;
 VAR_3->ber_jiffies_stats = 0;
 VAR_3->per_jiffies_stats = 0;
}
