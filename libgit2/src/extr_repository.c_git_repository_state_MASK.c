
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int gitdir; } ;
typedef TYPE_1__ git_repository ;
typedef int git_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;

int FUNC_5(git_repository *VAR_23)
{
 git_buf VAR_24 = VAR_1;
 int VAR_25 = VAR_15;

 FUNC_0(VAR_23);

 if (FUNC_2(&VAR_24, VAR_23->gitdir) < 0)
  return -1;

 if (FUNC_4(&VAR_24, VAR_8))
  VAR_25 = VAR_17;
 else if (FUNC_3(&VAR_24, VAR_7))
  VAR_25 = VAR_18;
 else if (FUNC_4(&VAR_24, VAR_6))
  VAR_25 = VAR_16;
 else if (FUNC_4(&VAR_24, VAR_4))
  VAR_25 = VAR_9;
 else if (FUNC_3(&VAR_24, VAR_5))
  VAR_25 = VAR_10;
 else if (FUNC_4(&VAR_24, VAR_3))
  VAR_25 = VAR_14;
 else if (FUNC_4(&VAR_24, VAR_21)) {
  VAR_25 = VAR_19;
  if (FUNC_4(&VAR_24, VAR_22)) {
   VAR_25 = VAR_20;
  }
 } else if (FUNC_4(&VAR_24, VAR_2)) {
  VAR_25 = VAR_12;
  if (FUNC_4(&VAR_24, VAR_22)) {
   VAR_25 = VAR_13;
  }
 } else if (FUNC_4(&VAR_24, VAR_0))
  VAR_25 = VAR_11;

 FUNC_1(&VAR_24);
 return VAR_25;
}
