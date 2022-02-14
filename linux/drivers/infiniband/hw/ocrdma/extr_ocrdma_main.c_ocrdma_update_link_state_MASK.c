
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocrdma_dev {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct ocrdma_dev*) ;
 int FUNC_1 (struct ocrdma_dev*) ;

void FUNC_2(struct ocrdma_dev *VAR_1, u8 VAR_2)
{
 if (!(VAR_1->flags & VAR_0)) {
  VAR_1->flags |= VAR_0;
  if (!VAR_2)
   return;
 }

 if (!VAR_2)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
