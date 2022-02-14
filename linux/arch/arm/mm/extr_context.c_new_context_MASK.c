
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
 int FUNC_1 (int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (struct mm_struct*) ;

__attribute__((used)) static u64 FUNC_9(struct mm_struct *VAR_5, unsigned int VAR_6)
{
 static u32 VAR_7 = 1;
 u64 VAR_8 = FUNC_3(&VAR_5->context.id);
 u64 VAR_9 = FUNC_3(&VAR_3);

 if (VAR_8 != 0) {
  u64 VAR_10 = VAR_9 | (VAR_8 & ~VAR_1);





  if (FUNC_4(VAR_8, VAR_10))
   return VAR_10;





  VAR_8 &= ~VAR_1;
  if (!FUNC_1(VAR_8, VAR_4))
   return VAR_10;
 }
 VAR_8 = FUNC_6(VAR_4, VAR_2, VAR_7);
 if (VAR_8 == VAR_2) {
  VAR_9 = FUNC_2(VAR_0,
       &VAR_3);
  FUNC_7(VAR_6);
  VAR_8 = FUNC_6(VAR_4, VAR_2, 1);
 }

 FUNC_0(VAR_8, VAR_4);
 VAR_7 = VAR_8;
 FUNC_5(FUNC_8(VAR_5));
 return VAR_8 | VAR_9;
}
