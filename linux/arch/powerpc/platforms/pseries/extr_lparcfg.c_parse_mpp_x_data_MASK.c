
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct hvcall_mpp_x_data {scalar_t__ pool_spurr_cycles; scalar_t__ pool_purr_cycles; scalar_t__ pool_coalesced_bytes; scalar_t__ coalesced_bytes; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct hvcall_mpp_x_data*) ;
 int FUNC_2 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_1)
{
 struct hvcall_mpp_x_data VAR_2;

 if (!FUNC_0(VAR_0))
  return;
 if (FUNC_1(&VAR_2))
  return;

 FUNC_2(VAR_1, "coalesced_bytes=%ld\n", VAR_2.coalesced_bytes);

 if (VAR_2.pool_coalesced_bytes)
  FUNC_2(VAR_1, "pool_coalesced_bytes=%ld\n",
      VAR_2.pool_coalesced_bytes);
 if (VAR_2.pool_purr_cycles)
  FUNC_2(VAR_1, "coalesce_pool_purr=%ld\n", VAR_2.pool_purr_cycles);
 if (VAR_2.pool_spurr_cycles)
  FUNC_2(VAR_1, "coalesce_pool_spurr=%ld\n", VAR_2.pool_spurr_cycles);
}
