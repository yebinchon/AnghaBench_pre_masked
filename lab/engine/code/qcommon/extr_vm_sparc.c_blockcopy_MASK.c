
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int dataMask; scalar_t__ dataBase; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__,scalar_t__,unsigned int) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_0->dataMask;

 if ((VAR_1 & VAR_4) != VAR_1 ||
     (VAR_2 & VAR_4) != VAR_2 ||
     ((VAR_1+VAR_3) & VAR_4) != VAR_1 + VAR_3 ||
     ((VAR_2+VAR_3) & VAR_4) != VAR_2 + VAR_3) {
  FUNC_0("OP_BLOCK_COPY out of range!");
 }

 FUNC_1(VAR_0->dataBase+VAR_1, VAR_0->dataBase+VAR_2, VAR_3);
}
