
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct idt77252_dev {int cmd_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct idt77252_dev*) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_3, unsigned long VAR_4, u8 VAR_5)
{
 struct idt77252_dev *VAR_6 = VAR_3;
 unsigned long VAR_7;

 if (!VAR_6) {
  FUNC_0("Error: No such device.\n");
  return;
 }

 FUNC_1(&VAR_6->cmd_lock, VAR_7);
 FUNC_4((u32) VAR_5, VAR_2);
 FUNC_4(VAR_0 + VAR_4, VAR_1);
 FUNC_3(VAR_6);
 FUNC_2(&VAR_6->cmd_lock, VAR_7);
}
