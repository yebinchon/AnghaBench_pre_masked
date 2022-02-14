
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int sign; int offset; int time; } ;
struct TYPE_7__ {TYPE_1__ when; int email; int name; } ;
typedef TYPE_2__ git_signature ;
typedef int git_mailmap ;


 int FUNC_0 (char const**,char const**,int const*,int ,int ) ;
 int FUNC_1 (TYPE_2__**,char const*,char const*,int ,int ) ;

int FUNC_2(
 git_signature **VAR_0, const git_mailmap *VAR_1, const git_signature *VAR_2)
{
 const char *VAR_3 = ((void*)0);
 const char *VAR_4 = ((void*)0);
 int VAR_5;

 if (!VAR_2)
  return 0;

 VAR_5 = FUNC_0(&VAR_3, &VAR_4, VAR_1, VAR_2->name, VAR_2->email);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_3, VAR_4, VAR_2->when.time, VAR_2->when.offset);
 if (VAR_5 < 0)
  return VAR_5;


 (*VAR_0)->when.sign = VAR_2->when.sign;
 return 0;
}
