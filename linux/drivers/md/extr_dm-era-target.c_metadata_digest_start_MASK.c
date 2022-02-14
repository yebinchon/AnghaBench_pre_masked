
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct era_metadata {int tm; } ;
struct digest {scalar_t__ step; int info; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct digest*,int ,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct era_metadata *VAR_1, struct digest *VAR_2)
{
 if (VAR_2->step)
  return 0;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));





 FUNC_0(VAR_1->tm, &VAR_2->info);
 VAR_2->step = VAR_0;

 return 0;
}
