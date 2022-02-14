
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtv_frontend_properties {scalar_t__ frequency; scalar_t__ bandwidth_hz; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;


 int FUNC_0 (struct dvb_frontend*,scalar_t__) ;
 int FUNC_1 (struct dvb_frontend*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct dtv_frontend_properties *VAR_1 = &VAR_0->dtv_property_cache;

 if (VAR_1->frequency > 0)
  FUNC_1(VAR_0, VAR_1->frequency);

 if (VAR_1->bandwidth_hz > 0)
  FUNC_0(VAR_0, VAR_1->bandwidth_hz);

 return 0;
}
