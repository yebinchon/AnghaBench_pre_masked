
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 size_t VAR_3 ;
 int* VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_5, __u8 *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1(VAR_7);



 VAR_5 = (VAR_5 & ~3) | 1;



 VAR_4[VAR_3] = (VAR_4[VAR_3] | VAR_1) & ~VAR_2;

 if (VAR_5 & 0xFF00) {
  FUNC_3((VAR_5 & 0xFF00) >> 8);
  FUNC_3(VAR_5 & 0xFF);
  VAR_8 = VAR_5 & (VAR_0 << 8);
 } else {
  FUNC_3(VAR_5);
  VAR_8 = VAR_5 & VAR_0;
 }
 if (VAR_8) {
  *VAR_6 = FUNC_2();
 } else {
  FUNC_3(*VAR_6);
 }



 VAR_4[VAR_3] |= VAR_2;

 FUNC_0(VAR_7);
}
