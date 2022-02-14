
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Unit ;
typedef int Int ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int* VAR_1 ;

__attribute__((used)) static Int FUNC_3(Unit *VAR_2, Int VAR_3, Int VAR_4) {
  Unit *VAR_5, *VAR_6;
  Int VAR_7, VAR_8;
  Int VAR_9, VAR_10;

  if (VAR_4==0) return VAR_3;
  if (VAR_4==VAR_3*VAR_0) {
    *VAR_2=0;
    return 1;
    }

  VAR_5=VAR_2;
  VAR_7=FUNC_1(VAR_4);
  if (VAR_7==VAR_0) {
    VAR_6=VAR_2+FUNC_0(VAR_4);
    for (; VAR_6<VAR_2+VAR_3; VAR_5++, VAR_6++) *VAR_5=*VAR_6;
    return VAR_5-VAR_2;
    }


  VAR_6=VAR_2+FUNC_0(VAR_4-VAR_7);
  VAR_8=VAR_3*VAR_0-VAR_4;

    VAR_9=FUNC_2(*VAR_6, VAR_7);



  for (; ; VAR_5++) {
    *VAR_5=(Unit)VAR_9;
    VAR_8-=(VAR_0-VAR_7);
    if (VAR_8<=0) break;
    VAR_6++;
    VAR_9=*VAR_6;

      VAR_9=FUNC_2(VAR_9, VAR_7);
      VAR_10=*VAR_6-VAR_9*VAR_1[VAR_7];




    *VAR_5=(Unit)(*VAR_5+VAR_10*VAR_1[VAR_0-VAR_7]);
    VAR_8-=VAR_7;
    if (VAR_8<=0) break;
    }
  return VAR_5-VAR_2+1;
  }
