
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_node {int dummy; } ;
struct fw_card {scalar_t__ bm_retries; } ;


 int VAR_0 ;
 int FUNC_0 (struct fw_card*,struct fw_node*,int ) ;
 int FUNC_1 (struct fw_node*) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_1,
        struct fw_node *VAR_2, struct fw_node *VAR_3)
{
 FUNC_0(VAR_1, VAR_2, VAR_0);
 FUNC_1(VAR_2);


 VAR_1->bm_retries = 0;
}
