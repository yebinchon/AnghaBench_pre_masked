
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct cik_mqd {scalar_t__ cp_mqd_base_addr_lo; } ;
struct amdgpu_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ,int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

int FUNC_3(struct amdgpu_device *VAR_7, struct cik_mqd *VAR_8)
{
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t *VAR_11;


 VAR_11 = &VAR_8->cp_mqd_base_addr_lo;


 VAR_9 = FUNC_1(VAR_6);
 VAR_9 = FUNC_0(VAR_9, VAR_0, VAR_1, 0);
 FUNC_2(VAR_6, VAR_9);


 for (VAR_10 = VAR_3; VAR_10 <= VAR_5; VAR_10++)
  FUNC_2(VAR_10, VAR_11[VAR_10 - VAR_4]);


 for (VAR_10 = VAR_4; VAR_10 <= VAR_2; VAR_10++)
  FUNC_2(VAR_10, VAR_11[VAR_10 - VAR_4]);

 return 0;
}
