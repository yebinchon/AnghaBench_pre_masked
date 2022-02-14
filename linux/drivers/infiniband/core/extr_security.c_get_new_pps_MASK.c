
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ib_qp_attr {int alt_pkey_index; int alt_port_num; int pkey_index; int port_num; } ;
struct ib_qp {TYPE_3__* qp_sec; } ;
struct TYPE_5__ {scalar_t__ state; TYPE_3__* sec; int pkey_index; int port_num; } ;
struct TYPE_4__ {scalar_t__ state; TYPE_3__* sec; int pkey_index; int port_num; } ;
struct ib_ports_pkeys {TYPE_2__ alt; TYPE_1__ main; } ;
struct TYPE_6__ {struct ib_ports_pkeys* ports_pkeys; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ib_ports_pkeys* FUNC_0 (int,int ) ;

__attribute__((used)) static struct ib_ports_pkeys *FUNC_1(const struct ib_qp *VAR_6,
       const struct ib_qp_attr *VAR_7,
       int VAR_8)
{
 struct ib_ports_pkeys *VAR_9;
 struct ib_ports_pkeys *VAR_10 = VAR_6->qp_sec->ports_pkeys;

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_0);
 if (!VAR_9)
  return ((void*)0);

 if (VAR_8 & (VAR_4 | VAR_5)) {
  if (!VAR_10) {
   VAR_9->main.port_num = VAR_7->port_num;
   VAR_9->main.pkey_index = VAR_7->pkey_index;
  } else {
   VAR_9->main.port_num = (VAR_8 & VAR_5) ?
        VAR_7->port_num :
        VAR_10->main.port_num;

   VAR_9->main.pkey_index =
     (VAR_8 & VAR_4) ?
      VAR_7->pkey_index :
      VAR_10->main.pkey_index;
  }
  VAR_9->main.state = VAR_2;
 } else if (VAR_10) {
  VAR_9->main.port_num = VAR_10->main.port_num;
  VAR_9->main.pkey_index = VAR_10->main.pkey_index;
  if (VAR_10->main.state != VAR_1)
   VAR_9->main.state = VAR_2;
 }

 if (VAR_8 & VAR_3) {
  VAR_9->alt.port_num = VAR_7->alt_port_num;
  VAR_9->alt.pkey_index = VAR_7->alt_pkey_index;
  VAR_9->alt.state = VAR_2;
 } else if (VAR_10) {
  VAR_9->alt.port_num = VAR_10->alt.port_num;
  VAR_9->alt.pkey_index = VAR_10->alt.pkey_index;
  if (VAR_10->alt.state != VAR_1)
   VAR_9->alt.state = VAR_2;
 }

 VAR_9->main.sec = VAR_6->qp_sec;
 VAR_9->alt.sec = VAR_6->qp_sec;
 return VAR_9;
}
