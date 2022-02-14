
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int git_diff_delta ;
typedef int git_diff_binary ;
struct TYPE_5__ {int content_len; int content; int origin; } ;
struct TYPE_4__ {char* old_prefix; char* new_prefix; int (* print_cb ) (int const*,int *,TYPE_2__*,int ) ;int payload; TYPE_2__ line; int buf; } ;
typedef TYPE_1__ diff_print_info ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,char const*,int const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int const*,int *,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(
 const git_diff_delta *VAR_3,
 const git_diff_binary *VAR_4,
 void *VAR_5)
{
 diff_print_info *VAR_6 = VAR_5;
 const char *VAR_7 =
  VAR_6->old_prefix ? VAR_6->old_prefix : VAR_1;
 const char *VAR_8 =
  VAR_6->new_prefix ? VAR_6->new_prefix : VAR_0;
 int VAR_9;

 FUNC_1(VAR_6->buf);

 if ((VAR_9 = FUNC_0(
  VAR_6, (git_diff_delta *)VAR_3, VAR_7, VAR_8, VAR_4)) < 0)
  return VAR_9;

 VAR_6->line.origin = VAR_2;
 VAR_6->line.content = FUNC_2(VAR_6->buf);
 VAR_6->line.content_len = FUNC_3(VAR_6->buf);

 return VAR_6->print_cb(VAR_3, ((void*)0), &VAR_6->line, VAR_6->payload);
}
