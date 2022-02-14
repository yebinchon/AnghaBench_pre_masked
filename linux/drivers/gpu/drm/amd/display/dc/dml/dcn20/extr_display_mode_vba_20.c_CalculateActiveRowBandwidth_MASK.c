
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum source_format_class { ____Placeholder_source_format_class } source_format_class ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(
  bool VAR_2,
  enum source_format_class VAR_3,
  double VAR_4,
  bool VAR_5,
  double VAR_6,
  unsigned int VAR_7,
  unsigned int VAR_8,
  unsigned int VAR_9,
  unsigned int VAR_10,
  unsigned int VAR_11,
  unsigned int VAR_12,
  unsigned int VAR_13,
  unsigned int VAR_14,
  double *VAR_15,
  double *VAR_16,
  double *VAR_17)
{
 if (VAR_5 != 1) {
  *VAR_15 = 0;
 } else if (VAR_3 == VAR_1 || VAR_3 == VAR_0) {
  *VAR_15 = VAR_4 * VAR_7 / (VAR_9 * VAR_6)
    + VAR_4 / 2 * VAR_8
      / (VAR_10 * VAR_6);
 } else {
  *VAR_15 = VAR_4 * VAR_7 / (VAR_9 * VAR_6);
 }

 if (VAR_2 != 1) {
  *VAR_16 = 0;
 } else if (VAR_3 == VAR_1 || VAR_3 == VAR_0) {
  *VAR_16 = VAR_4 * VAR_11 / (VAR_13 * VAR_6)
    + VAR_4 / 2 * VAR_12
      / (VAR_14 * VAR_6);
 } else {
  *VAR_16 = VAR_4 * VAR_11 / (VAR_13 * VAR_6);
 }

 if ((VAR_3 == VAR_1 || VAR_3 == VAR_0)) {
  *VAR_17 = *VAR_15 + *VAR_16;
 } else {
  *VAR_17 = 0;
 }
}
