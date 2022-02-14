
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WORD ;
typedef int BYTE ;


 unsigned int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int) ;

int FUNC_2(BYTE* VAR_0, WORD VAR_1) {
  unsigned int VAR_2;


  if (VAR_0 == ((void*)0))
    return 0;


  if (VAR_1 < FUNC_1(0))
    return 0;


  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 > 256)
    return 0;


  if (VAR_1 < FUNC_1(VAR_2))
    return 0;

  return 1;
}
