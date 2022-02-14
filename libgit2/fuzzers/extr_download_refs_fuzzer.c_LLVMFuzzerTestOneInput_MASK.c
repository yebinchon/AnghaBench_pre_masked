
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct fuzzer_buffer {unsigned char const* member_0; size_t member_1; } ;
struct TYPE_4__ {struct fuzzer_buffer* payload; int transport; } ;
typedef TYPE_1__ git_remote_callbacks ;
typedef int git_remote ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_2 (int **,int ,char*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

int FUNC_5(const unsigned char *VAR_4, size_t VAR_5)
{
 struct fuzzer_buffer VAR_6 = { VAR_4, VAR_5 };
 git_remote_callbacks VAR_7 = VAR_1;
 git_remote *VAR_8;

 if (FUNC_2(&VAR_8, VAR_3, "fuzzer://remote-url") < 0)
  FUNC_0("git_remote_create");

 VAR_7.transport = VAR_2;
 VAR_7.payload = &VAR_6;

 if (FUNC_1(VAR_8, VAR_0,
     &VAR_7, ((void*)0), ((void*)0)) < 0)
  goto out;

 FUNC_3(VAR_8, ((void*)0), ((void*)0));

    out:
 FUNC_4(VAR_8);

 return 0;
}
