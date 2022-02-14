
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct dvb_demux {struct list_head frontend_list; } ;
struct dmx_frontend {int connectivity_list; } ;
struct dmx_demux {int dummy; } ;


 int FUNC_0 (int *,struct list_head*) ;

__attribute__((used)) static int FUNC_1(struct dmx_demux *VAR_0,
          struct dmx_frontend *VAR_1)
{
 struct dvb_demux *VAR_2 = (struct dvb_demux *)VAR_0;
 struct list_head *VAR_3 = &VAR_2->frontend_list;

 FUNC_0(&(VAR_1->connectivity_list), VAR_3);

 return 0;
}
