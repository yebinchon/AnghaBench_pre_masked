
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_filter_list ;
typedef int git_filter ;
struct TYPE_6__ {char* ptr; void* size; int member_0; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int ,int ,int ) ;
 int FUNC_8 (int *,int *,int *) ;
 int * FUNC_9 (int ) ;
 void* FUNC_10 (char*) ;

void FUNC_11(void)
{
 git_filter_list *VAR_4;
 git_filter *VAR_5;
 git_buf VAR_6 = {0}, VAR_7 = VAR_0;

 FUNC_3(VAR_3, "core.safecrlf", "warn");

 FUNC_2(FUNC_7(
  &VAR_4, VAR_3, VAR_2, 0));

 VAR_5 = FUNC_9(VAR_1);
 FUNC_0(VAR_5 != ((void*)0));

 FUNC_2(FUNC_8(VAR_4, VAR_5, ((void*)0)));


 VAR_6.ptr = "Normal\r\nCRLF\r\nline-endings.\r\n";
 VAR_6.size = FUNC_10(VAR_6.ptr);

 FUNC_2(FUNC_5(&VAR_7, VAR_4, &VAR_6));
 FUNC_1("Normal\nCRLF\nline-endings.\n", VAR_7.ptr);


 VAR_6.ptr = "Mixed\nup\r\nLF\nand\r\nCRLF\nline-endings.\r\n";
 VAR_6.size = FUNC_10(VAR_6.ptr);

 FUNC_2(FUNC_5(&VAR_7, VAR_4, &VAR_6));

 FUNC_1("Mixed\nup\nLF\nand\nCRLF\nline-endings.\n", VAR_7.ptr);


 VAR_6.ptr = "Normal\nLF\nonly\nline-endings.\n";
 VAR_6.size = FUNC_10(VAR_6.ptr);

 FUNC_2(FUNC_5(&VAR_7, VAR_4, &VAR_6));
 FUNC_1(VAR_6.ptr, VAR_7.ptr);

 FUNC_6(VAR_4);
 FUNC_4(&VAR_7);
}
