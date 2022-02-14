
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mip4_ts {int key_num; int input; int * key_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mip4_ts *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_1(VAR_2->input, VAR_3);
  FUNC_0(VAR_2->input, VAR_1, 0);
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->key_num; VAR_3++)
  FUNC_2(VAR_2->input, VAR_2->key_code[VAR_3], 0);

 FUNC_3(VAR_2->input);
}
