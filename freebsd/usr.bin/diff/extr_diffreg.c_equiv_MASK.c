
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int value; int serial; } ;



__attribute__((used)) static void
FUNC_0(struct line *VAR_0, int VAR_1, struct line *VAR_2, int VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = VAR_6 = 1;
 while (VAR_5 <= VAR_1 && VAR_6 <= VAR_3) {
  if (VAR_0[VAR_5].value < VAR_2[VAR_6].value)
   VAR_0[VAR_5++].value = 0;
  else if (VAR_0[VAR_5].value == VAR_2[VAR_6].value)
   VAR_0[VAR_5++].value = VAR_6;
  else
   VAR_6++;
 }
 while (VAR_5 <= VAR_1)
  VAR_0[VAR_5++].value = 0;
 VAR_2[VAR_3 + 1].value = 0;
 VAR_6 = 0;
 while (++VAR_6 <= VAR_3) {
  VAR_4[VAR_6] = -VAR_2[VAR_6].serial;
  while (VAR_2[VAR_6 + 1].value == VAR_2[VAR_6].value) {
   VAR_6++;
   VAR_4[VAR_6] = VAR_2[VAR_6].serial;
  }
 }
 VAR_4[VAR_6] = -1;
}
