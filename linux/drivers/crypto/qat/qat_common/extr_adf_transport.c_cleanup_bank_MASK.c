
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct adf_hw_device_data {int tx_rings_mask; } ;
struct adf_etr_ring_data {int inflights; } ;
struct adf_etr_bank_data {int ring_mask; struct adf_etr_ring_data* rings; struct adf_accel_dev* accel_dev; } ;
struct adf_accel_dev {struct adf_hw_device_data* hw_device; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct adf_etr_bank_data*) ;
 int FUNC_1 (struct adf_etr_ring_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct adf_etr_bank_data*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct adf_etr_bank_data *VAR_1)
{
 uint32_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct adf_accel_dev *VAR_3 = VAR_1->accel_dev;
  struct adf_hw_device_data *VAR_4 = VAR_3->hw_device;
  struct adf_etr_ring_data *VAR_5 = &VAR_1->rings[VAR_2];

  if (VAR_1->ring_mask & (1 << VAR_2))
   FUNC_1(VAR_5);

  if (VAR_4->tx_rings_mask & (1 << VAR_2))
   FUNC_2(VAR_5->inflights);
 }
 FUNC_0(VAR_1);
 FUNC_3(VAR_1, 0, sizeof(*VAR_1));
}
