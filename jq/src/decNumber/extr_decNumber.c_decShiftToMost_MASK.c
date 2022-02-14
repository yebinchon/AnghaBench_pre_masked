
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uInt ;
typedef int Unit ;
typedef size_t Int ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int,size_t) ;
 int* VAR_1 ;

__attribute__((used)) static Int FUNC_3(Unit *VAR_2, Int VAR_3, Int VAR_4) {
  Unit *VAR_5, *VAR_6, *VAR_7;
  Int VAR_8;
  uInt VAR_9;

  if (VAR_4==0) return VAR_3;
  if ((VAR_3+VAR_4)<=VAR_0) {
    *VAR_2=(Unit)(*VAR_2*VAR_1[VAR_4]);
    return VAR_3+VAR_4;
    }

  VAR_9=0;
  VAR_6=VAR_2+FUNC_0(VAR_3)-1;
  VAR_5=VAR_6+FUNC_0(VAR_4);
  VAR_8=VAR_0-FUNC_1(VAR_4);
  if (VAR_8==0) {
    for (; VAR_6>=VAR_2; VAR_6--, VAR_5--) *VAR_5=*VAR_6;
    }
   else {
    VAR_7=VAR_2+FUNC_0(VAR_3+VAR_4)-1;
    for (; VAR_6>=VAR_2; VAR_6--, VAR_5--) {


        uInt VAR_10=FUNC_2(*VAR_6, VAR_8);
        uInt VAR_11=*VAR_6-VAR_10*VAR_1[VAR_8];
        VAR_9+=VAR_10;




      if (VAR_5<=VAR_7) *VAR_5=(Unit)VAR_9;
      VAR_9=VAR_11*VAR_1[VAR_0-VAR_8];
      }
    }


  for (; VAR_5>=VAR_2; VAR_5--) {
    *VAR_5=(Unit)VAR_9;
    VAR_9=0;
    }
  return VAR_3+VAR_4;
  }
