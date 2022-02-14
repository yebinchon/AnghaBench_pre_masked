
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int sev_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_2(int *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, ((void*)0), VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2->sev_state = VAR_1;
 FUNC_1(VAR_2->dev, "SEV firmware shutdown\n");

 return VAR_4;
}
