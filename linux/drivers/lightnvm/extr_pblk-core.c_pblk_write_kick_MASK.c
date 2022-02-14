
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pblk {int wtimer; int writer_ts; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct pblk *VAR_1)
{
 FUNC_2(VAR_1->writer_ts);
 FUNC_0(&VAR_1->wtimer, VAR_0 + FUNC_1(1000));
}
