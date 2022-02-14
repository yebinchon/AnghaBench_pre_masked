
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_2__ {int id; } ;
struct mm_struct {TYPE_1__ context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

__attribute__((used)) static u64 FUNC_9(struct mm_struct *VAR_5)
{
 static u32 VAR_6 = 1;
 u64 VAR_7 = FUNC_4(&VAR_5->context.id);
 u64 VAR_8 = FUNC_4(&VAR_3);

 if (VAR_7 != 0) {
  u64 VAR_9 = VAR_8 | (VAR_7 & ~VAR_1);





  if (FUNC_5(VAR_7, VAR_9))
   return VAR_9;





  if (!FUNC_1(FUNC_2(VAR_7), VAR_4))
   return VAR_9;
 }
 VAR_7 = FUNC_6(VAR_4, VAR_2, VAR_6);
 if (VAR_7 != VAR_2)
  goto set_asid;


 VAR_8 = FUNC_3(VAR_0,
       &VAR_3);
 FUNC_7();


 VAR_7 = FUNC_6(VAR_4, VAR_2, 1);

set_asid:
 FUNC_0(VAR_7, VAR_4);
 VAR_6 = VAR_7;
 return FUNC_8(VAR_7) | VAR_8;
}
