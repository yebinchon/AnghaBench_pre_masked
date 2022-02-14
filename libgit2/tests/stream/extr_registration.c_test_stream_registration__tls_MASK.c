
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int wrap; int init; int member_0; } ;
typedef TYPE_1__ git_stream_registration ;
typedef int git_stream ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 (int **,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_8(void)
{
 git_stream *VAR_5;
 git_stream_registration VAR_6 = {0};
 int VAR_7;

 VAR_6.version = 1;
 VAR_6.init = VAR_3;
 VAR_6.wrap = VAR_4;

 VAR_1 = 0;
 FUNC_4(FUNC_6(VAR_0, &VAR_6));
 FUNC_4(FUNC_7(&VAR_5, "localhost", "443"));
 FUNC_1(1, VAR_1);
 FUNC_2(&VAR_2, VAR_5);

 VAR_1 = 0;
 VAR_5 = ((void*)0);
 FUNC_4(FUNC_6(VAR_0, ((void*)0)));
 VAR_7 = FUNC_7(&VAR_5, "localhost", "443");





 FUNC_3(-1, VAR_7);




 FUNC_1(0, VAR_1);
 FUNC_0(&VAR_2 != VAR_5);

 FUNC_5(VAR_5);
}
