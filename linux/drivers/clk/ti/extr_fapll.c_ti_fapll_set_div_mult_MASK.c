
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_2,
     unsigned long VAR_3,
     u32 *VAR_4, u32 *VAR_5)
{






 if (VAR_2 < VAR_3) {
  FUNC_0("FAPLL main divider rates unsupported\n");
  return -VAR_0;
 }

 *VAR_5 = VAR_2 / VAR_3;
 if (*VAR_5 > VAR_1)
  return -VAR_0;
 *VAR_4 = 1;

 return 0;
}
