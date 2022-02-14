
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int oid_hex ;
struct TYPE_6__ {int page_size; } ;
typedef TYPE_1__ git_pool ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int * FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (char*,int ,int) ;
 char* VAR_1 ;

void FUNC_9(void)
{
 git_pool VAR_2;
 char VAR_3[VAR_0];
 git_oid *VAR_4;
 int VAR_5, VAR_6;

 FUNC_8(VAR_3, '0', sizeof(VAR_3));

 FUNC_6(&VAR_2, sizeof(git_oid));
 VAR_2.page_size = 4000;

 for (VAR_5 = 1000; VAR_5 < 10000; VAR_5++) {
  VAR_4 = FUNC_7(&VAR_2, 1);
  FUNC_0(VAR_4 != ((void*)0));

  for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
   VAR_3[VAR_6] = VAR_1[(VAR_5 >> (4 * VAR_6)) & 0x0f];
  FUNC_2(FUNC_3(VAR_4, VAR_3));
 }



 FUNC_1(sizeof(void *) == 8 ? 55 : 45, FUNC_4(&VAR_2));

 FUNC_5(&VAR_2);
}
