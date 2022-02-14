
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int scan_name ;
typedef int git_repository ;
typedef int git_refname_t ;
typedef scalar_t__ git_reference_t ;
struct TYPE_6__ {int symbolic; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_1__ target; } ;
typedef TYPE_2__ git_reference ;
typedef int git_refdb ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__**,int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int **,int *) ;
 int FUNC_5 (int ,int *,char const*,int) ;
 int FUNC_6 (int ,int ,int) ;

int FUNC_7(
 git_reference **VAR_5,
 git_repository *VAR_6,
 const char *VAR_7,
 int VAR_8)
{
 git_refname_t VAR_9;
 git_reference_t VAR_10;
 int VAR_11 = 0, VAR_12;
 git_reference *VAR_13 = ((void*)0);
 git_refdb *VAR_14;

 FUNC_0(VAR_5 && VAR_6 && VAR_7);

 *VAR_5 = ((void*)0);

 if (VAR_8 > VAR_4)
  VAR_8 = VAR_4;
 else if (VAR_8 < 0)
  VAR_8 = VAR_0;

 VAR_10 = VAR_3;

 if ((VAR_11 = FUNC_5(VAR_9, VAR_6, VAR_7, 1)) < 0)
  return VAR_11;

 if ((VAR_11 = FUNC_4(&VAR_14, VAR_6)) < 0)
  return VAR_11;

 for (VAR_12 = VAR_8;
   VAR_12 >= 0 && VAR_10 == VAR_3;
   VAR_12--)
 {
  if (VAR_12 != VAR_8) {
   FUNC_6(VAR_9, VAR_13->target.symbolic, sizeof(VAR_9));
   FUNC_3(VAR_13);
  }

  if ((VAR_11 = FUNC_2(&VAR_13, VAR_14, VAR_9)) < 0)
   return VAR_11;

  VAR_10 = VAR_13->type;
 }

 if (VAR_10 != VAR_2 && VAR_8 != 0) {
  FUNC_1(VAR_1,
   "cannot resolve reference (>%u levels deep)", VAR_8);
  FUNC_3(VAR_13);
  return -1;
 }

 *VAR_5 = VAR_13;
 return 0;
}
