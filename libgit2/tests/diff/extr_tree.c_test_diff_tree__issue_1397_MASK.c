
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * file_status; int files; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_6 (int *,int ,int *,int *,int *) ;
 int VAR_13 ;
 void* FUNC_7 (int ,char*) ;

void FUNC_8(void)
{


 VAR_12 = FUNC_3("issue_1397");

 FUNC_4(VAR_12, "core.autocrlf", 1);

 FUNC_0((VAR_4 = FUNC_7(VAR_12, "8a7ef04")) != ((void*)0));
 FUNC_0((VAR_5 = FUNC_7(VAR_12, "7f483a7")) != ((void*)0));

 FUNC_2(FUNC_6(&VAR_6, VAR_12, VAR_4, VAR_5, &VAR_13));

 FUNC_2(FUNC_5(VAR_6,
  VAR_8, VAR_7, VAR_9, VAR_10, &VAR_11));

 FUNC_1(1, VAR_11.files);
 FUNC_1(0, VAR_11.file_status[VAR_1]);
 FUNC_1(1, VAR_11.file_status[VAR_2]);
 FUNC_1(0, VAR_11.file_status[VAR_0]);
 FUNC_1(0, VAR_11.file_status[VAR_3]);
}
