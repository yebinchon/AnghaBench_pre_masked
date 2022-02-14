
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;



__attribute__((used)) static inline int FUNC_0(char *VAR_0, wchar_t VAR_1)
{
 if (VAR_1 <= 0x7F) {
  *VAR_0 = VAR_1;
  return 1;
 }
 else if (VAR_1 <= 0x7FF) {
  *VAR_0++ = ((VAR_1 >> 6) & 0x1F) | 0xC0;
  *VAR_0++ = ( VAR_1 & 0x3F) | 0x80;
  return 2;
 }
 else if (VAR_1 <= 0xFFFF) {
  *VAR_0++ = ((VAR_1 >> 12) & 0x0F) | 0xE0;
  *VAR_0++ = ((VAR_1 >> 6) & 0x3F) | 0x80;
  *VAR_0++ = ( VAR_1 & 0x3F) | 0x80;
  return 3;
 }
 else if (VAR_1 <= 0x10FFFF) {
  *VAR_0++ = ((VAR_1 >> 18) & 0x07) | 0xF0;
  *VAR_0++ = ((VAR_1 >> 12) & 0x3F) | 0x80;
  *VAR_0++ = ((VAR_1 >> 6) & 0x3F) | 0x80;
  *VAR_0++ = ( VAR_1 & 0x3F) | 0x80;
  return 4;
 }
 else {
  *VAR_0++ = '?';
  return 1;
 }
}
