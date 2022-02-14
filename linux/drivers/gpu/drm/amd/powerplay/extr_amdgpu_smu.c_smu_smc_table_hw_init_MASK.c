
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smu_context {int default_power_limit; struct amdgpu_device* adev; } ;
struct amdgpu_device {scalar_t__ asic_type; scalar_t__ in_suspend; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smu_context*) ;
 int FUNC_2 (struct smu_context*) ;
 int FUNC_3 (struct smu_context*) ;
 int FUNC_4 (struct smu_context*) ;
 int FUNC_5 (struct smu_context*,int *,int) ;
 int FUNC_6 (struct smu_context*) ;
 int FUNC_7 (struct smu_context*,int ) ;
 int FUNC_8 (struct smu_context*) ;
 int FUNC_9 (struct smu_context*) ;
 scalar_t__ FUNC_10 (struct smu_context*) ;
 int FUNC_11 (struct smu_context*) ;
 int FUNC_12 (struct smu_context*) ;
 int FUNC_13 (struct smu_context*) ;
 int FUNC_14 (struct smu_context*) ;
 int FUNC_15 (struct smu_context*) ;
 int FUNC_16 (struct smu_context*) ;
 int FUNC_17 (struct smu_context*,int) ;
 int FUNC_18 (struct smu_context*) ;
 int FUNC_19 (struct smu_context*) ;
 int FUNC_20 (struct smu_context*) ;
 int FUNC_21 (struct smu_context*,int) ;
 int FUNC_22 (struct smu_context*) ;

__attribute__((used)) static int FUNC_23(struct smu_context *VAR_1,
     bool VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_1->adev;
 int VAR_4;

 if (FUNC_10(VAR_1) && VAR_3->in_suspend) {
  FUNC_0("dpm has been enabled\n");
  return 0;
 }

 if (VAR_3->asic_type != VAR_0) {
  VAR_4 = FUNC_7(VAR_1, 0);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_2) {

  VAR_4 = FUNC_6(VAR_1);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_20(VAR_1);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_4(VAR_1);
  if (VAR_4)
   return VAR_4;





  VAR_4 = FUNC_2(VAR_1);
  if (VAR_4)
   return VAR_4;




  VAR_4 = FUNC_8(VAR_1);
  if (VAR_4)
   return VAR_4;






  VAR_4 = FUNC_13(VAR_1);
  if (VAR_4)
   return VAR_4;





  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4)
   return VAR_4;
 }







 VAR_4 = FUNC_22(VAR_1);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_16(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_21(VAR_1, 1);
 if (VAR_4)
  return VAR_4;

 if (VAR_3->asic_type != VAR_0) {
  VAR_4 = FUNC_12(VAR_1);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_11(VAR_1);
  if (VAR_4)
   return VAR_4;





  VAR_4 = FUNC_18(VAR_1);
  if (VAR_4)
   return VAR_4;
 }






 if (VAR_2) {
  VAR_4 = FUNC_14(VAR_1);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_9(VAR_1);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_17(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 if (VAR_2) {
  VAR_4 = FUNC_15(VAR_1);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_5(VAR_1, &VAR_1->default_power_limit, 1);
  if (VAR_4)
   return VAR_4;
 }




 VAR_4 = FUNC_19(VAR_1);

 if (!FUNC_10(VAR_1))
  FUNC_0("dpm has been disabled\n");

 return VAR_4;
}
