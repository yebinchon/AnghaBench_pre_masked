
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_3__ {int len; void* data; } ;
typedef TYPE_1__ git_buf_vec ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_5 (void*) ;

void FUNC_6(void)
{
 git_oid VAR_2, VAR_3;
 git_buf_vec VAR_4[2];

 FUNC_1(FUNC_4(&VAR_2, VAR_0));

 VAR_4[0].data = VAR_1;
 VAR_4[0].len = 4;
 VAR_4[1].data = VAR_1+4;
 VAR_4[1].len = FUNC_5(VAR_1)-4;

 FUNC_2(&VAR_3, VAR_4, 2);

 FUNC_0(FUNC_3(&VAR_2, &VAR_3) == 0);
}
