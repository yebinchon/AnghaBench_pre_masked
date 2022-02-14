
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_filter_list ;
typedef int git_filter ;
struct TYPE_7__ {char* ptr; void* size; int member_0; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_8__ {int klass; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_4__* FUNC_7 () ;
 int FUNC_8 (TYPE_1__*,int *,TYPE_1__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int ,int ,int ) ;
 int FUNC_11 (int *,int *,int *) ;
 int * FUNC_12 (int ) ;
 void* FUNC_13 (char*) ;

void FUNC_14(void)
{
 git_filter_list *VAR_5;
 git_filter *VAR_6;
 git_buf VAR_7 = {0}, VAR_8 = VAR_0;

 FUNC_5(VAR_4, "core.safecrlf", 1);

 FUNC_4(FUNC_10(
  &VAR_5, VAR_4, VAR_3, 0));

 VAR_6 = FUNC_12(VAR_2);
 FUNC_0(VAR_6 != ((void*)0));

 FUNC_4(FUNC_11(VAR_5, VAR_6, ((void*)0)));


 VAR_7.ptr = "Normal\r\nCRLF\r\nline-endings.\r\n";
 VAR_7.size = FUNC_13(VAR_7.ptr);

 FUNC_4(FUNC_8(&VAR_8, VAR_5, &VAR_7));
 FUNC_2("Normal\nCRLF\nline-endings.\n", VAR_8.ptr);


 VAR_7.ptr = "Mixed\nup\r\nLF\nand\r\nCRLF\nline-endings.\r\n";
 VAR_7.size = FUNC_13(VAR_7.ptr);

 FUNC_3(FUNC_8(&VAR_8, VAR_5, &VAR_7));
 FUNC_1(FUNC_7()->klass, VAR_1);


 VAR_7.ptr = "Normal\nLF\nonly\nline-endings.\n";
 VAR_7.size = FUNC_13(VAR_7.ptr);

 FUNC_3(FUNC_8(&VAR_8, VAR_5, &VAR_7));
 FUNC_1(FUNC_7()->klass, VAR_1);


 VAR_7.ptr = "Normal\nCR only\rand some more\nline-endings.\n";
 VAR_7.size = FUNC_13(VAR_7.ptr);

 FUNC_4(FUNC_8(&VAR_8, VAR_5, &VAR_7));
 FUNC_2("Normal\nCR only\rand some more\nline-endings.\n", VAR_8.ptr);

 FUNC_9(VAR_5);
 FUNC_6(&VAR_8);
}
