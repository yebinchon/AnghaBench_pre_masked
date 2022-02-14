
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {TYPE_1__* stat; } ;
struct dtv_frontend_properties {TYPE_2__ block_error; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;
struct TYPE_3__ {scalar_t__ scale; int uvalue; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_1->dtv_property_cache;

 if (VAR_3->block_error.stat[0].scale == VAR_0) {
  *VAR_2 = 0;
  return 0;
 }

 *VAR_2 = VAR_3->block_error.stat[0].uvalue;
 return 0;
}
