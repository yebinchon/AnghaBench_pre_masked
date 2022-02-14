
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vi_mqd {scalar_t__ cp_mqd_base_addr_lo; scalar_t__ cp_hqd_eop_rptr; scalar_t__ cp_hqd_eop_wptr; scalar_t__ cp_hqd_eop_wptr_mem; } ;
struct amdgpu_device {scalar_t__ asic_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

int FUNC_2(struct amdgpu_device *VAR_12,
   struct vi_mqd *VAR_13)
{
 uint32_t VAR_14;
 uint32_t *VAR_15;


 VAR_15 = &VAR_13->cp_mqd_base_addr_lo;


 FUNC_1(VAR_1, VAR_2, 0);


 for (VAR_14 = VAR_10; VAR_14 <= VAR_4; VAR_14++)
  FUNC_0(VAR_14, VAR_15[VAR_14 - VAR_11]);






 if (VAR_12->asic_type != VAR_0) {
  FUNC_0(VAR_6, VAR_13->cp_hqd_eop_rptr);
  FUNC_0(VAR_7, VAR_13->cp_hqd_eop_wptr);
  FUNC_0(VAR_8, VAR_13->cp_hqd_eop_wptr_mem);
 }

 for (VAR_14 = VAR_5; VAR_14 <= VAR_9; VAR_14++)
  FUNC_0(VAR_14, VAR_15[VAR_14 - VAR_11]);


 for (VAR_14 = VAR_11; VAR_14 <= VAR_3; VAR_14++)
  FUNC_0(VAR_14, VAR_15[VAR_14 - VAR_11]);

 return 0;
}
