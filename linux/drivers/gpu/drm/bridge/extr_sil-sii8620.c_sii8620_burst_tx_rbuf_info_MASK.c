
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sii8620 {int dummy; } ;
struct mhl_burst_blk_rcv_buffer_info {int size; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct mhl_burst_blk_rcv_buffer_info* FUNC_2 (struct sii8620*,int) ;

__attribute__((used)) static void FUNC_3(struct sii8620 *VAR_1, int VAR_2)
{
 struct mhl_burst_blk_rcv_buffer_info *VAR_3 =
  FUNC_2(VAR_1, sizeof(*VAR_3));
 if (!VAR_3)
  return;

 VAR_3->id = FUNC_0(VAR_0);
 VAR_3->size = FUNC_1(VAR_2);
}
