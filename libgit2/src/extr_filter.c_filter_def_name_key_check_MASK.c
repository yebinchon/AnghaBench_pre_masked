
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* filter_name; } ;
typedef TYPE_1__ git_filter_def ;


 int FUNC_0 (void const*,char const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const char *VAR_2 =
  VAR_1 ? ((const git_filter_def *)VAR_1)->filter_name : ((void*)0);
 return VAR_2 ? FUNC_0(VAR_0, VAR_2) : -1;
}
