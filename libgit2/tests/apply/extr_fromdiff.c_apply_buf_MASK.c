
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int git_diff_options ;
struct TYPE_5__ {char* ptr; void* size; } ;
typedef TYPE_1__ git_buf ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,char const*,TYPE_1__*,char const*,char const*,int const*) ;
 void* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(
 const char *VAR_1,
 const char *VAR_2,
 const char *VAR_3,
 const char *VAR_4,
 const char *VAR_5,
 const git_diff_options *VAR_6)
{
 git_buf VAR_7 = VAR_0, VAR_8 = VAR_0,
  *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);

 if (VAR_1) {
  VAR_7.ptr = (char *)VAR_1;
  VAR_7.size = FUNC_1(VAR_1);
  VAR_9 = &VAR_7;
 }

 if (VAR_3) {
  VAR_8.ptr = (char *)VAR_3;
  VAR_8.size = FUNC_1(VAR_3);
  VAR_10 = &VAR_8;
 }

 return FUNC_0(VAR_9, VAR_2, VAR_10, VAR_4, VAR_5, VAR_6);
}
