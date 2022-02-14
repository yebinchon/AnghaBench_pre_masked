
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int offset; int size; } ;
typedef TYPE_1__ jv ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__ FUNC_2 () ;
 TYPE_1__ FUNC_3 (TYPE_1__,int ) ;
 int FUNC_4 (int ,int) ;
 TYPE_1__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_1__) ;
 int FUNC_7 (TYPE_1__) ;
 int FUNC_8 (TYPE_1__) ;
 int FUNC_9 (int,int*,int*) ;

__attribute__((used)) static jv FUNC_10(jv VAR_2, int VAR_3, int VAR_4) {
  FUNC_1(FUNC_0(VAR_2, VAR_1));
  int VAR_5 = FUNC_8(VAR_2);
  FUNC_9(VAR_5, &VAR_3, &VAR_4);
  FUNC_1(0 <= VAR_3 && VAR_3 <= VAR_4 && VAR_4 <= VAR_5);


  if (VAR_3 == VAR_4) {
    FUNC_7(VAR_2);
    return FUNC_2();
  }

  if (VAR_2.offset + VAR_3 >= 1 << (sizeof(VAR_2.offset) * VAR_0)) {
    jv VAR_6 = FUNC_5(VAR_4 - VAR_3);
    for (int VAR_7 = VAR_3; VAR_7 < VAR_4; VAR_7++)
      VAR_6 = FUNC_3(VAR_6, FUNC_4(FUNC_6(VAR_2), VAR_7));
    FUNC_7(VAR_2);
    return VAR_6;
  } else {
    VAR_2.offset += VAR_3;
    VAR_2.size = VAR_4 - VAR_3;
    return VAR_2;
  }
}
