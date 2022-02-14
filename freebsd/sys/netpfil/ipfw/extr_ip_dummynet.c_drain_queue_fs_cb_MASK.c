
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct dn_fsk {int * qht; int drain_bucket; TYPE_1__ fs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__ (*) (int *,int *),int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_2, void *VAR_3)
{
 struct dn_fsk *VAR_4 = VAR_2;

 if (VAR_4->fs.flags & VAR_1) {

  FUNC_0(VAR_4->qht, &VAR_4->drain_bucket,
    FUNC_1, ((void*)0));
  VAR_4->drain_bucket++;
 } else {



  if (VAR_4->qht) {
   if (FUNC_1(VAR_4->qht, ((void*)0)) == VAR_0)
    VAR_4->qht = ((void*)0);
  }
 }
 return 0;
}
