
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int check_crc; } ;
struct TYPE_3__ {TYPE_2__ sec; } ;
struct dvb_demux_feed {int pid; int state; TYPE_1__ feed; struct dvb_demux* demux; } ;
struct dvb_demux {int mutex; } ;
struct dmx_section_feed {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_demux_feed*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dmx_section_feed *VAR_3,
    u16 VAR_4, int VAR_5)
{
 struct dvb_demux_feed *VAR_6 = (struct dvb_demux_feed *)VAR_3;
 struct dvb_demux *VAR_7 = VAR_6->demux;

 if (VAR_4 > 0x1fff)
  return -VAR_1;

 if (FUNC_1(&VAR_7->mutex))
  return -VAR_2;

 FUNC_0(VAR_6);

 VAR_6->pid = VAR_4;
 VAR_6->feed.sec.check_crc = VAR_5;

 VAR_6->state = VAR_0;
 FUNC_2(&VAR_7->mutex);
 return 0;
}
