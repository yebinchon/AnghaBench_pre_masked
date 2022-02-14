
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Object_Compare ;
typedef int Object ;


 int FUNC_0 (int **,int,int,int,int ) ;

__attribute__((used)) static void FUNC_1(Object** VAR_0, int VAR_1, int VAR_2, Object_Compare VAR_3) {
   if (VAR_1 >= VAR_2)
      return;
   int VAR_4 = (VAR_1+VAR_2) / 2;
   int VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_4, VAR_3);
   FUNC_1(VAR_0, VAR_1, VAR_5 - 1, VAR_3);
   FUNC_1(VAR_0, VAR_5 + 1, VAR_2, VAR_3);
}
