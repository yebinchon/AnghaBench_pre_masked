
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct intr_vector {size_t iv_vec; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,int,...) ;

__attribute__((used)) static void
FUNC_1(void *VAR_2)
{
 struct intr_vector *VAR_3;
 u_int VAR_4;

 VAR_3 = VAR_2;
 VAR_4 = VAR_3->iv_vec;
 if (VAR_1[VAR_4] < VAR_0) {
  FUNC_0("stray vector interrupt %d\n", VAR_4);
  VAR_1[VAR_4]++;
  if (VAR_1[VAR_4] >= VAR_0)
   FUNC_0("got %d stray vector interrupt %d's: not "
       "logging anymore\n", VAR_0, VAR_4);
 }
}
