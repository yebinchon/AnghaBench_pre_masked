
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fw_dump {int dump_registered; int fadump_enabled; int fadump_supported; } ;
typedef int s64 ;
struct TYPE_4__ {int region_cnt; scalar_t__ registered_regions; TYPE_1__* rgn; } ;
struct TYPE_3__ {int size; int dest; int src; } ;


 int VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (struct fw_dump*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct fw_dump *VAR_3)
{
 s64 VAR_4 = 130;
 int VAR_5, VAR_6 = -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_2->region_cnt; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1,
           VAR_2->rgn[VAR_5].src,
           VAR_2->rgn[VAR_5].dest,
           VAR_2->rgn[VAR_5].size);
  if (VAR_4 != 128)
   break;

  VAR_2->registered_regions++;
 }

 switch (VAR_4) {
 case 128:
  FUNC_3("Registration is successful!\n");
  VAR_3->dump_registered = 1;
  VAR_6 = 0;
  break;
 case 129:

  FUNC_4("%d regions could not be registered for MPIPL as MAX limit is reached!\n",
   (VAR_2->region_cnt - VAR_2->registered_regions));
  VAR_3->dump_registered = 1;
  VAR_6 = 0;
  break;
 case 130:
  FUNC_2("Failed to register. Parameter Error(%lld).\n", VAR_4);
  break;
 case 131:
  FUNC_2("Support not available.\n");
  VAR_3->fadump_supported = 0;
  VAR_3->fadump_enabled = 0;
  break;
 default:
  FUNC_2("Failed to register. Unknown Error(%lld).\n", VAR_4);
  break;
 }





 if ((VAR_6 < 0) && (VAR_2->registered_regions > 0))
  FUNC_0(VAR_3);

 return VAR_6;
}
