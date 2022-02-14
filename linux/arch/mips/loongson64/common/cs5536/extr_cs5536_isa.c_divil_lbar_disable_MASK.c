
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void FUNC_3(void)
{
 u32 VAR_2, VAR_3;
 int VAR_4;

 for (VAR_4 = VAR_1; VAR_4 <= VAR_0; VAR_4++) {
  FUNC_1(FUNC_0(VAR_4), &VAR_2, &VAR_3);
  VAR_2 &= ~0x01;
  FUNC_2(FUNC_0(VAR_4), VAR_2, VAR_3);
 }
}
