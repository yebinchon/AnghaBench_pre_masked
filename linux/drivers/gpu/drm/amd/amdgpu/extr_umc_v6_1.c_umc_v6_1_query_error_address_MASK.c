
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ras_err_data {int* err_addr; size_t err_addr_cnt; } ;
struct amdgpu_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int,int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static void FUNC_8(struct amdgpu_device *VAR_10,
      struct ras_err_data *VAR_11,
      uint32_t VAR_12, uint32_t VAR_13)
{
 uint32_t VAR_14, VAR_15;
 uint64_t VAR_16, VAR_17;

 VAR_15 =
  FUNC_6(VAR_6, 0, VAR_8);


 if (!VAR_11->err_addr) {

  FUNC_7(VAR_15 + VAR_12, 0x0ULL);
  return;
 }

 VAR_16 = FUNC_5(VAR_15 + VAR_12);


 if (FUNC_3(VAR_16, VAR_4, VAR_7) == 1 &&
     (FUNC_3(VAR_16, VAR_4, VAR_5) == 1 ||
     FUNC_3(VAR_16, VAR_4, VAR_0) == 1)) {
  VAR_17 = FUNC_4(VAR_9 + VAR_12 * 4);


  VAR_14 = FUNC_3(VAR_17, VAR_3, VAR_2);
  VAR_17 = FUNC_3(VAR_17, VAR_3, VAR_1);
  VAR_17 &= ~((0x1ULL << VAR_14) - 1);


  VAR_11->err_addr[VAR_11->err_addr_cnt] =
      FUNC_1(VAR_17) |
      FUNC_0(VAR_13) |
      FUNC_2(VAR_17);

  VAR_11->err_addr_cnt++;
 }


 FUNC_7(VAR_15 + VAR_12, 0x0ULL);
}
