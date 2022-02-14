
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ status; } ;
typedef TYPE_1__ git_diff_delta ;


 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const git_diff_delta *VAR_2 = VAR_0, *VAR_3 = VAR_1;
 int VAR_4 = FUNC_1(FUNC_0(VAR_2), FUNC_0(VAR_3));
 return VAR_4 ? VAR_4 : ((int)VAR_2->status - (int)VAR_3->status);
}
