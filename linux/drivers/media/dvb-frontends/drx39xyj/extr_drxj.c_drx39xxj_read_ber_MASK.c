
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {TYPE_3__* stat; } ;
struct TYPE_6__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_4__ pre_bit_count; TYPE_2__ pre_bit_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_7__ {int uvalue; } ;
struct TYPE_5__ {scalar_t__ scale; int uvalue; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;

 if (VAR_3->pre_bit_error.stat[0].scale == VAR_0) {
  *VAR_2 = 0;
  return 0;
 }

 if (!VAR_3->pre_bit_count.stat[0].uvalue) {
  if (!VAR_3->pre_bit_error.stat[0].uvalue)
   *VAR_2 = 0;
  else
   *VAR_2 = 1000000;
 } else {
  *VAR_2 = FUNC_0(VAR_3->pre_bit_error.stat[0].uvalue,
         VAR_3->pre_bit_count.stat[0].uvalue);
 }
 return 0;
}
