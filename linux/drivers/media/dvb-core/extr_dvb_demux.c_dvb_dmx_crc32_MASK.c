
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int crc_val; } ;
struct TYPE_4__ {TYPE_1__ sec; } ;
struct dvb_demux_feed {TYPE_2__ feed; } ;


 int FUNC_0 (int ,int const*,size_t) ;

__attribute__((used)) static u32 FUNC_1(struct dvb_demux_feed *VAR_0, const u8 *VAR_1, size_t VAR_2)
{
 return (VAR_0->feed.sec.crc_val = FUNC_0(VAR_0->feed.sec.crc_val, VAR_1, VAR_2));
}
