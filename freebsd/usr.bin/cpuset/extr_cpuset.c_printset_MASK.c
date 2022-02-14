
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bitset {int dummy; } ;


 scalar_t__ FUNC_0 (int,int,struct bitset*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct bitset *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;

 for (VAR_2 = 0, VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (FUNC_0(VAR_1, VAR_3, VAR_0)) {
   if (VAR_2 == 0) {
    FUNC_1("%d", VAR_3);
    VAR_2 = 1;
   } else
    FUNC_1(", %d", VAR_3);
  }
 }
 FUNC_1("\n");
}
