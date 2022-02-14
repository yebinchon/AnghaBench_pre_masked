
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pmf_args {int count; TYPE_1__* u; } ;
struct TYPE_4__ {unsigned long frequency; } ;
struct TYPE_3__ {scalar_t__* p; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,struct pmf_args*) ;
 unsigned long VAR_8 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(int VAR_9)
{
 struct pmf_args VAR_10;
 u32 VAR_11 = 0;
 unsigned long VAR_12;
 int VAR_13;

 FUNC_0("g5_pfunc_switch_freq(%d)\n", VAR_9);


 if (VAR_9 < VAR_3)
  FUNC_1(VAR_9);


 if (VAR_9 == VAR_0)
  VAR_13 = FUNC_2(VAR_5, ((void*)0));
 else
  VAR_13 = FUNC_2(VAR_6, ((void*)0));

 if (VAR_13)
  FUNC_3("pfunc switch error %d\n", VAR_13);





 VAR_12 = VAR_4 + VAR_1/10;
 while(!FUNC_4(VAR_4, VAR_12)) {
  VAR_10.count = 1;
  VAR_10.u[0].p = &VAR_11;
  FUNC_2(VAR_7, &VAR_10);
  if (VAR_11)
   break;
  FUNC_5(500, 500);
 }
 if (VAR_11 == 0)
  FUNC_3("Timeout in clock slewing !\n");


 if (VAR_9 > VAR_3)
  FUNC_1(VAR_9);

 VAR_3 = VAR_9;
 VAR_8 = VAR_2[VAR_9].frequency * 1000ul;

 return 0;
}
