
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mdfour {int totalN; } ;
typedef int byte ;


 int FUNC_0 (int *,int *) ;
 struct mdfour* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct mdfour *VAR_1, byte *VAR_2, int VAR_3)
{
 uint32_t VAR_4[16];

 VAR_0 = VAR_1;

 if (VAR_3 == 0) FUNC_2(VAR_2, VAR_3);

 while (VAR_3 >= 64) {
  FUNC_0(VAR_4, VAR_2);
  FUNC_1(VAR_4);
  VAR_2 += 64;
  VAR_3 -= 64;
  VAR_0->totalN += 64;
 }

 FUNC_2(VAR_2, VAR_3);
}
