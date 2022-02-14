
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mstate ;
typedef int mspace ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 void* FUNC_2 (int ,size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int ,size_t) ;
 int FUNC_5 (int ) ;

void* FUNC_6(mspace VAR_1, size_t VAR_2, size_t VAR_3) {
  void* VAR_4;
  size_t VAR_5 = 0;
  mstate VAR_6 = (mstate)VAR_1;
  if (!FUNC_5(VAR_6)) {
    FUNC_0(VAR_6,VAR_6);
    return 0;
  }
  if (VAR_2 != 0) {
    VAR_5 = VAR_2 * VAR_3;
    if (((VAR_2 | VAR_3) & ~(size_t)0xffff) &&
 (VAR_5 / VAR_2 != VAR_3))
      VAR_5 = VAR_0;
  }
  VAR_4 = FUNC_2(VAR_6, VAR_5);
  if (VAR_4 != 0 && FUNC_1(FUNC_3(VAR_4)))
    FUNC_4(VAR_4, 0, VAR_5);
  return VAR_4;
}
