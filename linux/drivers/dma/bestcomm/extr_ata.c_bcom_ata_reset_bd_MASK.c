
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcom_task {int num_bd; int bd_size; int tasknum; scalar_t__ outdex; scalar_t__ index; int bd; } ;
struct bcom_ata_var {int bd_base; int bd_start; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int) ;

void FUNC_2(struct bcom_task *VAR_0)
{
 struct bcom_ata_var *VAR_1;


 FUNC_1(VAR_0->bd, 0x00, VAR_0->num_bd * VAR_0->bd_size);

 VAR_0->index = 0;
 VAR_0->outdex = 0;

 VAR_1 = (struct bcom_ata_var *) FUNC_0(VAR_0->tasknum);
 VAR_1->bd_start = VAR_1->bd_base;
}
