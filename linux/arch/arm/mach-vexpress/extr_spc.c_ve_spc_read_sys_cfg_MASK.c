
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int sem; scalar_t__ cur_rsp_mask; scalar_t__ baseaddr; int done; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(int VAR_7, int VAR_8, uint32_t *VAR_9)
{
 int VAR_10;

 if (FUNC_1(&VAR_6->sem, FUNC_5(VAR_5)))
  return -VAR_1;

 FUNC_2(&VAR_6->done);
 VAR_6->cur_rsp_mask = FUNC_0(VAR_2);


 FUNC_7(VAR_4 | VAR_7 | VAR_8 >> 2, VAR_6->baseaddr + VAR_0);
 VAR_10 = FUNC_6(VAR_2);

 if (VAR_10 == 0)
  *VAR_9 = FUNC_3(VAR_6->baseaddr + VAR_3);

 VAR_6->cur_rsp_mask = 0;
 FUNC_4(&VAR_6->sem);

 return VAR_10;
}
