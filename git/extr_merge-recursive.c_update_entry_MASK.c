
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stage_data {TYPE_1__* stages; scalar_t__ processed; } ;
struct diff_filespec {int oid; int mode; } ;
struct TYPE_2__ {int oid; int mode; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct stage_data *VAR_0,
    struct diff_filespec *VAR_1,
    struct diff_filespec *VAR_2,
    struct diff_filespec *VAR_3)
{
 VAR_0->processed = 0;
 VAR_0->stages[1].mode = VAR_1->mode;
 VAR_0->stages[2].mode = VAR_2->mode;
 VAR_0->stages[3].mode = VAR_3->mode;
 FUNC_0(&VAR_0->stages[1].oid, &VAR_1->oid);
 FUNC_0(&VAR_0->stages[2].oid, &VAR_2->oid);
 FUNC_0(&VAR_0->stages[3].oid, &VAR_3->oid);
}
