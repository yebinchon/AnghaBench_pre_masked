
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsi_msg {int cl; } ;
struct hsc_client_data {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct hsc_client_data* FUNC_1 (int ) ;
 int FUNC_2 (struct hsi_msg*) ;

__attribute__((used)) static void FUNC_3(struct hsi_msg *VAR_1)
{
 struct hsc_client_data *VAR_2 = FUNC_1(VAR_1->cl);

 FUNC_2(VAR_1);
 FUNC_0(VAR_0, &VAR_2->flags);
}
