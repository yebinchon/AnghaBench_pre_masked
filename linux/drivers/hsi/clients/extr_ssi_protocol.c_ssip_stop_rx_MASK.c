
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_protocol {scalar_t__ main_state; int lock; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 struct ssi_protocol* FUNC_1 (struct hsi_client*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ssi_protocol*,int ) ;

__attribute__((used)) static void FUNC_6(struct hsi_client *VAR_2)
{
 struct ssi_protocol *VAR_3 = FUNC_1(VAR_2);

 FUNC_0(&VAR_2->device, "RX stop M(%d)\n", VAR_3->main_state);
 FUNC_3(&VAR_3->lock);
 if (FUNC_2(VAR_3->main_state == VAR_0))
  FUNC_5(VAR_3, VAR_1);
 FUNC_4(&VAR_3->lock);
}
