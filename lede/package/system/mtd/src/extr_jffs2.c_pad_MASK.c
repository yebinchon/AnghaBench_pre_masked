
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (scalar_t__,int,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(int VAR_9)
{
 if ((VAR_5 % VAR_9 == 0) && (VAR_5 < VAR_2))
  return;

 if (VAR_5 < VAR_2) {
  FUNC_2(VAR_1 + VAR_5, 0xff, (VAR_9 - (VAR_5 % VAR_9)));
  VAR_5 += (VAR_9 - (VAR_5 % VAR_9));
 }
 VAR_5 = VAR_5 % VAR_2;
 if (VAR_5 == 0) {
  while (FUNC_3(VAR_6, VAR_3) && (VAR_3 < VAR_4)) {
   if (!VAR_7)
    FUNC_0(VAR_8, "\nSkipping bad block at 0x%08lx   ", VAR_3);

   VAR_3 += VAR_2;


   FUNC_1(VAR_6, VAR_2, VAR_0);
  }
  FUNC_4(VAR_6, VAR_3);
  FUNC_5(VAR_6, VAR_1, VAR_2);
  VAR_3 += VAR_2;
 }
}
