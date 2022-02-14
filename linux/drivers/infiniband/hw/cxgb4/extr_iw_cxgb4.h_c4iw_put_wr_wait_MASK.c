
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_wr_wait {int kref; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*,struct c4iw_wr_wait*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(struct c4iw_wr_wait *VAR_1)
{
 FUNC_3("wr_wait %p ref before put %u\n", VAR_1,
   FUNC_2(&VAR_1->kref));
 FUNC_0(FUNC_2(&VAR_1->kref) == 0);
 FUNC_1(&VAR_1->kref, VAR_0);
}
