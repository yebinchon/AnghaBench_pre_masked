
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7;

 for (VAR_7 = 0; VAR_7 < 0x2000; VAR_7++) {
  VAR_3 = VAR_7 / 8;
  VAR_4 = VAR_7 & 0x7;


  VAR_5 = (VAR_1[VAR_3] & (1 << VAR_4)) ? 0 : 1;
  VAR_6 = (VAR_1[2048 + VAR_3] & (1 << VAR_4)) ? 0 : 1;
  FUNC_0(VAR_7, VAR_2, VAR_5, VAR_6);


  VAR_3 += 1024;
  VAR_5 = (VAR_1[VAR_3] & (1 << VAR_4)) ? 0 : 1;
  VAR_6 = (VAR_1[2048 + VAR_3] & (1 << VAR_4)) ? 0 : 1;
  FUNC_0(VAR_7 + VAR_0, VAR_2, VAR_5,
    VAR_6);
 }
}
