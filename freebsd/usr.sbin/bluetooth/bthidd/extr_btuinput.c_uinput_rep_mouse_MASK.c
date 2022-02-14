
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int * VAR_9 ;
 size_t FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ,int) ;

int32_t
FUNC_4(int32_t VAR_10, int32_t VAR_11, int32_t VAR_12, int32_t VAR_13, int32_t VAR_14,
    int32_t VAR_15, int32_t VAR_16)
{
 size_t VAR_17;
 int32_t VAR_18, VAR_19;

 FUNC_0(VAR_10 >= 0);

 VAR_18 = FUNC_2();
 if (!(VAR_18 & VAR_0))
  return (0);

 if ((VAR_11 != 0 && FUNC_3(VAR_10, VAR_2, VAR_6, VAR_11) < 0) ||
     (VAR_12 != 0 && FUNC_3(VAR_10, VAR_2, VAR_7, VAR_12) < 0) ||
     (VAR_13 != 0 && FUNC_3(VAR_10, VAR_2, VAR_5, -VAR_13) < 0) ||
     (VAR_14 != 0 && FUNC_3(VAR_10, VAR_2, VAR_4, VAR_14) < 0))
  return (-1);

 for (VAR_17 = 0; VAR_17 < FUNC_1(VAR_9); VAR_17++) {
  VAR_19 = 1 << VAR_17;
  if ((VAR_15 & VAR_19) == (VAR_16 & VAR_19))
   continue;
  if (FUNC_3(VAR_10, VAR_1, VAR_9[VAR_17],
      (VAR_15 & VAR_19) != 0) < 0)
   return (-1);
 }

 if (FUNC_3(VAR_10, VAR_3, VAR_8, 0) < 0)
  return (-1);

 return (0);
}
