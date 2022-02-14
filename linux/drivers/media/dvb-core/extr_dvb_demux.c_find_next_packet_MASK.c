
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline int FUNC_0(const u8 *VAR_0, int VAR_1, size_t VAR_2,
       const int VAR_3)
{
 int VAR_4 = VAR_1, VAR_5;

 while (VAR_1 < VAR_2) {
  if (VAR_0[VAR_1] == 0x47 ||
      (VAR_3 == 204 && VAR_0[VAR_1] == 0xB8))
   break;
  VAR_1++;
 }

 VAR_5 = VAR_1 - VAR_4;
 if (VAR_5) {

  int VAR_6 = VAR_1 - VAR_3;
  if (VAR_6 >= 0 && (VAR_0[VAR_6] == 0x47 ||
      (VAR_3 == 204 && VAR_0[VAR_6] == 0xB8)))
   return VAR_6;
 }

 return VAR_1;
}
