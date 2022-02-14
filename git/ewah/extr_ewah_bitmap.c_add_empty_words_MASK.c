
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int rlw; } ;
typedef size_t eword_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct ewah_bitmap*,int ) ;
 size_t FUNC_1 (size_t,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,size_t) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static size_t FUNC_8(struct ewah_bitmap *VAR_1, int VAR_2, size_t VAR_3)
{
 size_t VAR_4 = 0;
 eword_t VAR_5, VAR_6;

 if (FUNC_3(VAR_1->rlw) != VAR_2 && FUNC_7(VAR_1->rlw) == 0) {
  FUNC_5(VAR_1->rlw, VAR_2);
 } else if (FUNC_2(VAR_1->rlw) != 0 ||
   FUNC_3(VAR_1->rlw) != VAR_2) {
  FUNC_0(VAR_1, 0);
  if (VAR_2) FUNC_5(VAR_1->rlw, VAR_2);
  VAR_4++;
 }

 VAR_5 = FUNC_4(VAR_1->rlw);
 VAR_6 = FUNC_1(VAR_3, VAR_0 - VAR_5);

 FUNC_6(VAR_1->rlw, VAR_5 + VAR_6);
 VAR_3 -= VAR_6;

 while (VAR_3 >= VAR_0) {
  FUNC_0(VAR_1, 0);
  VAR_4++;
  if (VAR_2) FUNC_5(VAR_1->rlw, VAR_2);
  FUNC_6(VAR_1->rlw, VAR_0);
  VAR_3 -= VAR_0;
 }

 if (VAR_3 > 0) {
  FUNC_0(VAR_1, 0);
  VAR_4++;

  if (VAR_2) FUNC_5(VAR_1->rlw, VAR_2);
  FUNC_6(VAR_1->rlw, VAR_3);
 }

 return VAR_4;
}
