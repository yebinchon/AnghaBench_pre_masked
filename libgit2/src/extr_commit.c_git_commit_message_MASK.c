
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* raw_message; } ;
typedef TYPE_1__ git_commit ;


 int FUNC_0 (TYPE_1__ const*) ;

const char *FUNC_1(const git_commit *VAR_0)
{
 const char *VAR_1;

 FUNC_0(VAR_0);

 VAR_1 = VAR_0->raw_message;


 while (*VAR_1 && *VAR_1 == '\n')
  ++VAR_1;

 return VAR_1;
}
