
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* progress_payload; int progress_cb; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 (int *,int ,char*) ;
 int VAR_3 ;

void FUNC_4(void)
{
 bool VAR_4 = 0;

 VAR_1.progress_cb = VAR_3;
 VAR_1.progress_payload = &VAR_4;

 FUNC_1(FUNC_3(&VAR_0, VAR_2, "master"));

 FUNC_1(FUNC_2(VAR_2, VAR_0, &VAR_1));

 FUNC_0(VAR_4, 1);
}
