
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mstate ;
typedef int mspace ;
typedef int mchunkptr ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ,void*) ;
 void* FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ) ;

void* FUNC_7(mspace VAR_0, void* VAR_1, size_t VAR_2) {
  if (VAR_1 == 0)
    return FUNC_5(VAR_0, VAR_2);






  else {




    mstate VAR_3 = (mstate)VAR_0;

    if (!FUNC_6(VAR_3)) {
      FUNC_0(VAR_3,VAR_3);
      return 0;
    }
    return FUNC_2(VAR_3, VAR_1, VAR_2);
  }
}
