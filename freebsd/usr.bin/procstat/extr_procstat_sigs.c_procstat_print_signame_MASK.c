
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_2 ;
 int * VAR_3 ;
 char FUNC_2 (char) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(int VAR_4)
{
 char VAR_5[12];
 int VAR_6;

 if ((VAR_1 & VAR_0) == 0 && VAR_4 < VAR_2) {
  FUNC_1(VAR_5, VAR_3[VAR_4], sizeof(VAR_5));
  for (VAR_6 = 0; VAR_5[VAR_6] != 0; VAR_6++)
   VAR_5[VAR_6] = FUNC_2(VAR_5[VAR_6]);
  FUNC_3("{d:signal/%-7s/%s} ", VAR_5);
  FUNC_4(VAR_5);
 } else {
  FUNC_3("{d:signal/%-7d/%d} ", VAR_4);
  FUNC_0(VAR_5, 12, "%d", VAR_4);
  FUNC_4(VAR_5);
 }
}
