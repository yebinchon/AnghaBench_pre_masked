
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int path; } ;
struct TYPE_6__ {int status; TYPE_1__ new_file; } ;
typedef TYPE_2__ git_diff_delta ;
typedef char git_diff ;
struct TYPE_7__ {int t; scalar_t__ path; } ;
typedef TYPE_3__ basic_payload ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(
 const git_diff *VAR_1,
 const git_diff_delta *VAR_2,
 const char *VAR_3,
 void *VAR_4)
{
 basic_payload *VAR_5 = (basic_payload *)VAR_4;
 basic_payload *VAR_6;

 FUNC_0(VAR_1);
 FUNC_0(VAR_3);

 for (VAR_6 = VAR_5; VAR_6->path; VAR_6++) {
  if (FUNC_3(VAR_6->path, VAR_2->new_file.path) == 0) {
   FUNC_2(VAR_6->t, VAR_2->status);
   return 0;
  }
 }
 FUNC_1(0);
 return VAR_0;
}
