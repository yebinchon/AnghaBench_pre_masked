
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int compcode; } ;
union zip_zres_s {TYPE_1__ s; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(union zip_zres_s *VAR_1)
{
 int VAR_2 = 1000;

 while (!VAR_1->s.compcode) {
  if (!--VAR_2) {
   FUNC_0("ZIP ERR: request timed out");
   return -VAR_0;
  }
  FUNC_2(10);




  FUNC_1();
 }
 return 0;
}
