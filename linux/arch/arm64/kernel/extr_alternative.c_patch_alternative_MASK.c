
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alt_instr {int dummy; } ;
typedef int __le32 ;


 int * FUNC_0 (struct alt_instr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct alt_instr*,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct alt_instr *VAR_0,
         __le32 *VAR_1, __le32 *VAR_2, int VAR_3)
{
 __le32 *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  u32 VAR_6;

  VAR_6 = FUNC_2(VAR_0, VAR_1 + VAR_5, VAR_4 + VAR_5);
  VAR_2[VAR_5] = FUNC_1(VAR_6);
 }
}
