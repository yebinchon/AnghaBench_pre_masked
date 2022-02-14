
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_packet {int dummy; } ;
struct fw_ohci {int at_response_ctx; } ;
struct fw_card {int dummy; } ;


 int FUNC_0 (int *,struct fw_packet*) ;
 struct fw_ohci* FUNC_1 (struct fw_card*) ;

__attribute__((used)) static void FUNC_2(struct fw_card *VAR_0, struct fw_packet *VAR_1)
{
 struct fw_ohci *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->at_response_ctx, VAR_1);
}
