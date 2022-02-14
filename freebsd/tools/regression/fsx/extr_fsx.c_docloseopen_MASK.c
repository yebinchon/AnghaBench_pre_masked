
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_5(void)
{
 if (VAR_5 <= VAR_4)
  return;

 if (VAR_1)
  FUNC_2("%lu close/open\n", VAR_5);
 if (FUNC_0(VAR_2)) {
  FUNC_3("docloseopen: close");
  FUNC_4(180);
 }
 VAR_2 = FUNC_1(VAR_3, VAR_0, 0);
 if (VAR_2 < 0) {
  FUNC_3("docloseopen: open");
  FUNC_4(181);
 }
}
