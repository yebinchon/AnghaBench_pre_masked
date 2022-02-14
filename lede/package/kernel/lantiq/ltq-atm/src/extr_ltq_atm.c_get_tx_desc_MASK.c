
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {size_t tx_desc_pos; TYPE_1__* tx_desc; } ;
struct TYPE_4__ {struct connection* conn; } ;
struct TYPE_3__ {scalar_t__ own; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_2)
{
 int VAR_3 = -1;
 struct connection *VAR_4 = &VAR_1.conn[VAR_2];

 if ( VAR_4->tx_desc[VAR_4->tx_desc_pos].own == 0 ) {
  VAR_3 = VAR_4->tx_desc_pos;
  if ( ++(VAR_4->tx_desc_pos) == VAR_0 )
   VAR_4->tx_desc_pos = 0;
 }

 return VAR_3;
}
