
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u32 ;
struct reset_controller_dev {int dummy; } ;
struct hisi_reset_controller {int lock; scalar_t__ membase; } ;


 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct hisi_reset_controller* FUNC_4 (struct reset_controller_dev*) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct reset_controller_dev *VAR_3,
         unsigned long VAR_4)
{
 struct hisi_reset_controller *VAR_5 = FUNC_4(VAR_3);
 unsigned long VAR_6;
 u32 VAR_7, VAR_8;
 u8 VAR_9;

 VAR_7 = (VAR_4 & VAR_1) >> VAR_2;
 VAR_9 = VAR_4 & VAR_0;

 FUNC_2(&VAR_5->lock, VAR_6);

 VAR_8 = FUNC_1(VAR_5->membase + VAR_7);
 FUNC_5(VAR_8 | FUNC_0(VAR_9), VAR_5->membase + VAR_7);

 FUNC_3(&VAR_5->lock, VAR_6);

 return 0;
}
