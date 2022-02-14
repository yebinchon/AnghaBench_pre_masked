
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux {scalar_t__ users; } ;
struct dmx_demux {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct dmx_demux *VAR_1)
{
 struct dvb_demux *VAR_2 = (struct dvb_demux *)VAR_1;

 if (VAR_2->users == 0)
  return -VAR_0;

 VAR_2->users--;

 return 0;
}
