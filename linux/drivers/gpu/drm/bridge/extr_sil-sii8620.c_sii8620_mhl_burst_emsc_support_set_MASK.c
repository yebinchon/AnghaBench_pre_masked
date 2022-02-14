
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mhl_burst_emsc_support {int num_entries; int * burst_id; int hdr; } ;
typedef enum mhl_burst_id { ____Placeholder_mhl_burst_id } mhl_burst_id ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct mhl_burst_emsc_support *VAR_1,
 enum mhl_burst_id VAR_2)
{
 FUNC_1(&VAR_1->hdr, VAR_0);
 VAR_1->num_entries = 1;
 VAR_1->burst_id[0] = FUNC_0(VAR_2);
}
