
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct port_cell_info {int port_num; scalar_t__* tx_link_rate; } ;
struct TYPE_8__ {TYPE_2__* port; TYPE_1__* conn; } ;
struct TYPE_7__ {int qos; } ;
struct TYPE_6__ {scalar_t__ tx_max_cell_rate; int dev; } ;
struct TYPE_5__ {TYPE_3__* vcc; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*,int *,int) ;

__attribute__((used)) static int FUNC_6(struct port_cell_info *VAR_7, void *VAR_8)
{
 int VAR_9, VAR_10, VAR_11;

 FUNC_0(VAR_7 != ((void*)0), "port_cell is NULL");
 FUNC_0(VAR_8 != ((void*)0), "xdata_addr is NULL");

 for ( VAR_10 = 0; VAR_10 < VAR_1 && VAR_10 < VAR_7->port_num; VAR_10++ )
  if ( VAR_7->tx_link_rate[VAR_10] > 0 )
   break;
 for ( VAR_9 = 0; VAR_9 < VAR_1 && VAR_9 < VAR_7->port_num; VAR_9++ )
  VAR_4.port[VAR_9].tx_max_cell_rate =
   VAR_7->tx_link_rate[VAR_9] > 0 ? VAR_7->tx_link_rate[VAR_9] : VAR_7->tx_link_rate[VAR_10];

 FUNC_4();

 for ( VAR_9 = 0; VAR_9 < VAR_2; VAR_9++ )
  if ( VAR_4.conn[VAR_9].vcc != ((void*)0) )
   FUNC_5(VAR_4.conn[VAR_9].vcc, &VAR_4.conn[VAR_9].vcc->qos, VAR_9);


 VAR_6 = VAR_8;

 VAR_5 = 1;

 for ( VAR_11 = 0; VAR_11 < VAR_1; VAR_11++ )
  FUNC_2(VAR_4.port[VAR_11].dev, VAR_0);





 FUNC_3("enter showtime, cell rate: 0 - %d, 1 - %d, xdata addr: 0x%08x\n",
  VAR_4.port[0].tx_max_cell_rate,
  VAR_4.port[1].tx_max_cell_rate,
  (unsigned int)VAR_6);

 return 0;
}
