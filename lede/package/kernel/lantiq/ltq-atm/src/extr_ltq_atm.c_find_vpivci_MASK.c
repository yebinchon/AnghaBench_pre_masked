
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int conn_table; TYPE_1__* conn; } ;
struct TYPE_5__ {unsigned int vpi; unsigned int vci; } ;
struct TYPE_4__ {TYPE_2__* vcc; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(unsigned int VAR_2, unsigned int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;

 for ( VAR_4 = 0, VAR_5 = 1; VAR_4 < VAR_0; VAR_4++, VAR_5 <<= 1 ) {
  if ( (VAR_1.conn_table & VAR_5) != 0
    && VAR_1.conn[VAR_4].vcc != ((void*)0)
    && VAR_2 == VAR_1.conn[VAR_4].vcc->vpi
    && VAR_3 == VAR_1.conn[VAR_4].vcc->vci )
   return VAR_4;
 }

 return -1;
}
