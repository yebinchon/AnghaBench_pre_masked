
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;
struct ghes {int dummy; } ;
typedef int DEFINE_RAW_SPINLOCK ;


 int VAR_0 ;
 int FUNC_0 (struct ghes*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(u32 VAR_1, struct pt_regs *VAR_2,
          void *VAR_3)
{
 static DEFINE_RAW_SPINLOCK(VAR_4);
 struct ghes *VAR_5 = VAR_3;
 int VAR_6;

 FUNC_1(&VAR_4);
 VAR_6 = FUNC_0(VAR_5, VAR_0);
 FUNC_2(&VAR_4);

 return VAR_6;
}
