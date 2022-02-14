
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssi_protocol {scalar_t__ main_state; int lock; int tx_wd; } ;
struct hsi_client {int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 struct ssi_protocol* FUNC_3 (struct hsi_client*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct hsi_client *VAR_4, u32 VAR_5)
{
 struct ssi_protocol *VAR_6 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_5) != VAR_1)
  FUNC_2(&VAR_4->device, "boot info resp verid mismatch\n");

 FUNC_6(&VAR_6->lock);
 if (VAR_6->main_state != VAR_0)

  FUNC_4(&VAR_6->tx_wd, VAR_3 + FUNC_5(VAR_2));
 else
  FUNC_1(&VAR_4->device, "boot info resp ignored M(%d)\n",
       VAR_6->main_state);
 FUNC_7(&VAR_6->lock);
}
