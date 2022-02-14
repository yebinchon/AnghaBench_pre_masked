
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* jt; } ;
struct TYPE_5__ {unsigned int lc; unsigned int lp; unsigned int pb; } ;
struct TYPE_6__ {int * Probs; TYPE_1__ Properties; } ;
typedef int CProb ;
typedef TYPE_2__ CLzmaDecoderState ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (TYPE_2__*,unsigned char*,unsigned int,unsigned int*,unsigned char*,unsigned int,unsigned int*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char* VAR_5 ;
 TYPE_3__* VAR_6 ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*) ;
 void FUNC_4 (int,int,int,int) ;

void FUNC_5(unsigned int VAR_7, unsigned int VAR_8,
 unsigned int VAR_9, unsigned int VAR_10)
{
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 int VAR_14 = VAR_7;
 char **VAR_15 = (char **)VAR_8;
 char **VAR_16 = (char **)VAR_9;

 CLzmaDecoderState VAR_17;

 VAR_5 = (unsigned char *)VAR_3;
 VAR_12 = VAR_2 - VAR_3 + 1;

 FUNC_3("\nLZMA kernel loader\n");

 FUNC_2("lzma data @ %#x - %#x\n", VAR_3, VAR_2);
 FUNC_2("load addr @ %#x\n\n", VAR_0);
 FUNC_2("jump table @ %#x\n", VAR_6->jt[3]);


 VAR_11 = FUNC_1();
 VAR_17.Properties.lc = VAR_11 % 9, VAR_11 = VAR_11 / 9;
 VAR_17.Properties.lp = VAR_11 % 5, VAR_17.Properties.pb = VAR_11 / 5;

 VAR_17.Probs = (CProb *)VAR_4;


 VAR_5 += 4;


 VAR_13 = ((unsigned int)FUNC_1()) +
  ((unsigned int)FUNC_1() << 8) +
  ((unsigned int)FUNC_1() << 16) +
  ((unsigned int)FUNC_1() << 24);


 VAR_5 += 4;


 FUNC_3("\nDecompressing kernel...");
 if ((VAR_11 = FUNC_0(&VAR_17,
 (unsigned char*)VAR_5, VAR_12, &VAR_12,
 (unsigned char*)VAR_0, VAR_13, &VAR_13)) == VAR_1)
 {
  FUNC_3("success!\n");



  ((void (*)(int VAR_18, int VAR_19, int VAR_20, int VAR_21))VAR_0)(VAR_7, VAR_8, VAR_9, VAR_10);
 }
 FUNC_3("failure!\n");
}
