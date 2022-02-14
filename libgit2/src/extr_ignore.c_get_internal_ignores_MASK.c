
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int length; } ;
struct TYPE_7__ {TYPE_1__ rules; } ;
typedef TYPE_2__ git_attr_file ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__**,int *,int *,int ,int *,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_3(git_attr_file **VAR_3, git_repository *VAR_4)
{
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_4)) < 0)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_4, ((void*)0), VAR_0, ((void*)0),
        VAR_2, ((void*)0), 0);


 if (!VAR_5 && !(*VAR_3)->rules.length)
  VAR_5 = FUNC_2(VAR_4, *VAR_3, VAR_1, 0);

 return VAR_5;
}
