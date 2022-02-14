
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mhl3_burst_header {int total_entries; int sequence_index; int id; } ;
typedef enum mhl_burst_id { ____Placeholder_mhl_burst_id } mhl_burst_id ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mhl3_burst_header *VAR_0,
 enum mhl_burst_id VAR_1)
{
 VAR_0->id = FUNC_0(VAR_1);
 VAR_0->total_entries = 1;
 VAR_0->sequence_index = 1;
}
