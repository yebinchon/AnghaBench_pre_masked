
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsxx_card_cfg {int data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct rsxx_card_cfg *VAR_0)
{
 u32 *VAR_1 = (u32 *) &VAR_0->data;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < (sizeof(VAR_0->data) / 4); VAR_2++)
  VAR_1[VAR_2] = FUNC_0(VAR_1[VAR_2]);
}
