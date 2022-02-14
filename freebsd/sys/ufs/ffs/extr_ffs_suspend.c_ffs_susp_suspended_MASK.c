
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufsmount {int um_flags; } ;
struct mount {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ufsmount* FUNC_0 (struct mount*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct mount *VAR_3)
{
 struct ufsmount *VAR_4;

 FUNC_1(&VAR_2, VAR_0);

 VAR_4 = FUNC_0(VAR_3);
 if ((VAR_4->um_flags & VAR_1) != 0)
  return (1);
 return (0);
}
