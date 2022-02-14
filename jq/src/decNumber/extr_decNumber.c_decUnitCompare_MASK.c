
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int accbuff ;
typedef scalar_t__ Unit ;
typedef scalar_t__ Int ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__ const*,scalar_t__,scalar_t__ const*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__) ;
 int FUNC_3 (scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static Int FUNC_5(const Unit *VAR_4, Int VAR_5,
                          const Unit *VAR_6, Int VAR_7, Int VAR_8) {
  Unit *VAR_9;
  Unit VAR_10[FUNC_1(VAR_1*2+1)];
  Unit *VAR_11=((void*)0);
  Int VAR_12, VAR_13;
  const Unit *VAR_14, *VAR_15, *VAR_16;
  Int VAR_17, VAR_18, VAR_19;

  if (VAR_8==0) {
    if (VAR_5>VAR_7) return 1;
    if (VAR_5<VAR_7) return -1;

    VAR_14=VAR_4+VAR_5-1;
    VAR_15=VAR_6+VAR_5-1;
    for (;VAR_14>=VAR_4; VAR_14--, VAR_15--) {
      if (*VAR_14>*VAR_15) return 1;
      if (*VAR_14<*VAR_15) return -1;
      }
    return 0;
    }



  if (VAR_5>VAR_7+(Int)FUNC_0(VAR_8)) return 1;
  if (VAR_5+1<VAR_7+(Int)FUNC_0(VAR_8)) return -1;




  VAR_13=VAR_7+FUNC_0(VAR_8);
  if (VAR_13<VAR_5) VAR_13=VAR_5;
  VAR_13+=2;
  VAR_9=VAR_10;
  if (VAR_13*sizeof(Unit)>sizeof(VAR_10)) {
    VAR_11=(Unit *)FUNC_4(VAR_13*sizeof(Unit));
    if (VAR_11==((void*)0)) return VAR_0;
    VAR_9=VAR_11;
    }

  VAR_17=VAR_8/VAR_2;
  VAR_18=VAR_8%VAR_2;

  VAR_12=FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7, VAR_17, VAR_9,
                         -(Int)VAR_3[VAR_18]);

  if (VAR_12<0) VAR_19=-1;
   else {

    for (VAR_16=VAR_9; VAR_16<VAR_9+VAR_12-1 && *VAR_16==0;) VAR_16++;
    VAR_19=(*VAR_16==0 ? 0 : +1);
    }

  if (VAR_11!=((void*)0)) FUNC_3(VAR_11);
  return VAR_19;
  }
