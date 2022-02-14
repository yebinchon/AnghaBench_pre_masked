
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct safexcel_token {int dummy; } ;
struct safexcel_crypto_priv {scalar_t__ version; TYPE_1__* ring; } ;
struct TYPE_4__ {int packet_length; int options; int context_lo; int refresh; void* context_hi; scalar_t__ token; } ;
struct safexcel_command_desc {int first_seg; int last_seg; int data_lo; TYPE_2__ control_data; void* data_hi; scalar_t__ particle_size; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_3__ {int cdr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (struct safexcel_command_desc*) ;
 int FUNC_2 (struct safexcel_token*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct safexcel_command_desc*,int ,int) ;
 struct safexcel_command_desc* FUNC_5 (struct safexcel_crypto_priv*,int *) ;
 void* FUNC_6 (scalar_t__) ;

struct safexcel_command_desc *FUNC_7(struct safexcel_crypto_priv *VAR_7,
       int VAR_8,
       bool VAR_9, bool VAR_10,
       dma_addr_t VAR_11, u32 VAR_12,
       u32 VAR_13,
       dma_addr_t VAR_14) {
 struct safexcel_command_desc *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_5(VAR_7, &VAR_7->ring[VAR_8].cdr);
 if (FUNC_1(VAR_15))
  return VAR_15;

 FUNC_4(VAR_15, 0, sizeof(struct safexcel_command_desc));

 VAR_15->first_seg = VAR_9;
 VAR_15->last_seg = VAR_10;
 VAR_15->particle_size = VAR_12;
 VAR_15->data_lo = FUNC_3(VAR_11);
 VAR_15->data_hi = FUNC_6(VAR_11);

 if (VAR_9 && VAR_14) {
  struct safexcel_token *VAR_17 =
   (struct safexcel_token *)VAR_15->control_data.token;







  VAR_15->control_data.packet_length = VAR_13 ?: 1;
  VAR_15->control_data.options = VAR_5 |
           VAR_3 |
           VAR_4;
  VAR_15->control_data.context_lo =
   (FUNC_3(VAR_14) & FUNC_0(31, 2)) >> 2;
  VAR_15->control_data.context_hi = FUNC_6(VAR_14);

  if (VAR_7->version == VAR_0 ||
      VAR_7->version == VAR_1)
   VAR_15->control_data.options |= VAR_6;


  VAR_15->control_data.refresh = 2;

  for (VAR_16 = 0; VAR_16 < VAR_2; VAR_16++)
   FUNC_2(&VAR_17[VAR_16]);
 }

 return VAR_15;
}
