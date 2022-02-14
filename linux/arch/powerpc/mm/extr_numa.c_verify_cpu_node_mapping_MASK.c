
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;


 VAR_3 = FUNC_1(VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = VAR_3 + VAR_5;

  if (VAR_4 == VAR_1 || FUNC_2(VAR_4))
   continue;

  if (FUNC_3(VAR_4) != VAR_2) {
   FUNC_0(1, "CPU thread siblings %d and %d don't belong"
    " to the same node!\n", VAR_1, VAR_4);
   break;
  }
 }
}
