
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int sem; scalar_t__ cur_rsp_mask; scalar_t__ baseaddr; int done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(int VAR_7, u32 VAR_8)
{
 u32 VAR_9;
 int VAR_10, VAR_11, VAR_12;

 if (FUNC_1(VAR_7)) {
  VAR_12 = VAR_0;
  VAR_9 = VAR_3;
 } else {
  VAR_12 = VAR_1;
  VAR_9 = VAR_4;
 }

 VAR_11 = FUNC_6(VAR_7, VAR_8);

 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_2(&VAR_6->sem, FUNC_5(VAR_5)))
  return -VAR_2;

 FUNC_3(&VAR_6->done);
 VAR_6->cur_rsp_mask = FUNC_0(VAR_12);

 FUNC_8(VAR_11, VAR_6->baseaddr + VAR_9);
 VAR_10 = FUNC_7(VAR_12);

 VAR_6->cur_rsp_mask = 0;
 FUNC_4(&VAR_6->sem);

 return VAR_10;
}
