
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ptr; } ;
typedef TYPE_1__ git_buf ;


 int FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int *,int *,int ,int ,int ,int *) ;

void FUNC_8(void)
{
 git_buf VAR_5 = VAR_0;
 int VAR_6 = 0;

 FUNC_2(FUNC_5(&VAR_5, FUNC_1("icase"), ".gitted/CoNfIg"));
 VAR_6 = FUNC_6(VAR_5.ptr);
 FUNC_4(&VAR_5);

 FUNC_7(
  "icase", ((void*)0), ((void*)0), 0, FUNC_0(VAR_4),
  VAR_6 ? VAR_3 : VAR_4, ((void*)0));

 FUNC_3();

 FUNC_7(
  "icase", ((void*)0), ((void*)0), VAR_2,
  FUNC_0(VAR_3), VAR_3, ((void*)0));

 FUNC_3();

 FUNC_7(
  "icase", ((void*)0), ((void*)0), VAR_1,
  FUNC_0(VAR_4), VAR_4, ((void*)0));
}
