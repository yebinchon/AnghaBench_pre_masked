
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mstate ;
typedef int mspace ;


 int FUNC_0 (int ,int ) ;
 void** FUNC_1 (int ,size_t,size_t*,int ,void**) ;
 int FUNC_2 (int ) ;

void** FUNC_3(mspace VAR_0, size_t VAR_1,
       size_t VAR_2[], void* VAR_3[]) {
  mstate VAR_4 = (mstate)VAR_0;
  if (!FUNC_2(VAR_4)) {
    FUNC_0(VAR_4,VAR_4);
    return 0;
  }
  return FUNC_1(VAR_4, VAR_1, VAR_2, 0, VAR_3);
}
