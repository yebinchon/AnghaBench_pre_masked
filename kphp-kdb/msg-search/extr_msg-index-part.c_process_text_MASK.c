
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int hash_t ;
struct TYPE_2__ {int order; int message_id; int hash; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;
 int FUNC_1 (unsigned char*,int,unsigned char*) ;

void FUNC_2 (char *VAR_4, int VAR_5, int VAR_6) {


  if (VAR_4[0] == 'R' && VAR_4[1] == 'e' && VAR_4[2] < 'A') { VAR_4 += 2; }

  while (VAR_3[(unsigned char)*VAR_4] == 32) VAR_4++;

  while (*VAR_4) {
    char *VAR_7 = VAR_4;
    union {
      unsigned char data[16];
      hash_t hash;
    } VAR_8;

    for (;VAR_3[(unsigned char)*VAR_4] > 32;++VAR_4) *VAR_4 = VAR_3[(unsigned char)*VAR_4];

    FUNC_1 ((unsigned char *) VAR_7, VAR_4 - VAR_7, VAR_8.data);

    VAR_1[VAR_2].hash = VAR_8.hash;
    VAR_1[VAR_2].order = VAR_6;
    VAR_1[VAR_2].message_id = VAR_5;



    ++VAR_2;

    FUNC_0 (VAR_2 <= VAR_0);

    for (;VAR_3[(unsigned char)*VAR_4] == 32; ++VAR_4);
  }
}
