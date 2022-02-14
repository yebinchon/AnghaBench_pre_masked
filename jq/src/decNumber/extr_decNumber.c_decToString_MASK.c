
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct TYPE_7__ {scalar_t__ exponent; scalar_t__* lsu; int digits; int bits; } ;
typedef TYPE_1__ decNumber ;
typedef scalar_t__ Unit ;
typedef scalar_t__ Int ;
typedef int Flag ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__ const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__ const*,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__ const*) ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static void FUNC_8(const decNumber *VAR_6, char *VAR_7, Flag VAR_8) {
  Int VAR_9=VAR_6->exponent;
  Int VAR_10;
  Int VAR_11;
  Int VAR_12;
  char *VAR_13=VAR_7;
  const Unit *VAR_14=VAR_6->lsu+FUNC_0(VAR_6->digits)-1;
  uInt VAR_15, VAR_16;







  if (FUNC_6(VAR_6)) {
    *VAR_13='-';
    VAR_13++;
    }
  if (VAR_6->bits&VAR_2) {
    if (FUNC_5(VAR_6)) {
      FUNC_7(VAR_13, "Inf");
      FUNC_7(VAR_13+3, "inity");
      return;}

    if (VAR_6->bits&VAR_1) {
      *VAR_13='s';
      VAR_13++;
      }
    FUNC_7(VAR_13, "NaN");
    VAR_13+=3;


    if (VAR_9!=0 || (*VAR_6->lsu==0 && VAR_6->digits==1)) return;

    }


  VAR_12=FUNC_2(VAR_6->digits);
  VAR_12--;

  if (VAR_9==0) {
    for (;VAR_14>=VAR_6->lsu; VAR_14--) {
      VAR_15=*VAR_14;
      for (; VAR_12>=0; VAR_13++, VAR_12--) FUNC_3(VAR_15, VAR_12, VAR_13, VAR_16);
      VAR_12=VAR_0-1;
      }
    *VAR_13='\0';
    return;}


  VAR_11=VAR_6->digits+VAR_9;
  VAR_10=0;
  if ((VAR_9>0) || (VAR_11<-5)) {
    VAR_10=VAR_9+VAR_6->digits-1;
    VAR_11=1;
    if (VAR_8 && (VAR_10!=0)) {
      Int VAR_17;


      if (VAR_10<0) {
        VAR_17=(-VAR_10)%3;
        if (VAR_17!=0) VAR_17=3-VAR_17;
        }
       else {
        VAR_17=VAR_10%3;
        }
      VAR_10=VAR_10-VAR_17;



      if (!FUNC_1(VAR_6)) VAR_11+=VAR_17;
       else {
        if (VAR_17!=0) {
          VAR_10=VAR_10+3;
          VAR_11=-(2-VAR_17);
          }
        }
      }
    }


  VAR_15=*VAR_14;
  if (VAR_11>0) {
    Int VAR_18=VAR_11;
    for (; VAR_11>0; VAR_11--, VAR_13++, VAR_12--) {
      if (VAR_12<0) {
        if (VAR_14==VAR_6->lsu) break;
        VAR_14--;
        VAR_12=VAR_0-1;
        VAR_15=*VAR_14;
        }
      FUNC_3(VAR_15, VAR_12, VAR_13, VAR_16);
      }
    if (VAR_18<VAR_6->digits) {
      *VAR_13='.'; VAR_13++;
      for (;; VAR_13++, VAR_12--) {
        if (VAR_12<0) {
          if (VAR_14==VAR_6->lsu) break;
          VAR_14--;
          VAR_12=VAR_0-1;
          VAR_15=*VAR_14;
          }
        FUNC_3(VAR_15, VAR_12, VAR_13, VAR_16);
        }
      }
     else for (; VAR_11>0; VAR_11--, VAR_13++) *VAR_13='0';
    }
   else {
    *VAR_13='0'; VAR_13++;
    *VAR_13='.'; VAR_13++;
    for (; VAR_11<0; VAR_11++, VAR_13++) *VAR_13='0';
    for (; ; VAR_13++, VAR_12--) {
      if (VAR_12<0) {
        if (VAR_14==VAR_6->lsu) break;
        VAR_14--;
        VAR_12=VAR_0-1;
        VAR_15=*VAR_14;
        }
      FUNC_3(VAR_15, VAR_12, VAR_13, VAR_16);
      }
    }




  if (VAR_10!=0) {
    Flag VAR_19=0;
    *VAR_13='E'; VAR_13++;
    *VAR_13='+'; VAR_13++;
    VAR_15=VAR_10;
    if (VAR_10<0) {
      *(VAR_13-1)='-';
      VAR_15=-VAR_10;
      }

    for (VAR_12=9; VAR_12>=0; VAR_12--) {
      FUNC_3(VAR_15, VAR_12, VAR_13, VAR_16);
      if (*VAR_13=='0' && !VAR_19) continue;
      VAR_19=1;
      VAR_13++;
      }
    }
  *VAR_13='\0';
  return;
  }
