
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idt77252_dev {int cmd_lock; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct idt77252_dev*) ;
 int FUNC_4 (unsigned long,int ) ;

__attribute__((used)) static u32
FUNC_5(struct idt77252_dev *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_1(&VAR_3->cmd_lock, VAR_5);
 FUNC_4(VAR_0 | (VAR_4 << 2), VAR_1);
 FUNC_3(VAR_3);
 VAR_6 = FUNC_0(VAR_2);
 FUNC_2(&VAR_3->cmd_lock, VAR_5);
 return VAR_6;
}
