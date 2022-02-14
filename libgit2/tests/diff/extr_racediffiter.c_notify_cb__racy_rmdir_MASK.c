
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int first_time; int basic_payload; int dir; } ;
typedef TYPE_1__ racy_payload ;
typedef int git_diff_delta ;
typedef int git_diff ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int const*,char const*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(
 const git_diff *VAR_0,
 const git_diff_delta *VAR_1,
 const char *VAR_2,
 void *VAR_3)
{
 racy_payload *VAR_4 = (racy_payload *)VAR_3;

 if (VAR_4->first_time) {
  FUNC_0(FUNC_2(VAR_4->dir));
  VAR_4->first_time = 0;
 }

 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_4->basic_payload);
}
