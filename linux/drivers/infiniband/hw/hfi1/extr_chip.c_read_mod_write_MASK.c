
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct hfi1_devdata {int irq_src_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_devdata*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_2, u16 VAR_3, u64 VAR_4,
      bool VAR_5)
{
 u64 VAR_6;
 u16 VAR_7 = VAR_3 / VAR_0;

 FUNC_1(&VAR_2->irq_src_lock);
 VAR_6 = FUNC_0(VAR_2, VAR_1 + (8 * VAR_7));
 if (VAR_5)
  VAR_6 |= VAR_4;
 else
  VAR_6 &= ~VAR_4;
 FUNC_3(VAR_2, VAR_1 + (8 * VAR_7), VAR_6);
 FUNC_2(&VAR_2->irq_src_lock);
}
