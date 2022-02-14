
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct dib9000_state {int fe_id; TYPE_2__** fe; } ;
struct TYPE_3__ {int frequency; int bandwidth_hz; scalar_t__ delivery_system; } ;
struct TYPE_4__ {TYPE_1__ dtv_property_cache; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct dib9000_state*,int ,int*) ;

__attribute__((used)) static void FUNC_1(struct dib9000_state *VAR_2)
{
 u8 VAR_3[9];
 u32 VAR_4 = VAR_2->fe[0]->dtv_property_cache.frequency / 1000;
 if (VAR_2->fe_id % 2)
  VAR_4 += 101;

 VAR_3[0] = (u8) ((VAR_4 >> 0) & 0xff);
 VAR_3[1] = (u8) ((VAR_4 >> 8) & 0xff);
 VAR_3[2] = (u8) ((VAR_4 >> 16) & 0xff);
 VAR_3[3] = (u8) ((VAR_4 >> 24) & 0xff);
 VAR_3[4] = (u8) ((VAR_2->fe[0]->dtv_property_cache.bandwidth_hz / 1000 >> 0) & 0xff);
 VAR_3[5] = (u8) ((VAR_2->fe[0]->dtv_property_cache.bandwidth_hz / 1000 >> 8) & 0xff);
 VAR_3[6] = (u8) ((VAR_2->fe[0]->dtv_property_cache.bandwidth_hz / 1000 >> 16) & 0xff);
 VAR_3[7] = (u8) ((VAR_2->fe[0]->dtv_property_cache.bandwidth_hz / 1000 >> 24) & 0xff);
 VAR_3[8] = 0x80;
 if (VAR_2->fe[0]->dtv_property_cache.delivery_system == VAR_1)
  VAR_3[8] |= 1;
 FUNC_0(VAR_2, VAR_0, VAR_3);
}
