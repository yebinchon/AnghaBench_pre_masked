
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int conn_table; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_8)
{
 unsigned int VAR_9 = *VAR_1;
 *VAR_2 = *VAR_1;

 if (VAR_9 & (1 << VAR_4))
  FUNC_1();
 if (VAR_9 & (1 << VAR_5))
  FUNC_2();


 if ((VAR_9 >> (VAR_0 + 16)) & VAR_6.conn_table)
  FUNC_3(VAR_9 >> (VAR_0 + 16));

 if ((*VAR_1 & ((1 << VAR_4) | (1 << VAR_5))) != 0)
  FUNC_4(&VAR_7);
 else if (*VAR_1 >> (VAR_0 + 16))
  FUNC_4(&VAR_7);
 else
  FUNC_0(VAR_3);
}
