
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alt_instr {int dummy; } ;
typedef unsigned long s32 ;
typedef int __le32 ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned long) ;
 unsigned long FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (struct alt_instr*,unsigned long) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static u32 FUNC_11(struct alt_instr *VAR_1, __le32 *VAR_2, __le32 *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_10(*VAR_3);

 if (FUNC_5(VAR_4)) {
  s32 VAR_5 = FUNC_1(VAR_4);
  unsigned long VAR_6;

  VAR_6 = (unsigned long)VAR_3 + VAR_5;






  if (FUNC_9(VAR_1, VAR_6)) {
   VAR_5 = VAR_6 - (unsigned long)VAR_2;
   VAR_4 = FUNC_7(VAR_4, VAR_5);
  }
 } else if (FUNC_4(VAR_4)) {
  s32 VAR_7, VAR_8;
  unsigned long VAR_9;






  VAR_7 = FUNC_2(VAR_4);
  VAR_9 = FUNC_8(VAR_3, VAR_0) + VAR_7;
  VAR_8 = VAR_9 - FUNC_8(VAR_2, VAR_0);
  VAR_4 = FUNC_3(VAR_4, VAR_8);
 } else if (FUNC_6(VAR_4)) {




  FUNC_0();
 }

 return VAR_4;
}
