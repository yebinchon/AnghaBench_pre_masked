
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int version; int wrap; int init; int member_0; } ;
typedef TYPE_1__ git_stream_registration ;
typedef int git_stream ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int **,char*,char*) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int **,char*,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(void)
{
 git_stream *VAR_6;
 git_stream_registration VAR_7 = {0};

 VAR_7.version = 1;
 VAR_7.init = VAR_4;
 VAR_7.wrap = VAR_5;

 FUNC_2(FUNC_4(VAR_0 | VAR_1, &VAR_7));

 VAR_2 = 0;
 FUNC_2(FUNC_5(&VAR_6, "localhost", "443"));
 FUNC_0(1, VAR_2);
 FUNC_1(&VAR_3, VAR_6);

 VAR_2 = 0;
 FUNC_2(FUNC_3(&VAR_6, "localhost", "80"));
 FUNC_0(1, VAR_2);
 FUNC_1(&VAR_3, VAR_6);
}
