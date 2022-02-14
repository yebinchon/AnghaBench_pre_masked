
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pt_regs {int nip; } ;
struct op_counter_config {scalar_t__ enabled; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,struct pt_regs*,int,int) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_8 () ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(struct pt_regs *VAR_6,
          struct op_counter_config *VAR_7)
{
 u32 VAR_8;
 u64 VAR_9;
 int VAR_10;
 unsigned long VAR_11 = 0;
 u32 VAR_12;
 int VAR_13;

 VAR_8 = FUNC_8();






 FUNC_9(&VAR_0, VAR_11);







 FUNC_1(VAR_8);

 VAR_12 = FUNC_4(VAR_8);
 if ((VAR_3 == 1) && (VAR_12 != 0)) {
  VAR_9 = VAR_6->nip;
  VAR_10 = FUNC_6(VAR_9);

  for (VAR_13 = 0; VAR_13 < VAR_2; ++VAR_13) {
   if ((VAR_12 & FUNC_0(VAR_13))
       && VAR_7[VAR_13].enabled) {
    FUNC_7(VAR_9, VAR_6, VAR_13, VAR_10);
    FUNC_5(VAR_8, VAR_13, VAR_4[VAR_13]);
   }
  }
  FUNC_3(VAR_8, VAR_1,
      VAR_5);
  FUNC_2(VAR_8);
 }
 FUNC_10(&VAR_0, VAR_11);
}
