
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_instances; TYPE_1__* instance; } ;
struct amdgpu_device {int asic_type; TYPE_2__ sdma; int dev; } ;
typedef int fw_name ;
struct TYPE_3__ {int * fw; } ;


 int FUNC_0 () ;





 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **,char*,int ) ;
 int FUNC_6 (char*,int,char*,char const*) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_0)
{
 const char *VAR_1;
 char VAR_2[30];
 int VAR_3 = 0, VAR_4;

 FUNC_1("\n");

 switch (VAR_0->asic_type) {
 case 132:
  VAR_1 = "bonaire";
  break;
 case 131:
  VAR_1 = "hawaii";
  break;
 case 129:
  VAR_1 = "kaveri";
  break;
 case 130:
  VAR_1 = "kabini";
  break;
 case 128:
  VAR_1 = "mullins";
  break;
 default: FUNC_0();
 }

 for (VAR_4 = 0; VAR_4 < VAR_0->sdma.num_instances; VAR_4++) {
  if (VAR_4 == 0)
   FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_sdma.bin", VAR_1);
  else
   FUNC_6(VAR_2, sizeof(VAR_2), "amdgpu/%s_sdma1.bin", VAR_1);
  VAR_3 = FUNC_5(&VAR_0->sdma.instance[VAR_4].fw, VAR_2, VAR_0->dev);
  if (VAR_3)
   goto out;
  VAR_3 = FUNC_2(VAR_0->sdma.instance[VAR_4].fw);
 }
out:
 if (VAR_3) {
  FUNC_3("cik_sdma: Failed to load firmware \"%s\"\n", VAR_2);
  for (VAR_4 = 0; VAR_4 < VAR_0->sdma.num_instances; VAR_4++) {
   FUNC_4(VAR_0->sdma.instance[VAR_4].fw);
   VAR_0->sdma.instance[VAR_4].fw = ((void*)0);
  }
 }
 return VAR_3;
}
