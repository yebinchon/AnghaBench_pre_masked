
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atkbd {int xl_bit; } ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 unsigned char* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct atkbd *VAR_1, unsigned char VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (!((VAR_2 ^ VAR_0[VAR_3]) & 0x7f)) {
   if (VAR_2 & 0x80)
    FUNC_1(VAR_3, &VAR_1->xl_bit);
   else
    FUNC_2(VAR_3, &VAR_1->xl_bit);
   break;
  }
 }
}
