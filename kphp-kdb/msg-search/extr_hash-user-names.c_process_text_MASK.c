
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {long user_id; int hash; } ;
typedef TYPE_1__ userpair_t ;
typedef int hash_t ;
typedef int Tmp ;


 int* VAR_0 ;
 int FUNC_0 (unsigned char*,int,unsigned char*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2 (char *VAR_2, long VAR_3) {

  while (VAR_0[(unsigned char)*VAR_2] == 32) VAR_2++;

  while (*VAR_2) {
    char *VAR_4 = VAR_2;
    union {
      unsigned char data[16];
      hash_t hash;
    } VAR_5;
    static userpair_t VAR_6;

    for (;VAR_0[(unsigned char)*VAR_2] > 32;++VAR_2) *VAR_2 = VAR_0[(unsigned char)*VAR_2];

    FUNC_0 ((unsigned char *) VAR_4, VAR_2 - VAR_4, VAR_5.data);

    VAR_6.hash = VAR_5.hash;
    VAR_6.user_id = VAR_3;



    FUNC_1 (&VAR_6, sizeof(VAR_6));
    VAR_1++;

    for (;VAR_0[(unsigned char)*VAR_2] == 32; ++VAR_2);
  }
}
