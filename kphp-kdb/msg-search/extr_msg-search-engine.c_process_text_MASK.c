
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (unsigned char*,int,unsigned char*) ;

int FUNC_1 (char *VAR_5) {


  VAR_3 = 0;

  while (VAR_4[(unsigned char)*VAR_5] == 32) VAR_5++;

  while (*VAR_5) {
    char *VAR_6 = VAR_5;
    int VAR_7;
    union {
      unsigned char data[16];
      hash_t hash;
    } VAR_8;

    for (;VAR_4[(unsigned char)*VAR_5] > 32;++VAR_5) *VAR_5 = VAR_4[(unsigned char)*VAR_5];

    FUNC_0 ((unsigned char *) VAR_6, VAR_5 - VAR_6, VAR_8.data);

    for (;VAR_4[(unsigned char)*VAR_5] == 32; ++VAR_5);

    if (VAR_1 <= VAR_0) {
      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
 if (VAR_2[VAR_7] == VAR_8.hash) {
   break;
 }
      }
      if (VAR_7 < VAR_3) continue;
    }

    if (VAR_3 == VAR_1) {
      return -1;
    }
    VAR_2[VAR_3++] = VAR_8.hash;



  }

  return VAR_3;
}
