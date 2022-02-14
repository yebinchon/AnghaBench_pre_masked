
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct dn_fsk {int qht; TYPE_1__ fs; } ;
struct copy_args {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct copy_args*) ;
 int FUNC_1 (int ,int (*) (int ,struct copy_args*),struct copy_args*) ;

__attribute__((used)) static int
FUNC_2(struct copy_args *VAR_1, struct dn_fsk *VAR_2, int VAR_3)
{
 if (!VAR_2->qht)
  return 0;
 if (VAR_2->fs.flags & VAR_0)
  FUNC_1(VAR_2->qht, FUNC_0, VAR_1);
 else
  FUNC_0(VAR_2->qht, VAR_1);
 return 0;
}
