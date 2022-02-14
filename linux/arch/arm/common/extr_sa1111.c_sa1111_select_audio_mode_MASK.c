
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {int dummy; } ;
struct sa1111 {int lock; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 struct sa1111* FUNC_1 (struct sa1111_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

void FUNC_5(struct sa1111_dev *VAR_3, int VAR_4)
{
 struct sa1111 *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_2(&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_0(VAR_5->base + VAR_1);
 if (VAR_4 == VAR_0) {
  VAR_7 &= ~VAR_2;
 } else {
  VAR_7 |= VAR_2;
 }
 FUNC_4(VAR_7, VAR_5->base + VAR_1);

 FUNC_3(&VAR_5->lock, VAR_6);
}
