
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct facility_def {int* bits; char* name; } ;


 int VAR_0 ;
 unsigned long long* FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long*) ;
 int FUNC_3 (unsigned long long*,int ,unsigned int) ;
 int FUNC_4 (char*,...) ;
 unsigned long long* FUNC_5 (unsigned long long*,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct facility_def *VAR_1)
{
 unsigned int VAR_2, VAR_3, VAR_4, VAR_5;
 unsigned long long *VAR_6;

 VAR_6 = FUNC_0(1, 8);
 if (!VAR_6)
  FUNC_1(VAR_0);
 VAR_2 = 0;
 for (VAR_5 = 0; VAR_1->bits[VAR_5] != -1; VAR_5++) {
  VAR_3 = 63 - (VAR_1->bits[VAR_5] & 63);
  VAR_4 = VAR_1->bits[VAR_5] / 64;
  if (VAR_4 > VAR_2) {
   VAR_6 = FUNC_5(VAR_6, (VAR_4 + 1) * 8);
   if (!VAR_6)
    FUNC_1(VAR_0);
   FUNC_3(VAR_6 + VAR_2 + 1, 0, (VAR_4 - VAR_2) * 8);
   VAR_2 = VAR_4;
  }
  VAR_6[VAR_4] |= 1ULL << VAR_3;
 }
 FUNC_4("#define %s ", VAR_1->name);
 for (VAR_5 = 0; VAR_5 <= VAR_2; VAR_5++)
  FUNC_4("_AC(0x%016llx,UL)%c", VAR_6[VAR_5], VAR_5 < VAR_2 ? ',' : '\n');
 FUNC_2(VAR_6);
}
