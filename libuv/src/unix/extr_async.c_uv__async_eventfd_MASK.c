
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(void) {

  static int VAR_5;
  static int VAR_6;
  int VAR_7;

  if (VAR_5)
    goto skip_eventfd2;

  VAR_7 = FUNC_3(0, VAR_2 | VAR_3);
  if (VAR_7 != -1)
    return VAR_7;

  if (VAR_4 != VAR_0)
    return FUNC_0(VAR_4);

  VAR_5 = 1;

skip_eventfd2:

  if (VAR_6)
    goto skip_eventfd;

  VAR_7 = FUNC_2(0);
  if (VAR_7 != -1) {
    FUNC_1(VAR_7, 1);
    FUNC_4(VAR_7, 1);
    return VAR_7;
  }

  if (VAR_4 != VAR_0)
    return FUNC_0(VAR_4);

  VAR_6 = 1;

skip_eventfd:



  return VAR_1;
}
