
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int dataMask; scalar_t__ dataBase; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,scalar_t__,size_t) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_2(unsigned int VAR_2, unsigned int VAR_3, size_t VAR_4)
{
 unsigned int VAR_5 = VAR_1->dataMask;

 if ((VAR_2 & VAR_5) != VAR_2
 || (VAR_3 & VAR_5) != VAR_3
 || ((VAR_2 + VAR_4) & VAR_5) != VAR_2 + VAR_4
 || ((VAR_3 + VAR_4) & VAR_5) != VAR_3 + VAR_4)
 {
  FUNC_0(VAR_0, "OP_BLOCK_COPY out of range!");
 }

 FUNC_1(VAR_1->dataBase + VAR_2, VAR_1->dataBase + VAR_3, VAR_4);
}
