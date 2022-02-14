
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adf_etr_ring_debug_entry {int debug; int ring_name; } ;
struct adf_etr_ring_data {int ring_number; struct adf_etr_ring_debug_entry* ring_debug; TYPE_1__* bank; } ;
typedef int entry_name ;
struct TYPE_2__ {int bank_debug_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,struct adf_etr_ring_data*,int *) ;
 struct adf_etr_ring_debug_entry* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (int ,char const*,int) ;

int FUNC_4(struct adf_etr_ring_data *VAR_4, const char *VAR_5)
{
 struct adf_etr_ring_debug_entry *VAR_6;
 char VAR_7[8];

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_6->ring_name, VAR_5, sizeof(VAR_6->ring_name));
 FUNC_2(VAR_7, sizeof(VAR_7), "ring_%02d",
   VAR_4->ring_number);

 VAR_6->debug = FUNC_0(VAR_7, VAR_2,
      VAR_4->bank->bank_debug_dir,
      VAR_4, &VAR_3);
 VAR_4->ring_debug = VAR_6;
 return 0;
}
