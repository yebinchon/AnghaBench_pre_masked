
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int flags; } ;
typedef TYPE_2__ git_iterator_options ;
typedef int git_iterator ;
struct TYPE_11__ {int length; } ;
struct TYPE_13__ {TYPE_1__ entries; } ;
typedef TYPE_3__ git_index ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (TYPE_3__*,int *,int ) ;
 int FUNC_2 (int **,int ,TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(
 git_index *VAR_3,
 const git_index *VAR_4)
{
 git_iterator *VAR_5 = ((void*)0);
 git_iterator_options VAR_6 = VAR_2;
 int VAR_7;

 VAR_6.flags = VAR_0 |
  VAR_1;

 if ((VAR_7 = FUNC_2(&VAR_5,
  FUNC_0(VAR_4), (git_index *)VAR_4, &VAR_6)) < 0 ||
  (VAR_7 = FUNC_1(VAR_3, VAR_5,
  VAR_4->entries.length)) < 0)
  goto done;

done:
 FUNC_3(VAR_5);
 return VAR_7;
}
