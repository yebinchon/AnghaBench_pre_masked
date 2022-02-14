
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ewah_bitmap {int rlw; } ;
typedef int eword_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ewah_bitmap*,int) ;
 int FUNC_2 (struct ewah_bitmap*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static size_t FUNC_5(struct ewah_bitmap *VAR_1, eword_t VAR_2)
{
 eword_t VAR_3 = FUNC_3(VAR_1->rlw);

 if (VAR_3 >= VAR_0) {
  FUNC_2(VAR_1, 0);

  FUNC_4(VAR_1->rlw, 1);
  FUNC_1(VAR_1, VAR_2);
  return 2;
 }

 FUNC_4(VAR_1->rlw, VAR_3 + 1);


 FUNC_0(FUNC_3(VAR_1->rlw) == VAR_3 + 1);

 FUNC_1(VAR_1, VAR_2);
 return 1;
}
