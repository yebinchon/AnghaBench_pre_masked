
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uInt ;
typedef int uByte ;
struct TYPE_5__ {int digits; int exponent; int bits; scalar_t__* lsu; } ;
typedef TYPE_1__ decNumber ;
typedef scalar_t__ Unit ;
typedef int Int ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;

decNumber * FUNC_1(const uByte *VAR_6, Int VAR_7,
                              const Int *VAR_8, decNumber *VAR_9) {
  const uByte *VAR_10=VAR_6+VAR_7-1;
  const uByte *VAR_11;
  uInt VAR_12;
  Unit *VAR_13=VAR_9->lsu;
  Int VAR_14;
  Int VAR_15=0;

  FUNC_0(VAR_9);
  VAR_10=&VAR_6[VAR_7-1];
  VAR_12=*VAR_10 & 0x0f;
  if (VAR_12==VAR_3 || VAR_12==VAR_4) VAR_9->bits=VAR_1;
   else if (VAR_12<=9) return ((void*)0);


  for (VAR_11=VAR_6; *VAR_11==0;) VAR_11++;
  VAR_14=(VAR_10-VAR_11)*2+1;
  if ((*VAR_11 & 0xf0)==0) VAR_14--;
  if (VAR_14!=0) VAR_9->digits=VAR_14;



  VAR_9->exponent=-*VAR_8;
  if (*VAR_8>=0) {
    if ((VAR_9->digits-*VAR_8-1)<-VAR_2) {
      FUNC_0(VAR_9);
      return ((void*)0);}
    }
   else {

    if ((*VAR_8<-VAR_2)
         || ((VAR_9->digits-*VAR_8-1)>VAR_2)) {
      FUNC_0(VAR_9);
      return ((void*)0);}
    }
  if (VAR_14==0) return VAR_9;



  for (;;) {

    VAR_12=(unsigned)(*VAR_10 & 0xf0)>>4;

    if (VAR_12>9) {FUNC_0(VAR_9); return ((void*)0);}

    if (VAR_15==0) *VAR_13=(Unit)VAR_12;
     else *VAR_13=(Unit)(*VAR_13+VAR_12*VAR_5[VAR_15]);
    VAR_14--;
    if (VAR_14==0) break;
    VAR_15++;
    if (VAR_15==VAR_0) {
      VAR_13++;
      VAR_15=0;
      }
    VAR_10--;
    VAR_12=*VAR_10 & 0x0f;
    if (VAR_12>9) {FUNC_0(VAR_9); return ((void*)0);}


    if (VAR_15==0) *VAR_13=(Unit)VAR_12;
     else *VAR_13=(Unit)(*VAR_13+VAR_12*VAR_5[VAR_15]);
    VAR_14--;
    if (VAR_14==0) break;
    VAR_15++;
    if (VAR_15==VAR_0) {
      VAR_13++;
      VAR_15=0;
      }
    }

  return VAR_9;
  }
