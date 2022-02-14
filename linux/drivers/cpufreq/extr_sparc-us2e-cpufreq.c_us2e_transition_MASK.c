
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,unsigned long,unsigned long,unsigned long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_3, unsigned long VAR_4,
       unsigned long VAR_5,
       unsigned long VAR_6, unsigned long VAR_7)
{
 VAR_3 &= ~VAR_1;


 if (VAR_6 == 2 && VAR_7 == 1) {
  FUNC_2(0);
  FUNC_3(VAR_2, VAR_3 | VAR_4);
  FUNC_1(0, VAR_5, VAR_6, VAR_7);
 } else if (VAR_6 == 1 && VAR_7 == 2) {
  FUNC_1(1, VAR_5, VAR_6, VAR_7);
  FUNC_3(VAR_2, VAR_3 | VAR_4);
  FUNC_2(1);
 } else if (VAR_6 == 1 && VAR_7 > 2) {
  FUNC_4(VAR_3, VAR_0, VAR_5,
    1, 2);
  FUNC_4(VAR_3, VAR_4, VAR_5,
    2, VAR_7);
 } else if (VAR_6 > 2 && VAR_7 == 1) {
  FUNC_4(VAR_3, VAR_0, VAR_5,
    VAR_6, 2);
  FUNC_4(VAR_3, VAR_4, VAR_5,
    2, VAR_7);
 } else if (VAR_6 < VAR_7) {
  FUNC_1(0, VAR_5, VAR_6, VAR_7);
  FUNC_3(VAR_2, VAR_3 | VAR_4);
 } else if (VAR_6 > VAR_7) {
  FUNC_3(VAR_2, VAR_3 | VAR_4);
  FUNC_1(1, VAR_5, VAR_6, VAR_7);
 } else {
  FUNC_0();
 }
}
