
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipaq_micro_keys {int input; int * codes; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(void *VAR_1, int VAR_2, unsigned char *VAR_3)
{
 struct ipaq_micro_keys *VAR_4 = VAR_1;
 int VAR_5, VAR_6;

 VAR_6 = 0x80 & VAR_3[0];
 VAR_5 = 0x7f & VAR_3[0];

 if (VAR_5 < FUNC_0(VAR_0)) {
  FUNC_1(VAR_4->input, VAR_4->codes[VAR_5], VAR_6);
  FUNC_2(VAR_4->input);
 }
}
