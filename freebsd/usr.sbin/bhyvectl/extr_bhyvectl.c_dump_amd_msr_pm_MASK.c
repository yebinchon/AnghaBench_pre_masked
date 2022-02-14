
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8;

 for (VAR_8 = 0; VAR_8 < 0x2000; VAR_8++) {
  VAR_4 = VAR_8 / 4;
  VAR_5 = (VAR_8 % 4) * 2;


  VAR_6 = (VAR_2[VAR_4] & (1 << VAR_5)) ? 0 : 1;
  VAR_7 = (VAR_2[VAR_4] & (2 << VAR_5)) ? 0 : 1;
  FUNC_0(VAR_8, VAR_3, VAR_6, VAR_7);


  VAR_4 += 2048;
  VAR_6 = (VAR_2[VAR_4] & (1 << VAR_5)) ? 0 : 1;
  VAR_7 = (VAR_2[VAR_4] & (2 << VAR_5)) ? 0 : 1;
  FUNC_0(VAR_8 + VAR_0, VAR_3, VAR_6,
    VAR_7);


  VAR_4 += 4096;
  VAR_6 = (VAR_2[VAR_4] & (1 << VAR_5)) ? 0 : 1;
  VAR_7 = (VAR_2[VAR_4] & (2 << VAR_5)) ? 0 : 1;
  FUNC_0(VAR_8 + VAR_1, VAR_3, VAR_6,
    VAR_7);
 }
}
