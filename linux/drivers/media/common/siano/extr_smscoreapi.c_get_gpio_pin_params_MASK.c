
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static int FUNC_0(u32 VAR_0, u32 *VAR_1,
  u32 *VAR_2, u32 *VAR_3) {

 *VAR_3 = 1;

 if (VAR_0 <= 1) {
  *VAR_1 = 0;
  *VAR_2 = 9;
  *VAR_3 = 2;
 } else if (VAR_0 >= 2 && VAR_0 <= 6) {
  *VAR_1 = 2;
  *VAR_2 = 0;
  *VAR_3 = 2;
 } else if (VAR_0 >= 7 && VAR_0 <= 11) {
  *VAR_1 = 7;
  *VAR_2 = 1;
 } else if (VAR_0 >= 12 && VAR_0 <= 15) {
  *VAR_1 = 12;
  *VAR_2 = 2;
  *VAR_3 = 3;
 } else if (VAR_0 == 16) {
  *VAR_1 = 16;
  *VAR_2 = 23;
 } else if (VAR_0 >= 17 && VAR_0 <= 24) {
  *VAR_1 = 17;
  *VAR_2 = 3;
 } else if (VAR_0 == 25) {
  *VAR_1 = 25;
  *VAR_2 = 6;
 } else if (VAR_0 >= 26 && VAR_0 <= 28) {
  *VAR_1 = 26;
  *VAR_2 = 4;
 } else if (VAR_0 == 29) {
  *VAR_1 = 29;
  *VAR_2 = 5;
  *VAR_3 = 2;
 } else if (VAR_0 == 30) {
  *VAR_1 = 30;
  *VAR_2 = 8;
 } else if (VAR_0 == 31) {
  *VAR_1 = 31;
  *VAR_2 = 17;
 } else
  return -1;

 *VAR_3 <<= 24;

 return 0;
}
