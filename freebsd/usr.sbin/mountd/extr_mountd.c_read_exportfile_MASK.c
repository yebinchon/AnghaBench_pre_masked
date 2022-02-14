
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int ** VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static void
FUNC_6(int VAR_5)
{
 int VAR_6, VAR_7;





 VAR_6 = 0;
 for (VAR_7 = 0; VAR_3[VAR_7] != ((void*)0); VAR_7++) {
  if (VAR_2)
   FUNC_5("reading exports from %s", VAR_3[VAR_7]);
  if ((VAR_4 = FUNC_2(VAR_3[VAR_7], "r")) == ((void*)0)) {
   FUNC_4(VAR_1, "can't open %s", VAR_3[VAR_7]);
   continue;
  }
  FUNC_3(VAR_5);
  FUNC_1(VAR_4);
  VAR_6++;
 }
 if (VAR_6 == 0) {
  FUNC_4(VAR_0, "can't open any exports file");
  FUNC_0(2);
 }
}
