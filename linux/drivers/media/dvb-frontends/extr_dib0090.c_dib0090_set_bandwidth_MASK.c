
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_6__ {scalar_t__ in_soc; } ;
struct dib0090_state {int bb_1_def; TYPE_3__ identity; TYPE_2__* fe; } ;
struct TYPE_4__ {int bandwidth_hz; } ;
struct TYPE_5__ {TYPE_1__ dtv_property_cache; } ;


 int FUNC_0 (struct dib0090_state*,int,int) ;

__attribute__((used)) static void FUNC_1(struct dib0090_state *VAR_0)
{
 u16 VAR_1;

 if (VAR_0->fe->dtv_property_cache.bandwidth_hz / 1000 <= 5000)
  VAR_1 = (3 << 14);
 else if (VAR_0->fe->dtv_property_cache.bandwidth_hz / 1000 <= 6000)
  VAR_1 = (2 << 14);
 else if (VAR_0->fe->dtv_property_cache.bandwidth_hz / 1000 <= 7000)
  VAR_1 = (1 << 14);
 else
  VAR_1 = (0 << 14);

 VAR_0->bb_1_def &= 0x3fff;
 VAR_0->bb_1_def |= VAR_1;

 FUNC_0(VAR_0, 0x01, VAR_0->bb_1_def);

 FUNC_0(VAR_0, 0x03, 0x6008);
 FUNC_0(VAR_0, 0x04, 0x1);
 if (VAR_0->identity.in_soc) {
  FUNC_0(VAR_0, 0x05, 0x9bcf);
 } else {
  FUNC_0(VAR_0, 0x02, (5 << 11) | (8 << 6) | (22 & 0x3f));
  FUNC_0(VAR_0, 0x05, 0xabcd);
 }
}
