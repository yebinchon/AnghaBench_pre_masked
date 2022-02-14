
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ufsmount {int um_flags; int um_devvp; } ;
struct mount {int dummy; } ;
struct TYPE_3__ {int td_ucred; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ufsmount*) ;
 int FUNC_1 (struct ufsmount*) ;
 int VAR_6 ;
 struct ufsmount* FUNC_2 (struct mount*) ;
 int FUNC_3 (int ,int,int ,TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_5 (struct mount*) ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct mount*) ;
 scalar_t__ FUNC_7 (int ,struct mount*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct mount*,int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static int
FUNC_11(struct mount *VAR_12)
{
 struct ufsmount *VAR_13;
 int VAR_14;

 FUNC_8(&VAR_11, VAR_5);

 if (!FUNC_5(VAR_12))
  return (VAR_1);
 if (FUNC_6(VAR_12))
  return (VAR_0);

 VAR_13 = FUNC_2(VAR_12);






 FUNC_10(VAR_13->um_devvp, VAR_3 | VAR_4);
 VAR_14 = FUNC_3(VAR_13->um_devvp, VAR_7 | VAR_9,
     VAR_10->td_ucred, VAR_10);
 FUNC_4(VAR_13->um_devvp, 0);
 if (VAR_14 != 0)
  return (VAR_14);





 if ((VAR_14 = FUNC_9(VAR_12, VAR_8)) != 0)
  return (VAR_14);

 FUNC_0(VAR_13);
 VAR_13->um_flags |= VAR_6;
 FUNC_1(VAR_13);

 return (0);
}
