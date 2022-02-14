
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_device {int asic_type; int rev_id; TYPE_1__* pdev; } ;
struct TYPE_2__ {int device; } ;


 int FUNC_0 () ;






 int FUNC_1 (char*) ;
 int FUNC_2 (struct amdgpu_device*,char const*) ;
 int FUNC_3 (struct amdgpu_device*,char const*) ;
 int FUNC_4 (struct amdgpu_device*,char const*) ;

__attribute__((used)) static int FUNC_5(struct amdgpu_device *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 FUNC_1("\n");

 switch (VAR_0->asic_type) {
 case 130:
  VAR_1 = "vega10";
  break;
 case 129:
  VAR_1 = "vega12";
  break;
 case 128:
  VAR_1 = "vega20";
  break;
 case 132:
  if (VAR_0->rev_id >= 8)
   VAR_1 = "raven2";
  else if (VAR_0->pdev->device == 0x15d8)
   VAR_1 = "picasso";
  else
   VAR_1 = "raven";
  break;
 case 133:
  VAR_1 = "arcturus";
  break;
 case 131:
  VAR_1 = "renoir";
  break;
 default:
  FUNC_0();
 }


 if (VAR_0->asic_type != 133) {
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_4(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return VAR_2;
}
