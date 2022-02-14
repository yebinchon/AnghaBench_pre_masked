
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int rlw; } ;
typedef scalar_t__ eword_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ewah_bitmap*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static size_t FUNC_7(struct ewah_bitmap *VAR_1, int VAR_2)
{
 int VAR_3 = (FUNC_2(VAR_1->rlw) == 0);
 eword_t VAR_4 = FUNC_4(VAR_1->rlw);

 if (VAR_3 && VAR_4 == 0) {
  FUNC_5(VAR_1->rlw, VAR_2);
  FUNC_0(FUNC_3(VAR_1->rlw) == VAR_2);
 }

 if (VAR_3 && FUNC_3(VAR_1->rlw) == VAR_2 &&
  VAR_4 < VAR_0) {
  FUNC_6(VAR_1->rlw, VAR_4 + 1);
  FUNC_0(FUNC_4(VAR_1->rlw) == VAR_4 + 1);
  return 0;
 } else {
  FUNC_1(VAR_1, 0);

  FUNC_0(FUNC_4(VAR_1->rlw) == 0);
  FUNC_0(FUNC_3(VAR_1->rlw) == 0);
  FUNC_0(FUNC_2(VAR_1->rlw) == 0);

  FUNC_5(VAR_1->rlw, VAR_2);
  FUNC_0(FUNC_3(VAR_1->rlw) == VAR_2);

  FUNC_6(VAR_1->rlw, 1);
  FUNC_0(FUNC_4(VAR_1->rlw) == 1);
  FUNC_0(FUNC_2(VAR_1->rlw) == 0);
  return 1;
 }
}
