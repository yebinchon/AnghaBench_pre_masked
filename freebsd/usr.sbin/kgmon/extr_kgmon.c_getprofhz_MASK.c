
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvmvars {int kd; } ;
struct clockinfo {int profhz; } ;
struct TYPE_2__ {int n_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*,int) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_2 (int*,int,struct clockinfo*,size_t*,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ) ;

int
FUNC_5(struct kvmvars *VAR_5)
{
 size_t VAR_6;
 int VAR_7[2], VAR_8;
 struct clockinfo VAR_9;

 if (VAR_3) {
  VAR_8 = 1;
  if (FUNC_1(VAR_5->kd, VAR_4[VAR_2].n_value, &VAR_8,
      sizeof VAR_8) != sizeof VAR_8)
   FUNC_4("get clockrate: %s", FUNC_0(VAR_5->kd));
  return (VAR_8);
 }
 VAR_7[0] = VAR_0;
 VAR_7[1] = VAR_1;
 VAR_9.profhz = 1;
 VAR_6 = sizeof VAR_9;
 if (FUNC_2(VAR_7, 2, &VAR_9, &VAR_6, ((void*)0), 0) < 0)
  FUNC_3("get clockrate");
 return (VAR_9.profhz);
}
