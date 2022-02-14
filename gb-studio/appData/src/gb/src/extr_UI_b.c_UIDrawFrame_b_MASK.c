
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 (int,int,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_1(UBYTE VAR_9, UBYTE VAR_10, UBYTE VAR_11, UBYTE VAR_12)
{
  UBYTE VAR_13, VAR_14;
  FUNC_0(VAR_9, VAR_10, 1, 1, VAR_7);
  FUNC_0(VAR_9, VAR_12 + 1, 1, 1, VAR_2);
  FUNC_0(VAR_9 + VAR_11, 0, 1, 1, VAR_8);
  FUNC_0(VAR_9 + VAR_11, VAR_12 + 1, 1, 1, VAR_3);

  for (VAR_14 = 1; VAR_14 != VAR_12 + 1; VAR_14++)
  {
    FUNC_0(VAR_9, VAR_14, 1, 1, VAR_4);
    FUNC_0(VAR_9 + VAR_11, VAR_14, 1, 1, VAR_5);
    for (VAR_13 = 1; VAR_13 != VAR_11; ++VAR_13)
    {
      FUNC_0(VAR_13, VAR_14, 1, 1, VAR_1);
    }
  }

  for (VAR_13 = 1; VAR_13 != VAR_11; ++VAR_13)
  {
    FUNC_0(VAR_13, 0, 1, 1, VAR_6);
    FUNC_0(VAR_13, VAR_12 + 1, 1, 1, VAR_0);
  }
}
