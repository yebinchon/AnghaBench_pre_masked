
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int ** VAR_4 ;
 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(char *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = VAR_5[0] + (VAR_5[1]<<8) + (VAR_5[2]<<16) + (VAR_5[3]<<24);
 FUNC_0(VAR_1, VAR_6);
 VAR_6 = VAR_5[4] + (VAR_5[5]<<8);
 FUNC_0(VAR_2, VAR_6);


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  for (VAR_7 = 0; VAR_7 < VAR_0 && !(VAR_5[VAR_7] & (0x00000001 << VAR_8)); VAR_7++)
   ;
  if (VAR_7 < VAR_0)
   VAR_4[VAR_8] = VAR_3[VAR_7];
  else
   VAR_4[VAR_8] = ((void*)0);
 }
}
