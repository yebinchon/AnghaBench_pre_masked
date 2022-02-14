
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* count; int* state; } ;
typedef int POINTER ;
typedef TYPE_1__ MD4_CTX ;


 int FUNC_0 (unsigned char*,int*,int) ;
 int FUNC_1 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 unsigned char* VAR_0 ;

void FUNC_3(unsigned char VAR_1[16], MD4_CTX *VAR_2)


{
  unsigned char VAR_3[8];
  unsigned int VAR_4, VAR_5;


  FUNC_0(VAR_3, VAR_2->count, 8);



  VAR_4 = (unsigned int)((VAR_2->count[0] >> 3) & 0x3f);
  VAR_5 = (VAR_4 < 56) ? (56 - VAR_4) : (120 - VAR_4);
  FUNC_1(VAR_2, VAR_0, VAR_5);


  FUNC_1(VAR_2, VAR_3, 8);


  FUNC_0(VAR_1, VAR_2->state, 16);



  FUNC_2((POINTER)VAR_2, 0, sizeof(*VAR_2));
}
