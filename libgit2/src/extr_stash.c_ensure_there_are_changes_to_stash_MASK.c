
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int flags; int show; } ;
typedef TYPE_1__ git_status_options ;
typedef int git_repository ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,TYPE_1__*,int ,int *) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_2(git_repository *VAR_12, uint32_t VAR_13)
{
 int VAR_14;
 git_status_options VAR_15 = VAR_4;

 VAR_15.show = VAR_10;
 VAR_15.flags = VAR_5;

 if (VAR_13 & VAR_3)
  VAR_15.flags |= VAR_7 |
   VAR_9;

 if (VAR_13 & VAR_2)
  VAR_15.flags |= VAR_6 |
   VAR_8;

 VAR_14 = FUNC_1(VAR_12, &VAR_15, VAR_11, ((void*)0));

 if (VAR_14 == VAR_1)
  return 0;

 if (!VAR_14)
  return FUNC_0(VAR_0, "there is nothing to stash.");

 return VAR_14;
}
