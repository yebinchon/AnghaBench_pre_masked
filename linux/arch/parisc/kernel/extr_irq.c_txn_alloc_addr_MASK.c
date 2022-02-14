
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int txn_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_1__ FUNC_1 (int ,int) ;
 unsigned long FUNC_2 (unsigned int,int) ;

unsigned long FUNC_3(unsigned int VAR_2)
{
 static int VAR_3 = -1;

 VAR_3++;


 while ((VAR_3 < VAR_1) &&
  (!FUNC_1(VAR_0, VAR_3).txn_addr ||
   !FUNC_0(VAR_3)))
  VAR_3++;

 if (VAR_3 >= VAR_1)
  VAR_3 = 0;

 return FUNC_2(VAR_2, VAR_3);
}
