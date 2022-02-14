
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int (* free ) (TYPE_1__*) ;} ;
typedef TYPE_1__ git_transport ;


 unsigned int FUNC_0 (char const**) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__**,int *,char const*) ;
 int FUNC_5 (char*,int ,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(void)
{
 const char *VAR_2[] = {
  "ssh://somehost:somepath",
  "ssh+git://somehost:somepath",
  "git+ssh://somehost:somepath",
  "git@somehost:somepath",
  "ssh://somehost:somepath%20with%20%spaces",
  "ssh://somehost:somepath with spaces"
 };
 git_transport *VAR_3;
 unsigned VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {

  FUNC_2(FUNC_4(&VAR_3, ((void*)0), VAR_2[VAR_4]), -1);




 }

 FUNC_3(FUNC_5("ssh", VAR_1, ((void*)0)));

 FUNC_3(FUNC_4(&VAR_3, ((void*)0), "git@somehost:somepath"));

 FUNC_1(VAR_3 == &VAR_0);

 FUNC_3(FUNC_6("ssh"));

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {

  FUNC_2(FUNC_4(&VAR_3, ((void*)0), VAR_2[VAR_4]), -1);




 }
}
