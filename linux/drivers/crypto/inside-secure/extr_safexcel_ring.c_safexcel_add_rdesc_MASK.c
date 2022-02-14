
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct safexcel_result_desc {int first_seg; int last_seg; int data_hi; int data_lo; int particle_size; } ;
struct safexcel_crypto_priv {TYPE_1__* ring; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int rdr; } ;


 scalar_t__ FUNC_0 (struct safexcel_result_desc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct safexcel_result_desc*,int ,int) ;
 struct safexcel_result_desc* FUNC_3 (struct safexcel_crypto_priv*,int *) ;
 int FUNC_4 (int ) ;

struct safexcel_result_desc *FUNC_5(struct safexcel_crypto_priv *VAR_0,
      int VAR_1,
      bool VAR_2, bool VAR_3,
      dma_addr_t VAR_4, u32 VAR_5)
{
 struct safexcel_result_desc *VAR_6;

 VAR_6 = FUNC_3(VAR_0, &VAR_0->ring[VAR_1].rdr);
 if (FUNC_0(VAR_6))
  return VAR_6;

 FUNC_2(VAR_6, 0, sizeof(struct safexcel_result_desc));

 VAR_6->first_seg = VAR_2;
 VAR_6->last_seg = VAR_3;
 VAR_6->particle_size = VAR_5;
 VAR_6->data_lo = FUNC_1(VAR_4);
 VAR_6->data_hi = FUNC_4(VAR_4);

 return VAR_6;
}
