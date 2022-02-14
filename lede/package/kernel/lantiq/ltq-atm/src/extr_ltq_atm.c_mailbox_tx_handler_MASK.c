
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int conn_table; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2)
{
 int VAR_3;
 int VAR_4;


 VAR_2 &= VAR_1.conn_table;

 for ( VAR_3 = 0, VAR_4 = 1; VAR_3 < VAR_0; VAR_3++, VAR_4 <<= 1 ) {
  if (VAR_2 & VAR_4)
   FUNC_0(VAR_3);
 }
}
