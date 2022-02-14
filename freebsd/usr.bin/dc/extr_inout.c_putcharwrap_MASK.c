
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int *) ;
 int VAR_2 ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void
FUNC_2(FILE *VAR_3, int VAR_4)
{

 if (VAR_1 >= VAR_0) {
  VAR_1 = 0;
  FUNC_0("\\\n", VAR_3);
 }
 if (VAR_2 != -1) {
  VAR_1++;
  FUNC_1(VAR_2, VAR_3);
 }
 VAR_2 = VAR_4;
}
