
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int bandwidth_hz; } ;
struct dvb_frontend {TYPE_1__ dtv_property_cache; } ;



__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_0, u8 *VAR_1)
{
 u32 VAR_2 = VAR_0->dtv_property_cache.bandwidth_hz;
 if (VAR_2 == 8000000)
  VAR_1[3] |= 0x08;
}
