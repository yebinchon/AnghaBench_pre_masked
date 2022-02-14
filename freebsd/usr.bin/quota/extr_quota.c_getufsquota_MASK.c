
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct quotause {int dqblk; } ;
struct quotafile {int dummy; } ;
struct fstab {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct quotafile*) ;
 struct quotafile* FUNC_1 (struct fstab*,int,int ) ;
 scalar_t__ FUNC_2 (struct quotafile*,int *,long) ;

__attribute__((used)) static int
FUNC_3(struct fstab *VAR_1, struct quotause *VAR_2, long VAR_3, int VAR_4)
{
 struct quotafile *VAR_5;

 if ((VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_0)) == ((void*)0))
  return (0);
 if (FUNC_2(VAR_5, &VAR_2->dqblk, VAR_3) != 0)
  return (0);
 FUNC_0(VAR_5);
 return (1);
}
