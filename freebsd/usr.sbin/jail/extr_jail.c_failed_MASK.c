
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfjail {int * queue; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct cfjail*,int ) ;
 int FUNC_1 (int *,struct cfjail*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2(struct cfjail *VAR_3)
{
 VAR_3->flags |= VAR_0;
 FUNC_1(VAR_3->queue, VAR_3, VAR_2);
 FUNC_0(&VAR_1, VAR_3, VAR_2);
 VAR_3->queue = &VAR_1;
}
