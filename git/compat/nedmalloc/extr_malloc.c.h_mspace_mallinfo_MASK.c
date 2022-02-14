
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mallinfo {int dummy; } ;
typedef int mstate ;
typedef int mspace ;


 int FUNC_0 (int ,int ) ;
 struct mallinfo FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

struct mallinfo FUNC_3(mspace VAR_0) {
  mstate VAR_1 = (mstate)VAR_0;
  if (!FUNC_2(VAR_1)) {
    FUNC_0(VAR_1,VAR_1);
  }
  return FUNC_1(VAR_1);
}
