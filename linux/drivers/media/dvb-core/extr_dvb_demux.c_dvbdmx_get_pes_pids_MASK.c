
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_demux {int pids; } ;
struct dmx_demux {int dummy; } ;


 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dmx_demux *VAR_0, u16 * VAR_1)
{
 struct dvb_demux *VAR_2 = (struct dvb_demux *)VAR_0;

 FUNC_0(VAR_1, VAR_2->pids, 5 * sizeof(u16));
 return 0;
}
