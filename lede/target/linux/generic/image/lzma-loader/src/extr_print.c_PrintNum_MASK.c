
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(char * VAR_0, unsigned long VAR_1, int VAR_2, int VAR_3,
  int VAR_4, int VAR_5, char VAR_6, int VAR_7)
{
    int VAR_8 =0;
    char *VAR_9 = VAR_0;
    int VAR_10;

    do {
 int VAR_11 = VAR_1 %VAR_2;
 if (VAR_11 <= 9) {
     *VAR_9++ = '0' + VAR_11;
 } else if (VAR_7) {
     *VAR_9++ = 'A' + VAR_11 - 10;
 } else {
     *VAR_9++ = 'a' + VAR_11 - 10;
 }
 VAR_1 /= VAR_2;
    } while (VAR_1 != 0);

    if (VAR_3) {
 *VAR_9++ = '-';
    }


    VAR_8 = VAR_9 - VAR_0;
    if (VAR_4 < VAR_8) VAR_4 = VAR_8;


    if (VAR_5) {
 VAR_6 = ' ';
    }
    if (VAR_3 && !VAR_5 && (VAR_6 == '0')) {
 for (VAR_10 = VAR_8-1; VAR_10< VAR_4-1; VAR_10++) VAR_0[VAR_10] = VAR_6;
 VAR_0[VAR_4 -1] = '-';
    } else {
 for (VAR_10 = VAR_8; VAR_10< VAR_4; VAR_10++) VAR_0[VAR_10] = VAR_6;
    }



    {
 int VAR_12 = 0;
 int VAR_13;
 if (VAR_5) {
     VAR_13 = VAR_8 - 1;
 } else {
     VAR_13 = VAR_4 -1;
 }

 while (VAR_13 > VAR_12) {
     char VAR_14 = VAR_0[VAR_12];
     VAR_0[VAR_12] = VAR_0[VAR_13];
     VAR_0[VAR_13] = VAR_14;
     VAR_12 ++;
     VAR_13 --;
 }
    }


    return VAR_4;
}
