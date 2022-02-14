
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfjails {int dummy; } ;
struct cfjail {struct cfjails* queue; } ;


 int FUNC_0 (struct cfjails*,struct cfjail*,int ) ;
 int FUNC_1 (struct cfjails*,struct cfjail*,int ) ;
 int VAR_0 ;

void
FUNC_2(struct cfjail *VAR_1, struct cfjails *VAR_2)
{
    FUNC_1(VAR_1->queue, VAR_1, VAR_0);
    FUNC_0(VAR_2, VAR_1, VAR_0);
    VAR_1->queue = VAR_2;
}
