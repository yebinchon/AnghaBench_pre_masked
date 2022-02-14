
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int sgl; } ;
struct hsi_msg {int link; struct cs_hsi_iface* context; int channel; TYPE_1__ sgt; } ;
struct cs_hsi_iface {int cmdqueue; } ;
struct TYPE_4__ {int channel_id_cmd; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (struct cs_hsi_iface*) ;
 struct hsi_msg* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hsi_msg*) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static int FUNC_7(struct cs_hsi_iface *VAR_4)
{
 struct hsi_msg *VAR_5;
 u32 *VAR_6;
 unsigned int VAR_7;

 FUNC_0(&VAR_4->cmdqueue);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = FUNC_2(1, VAR_2);
  if (!VAR_5)
   goto out;
  VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_2);
  if (!VAR_6) {
   FUNC_3(VAR_5);
   goto out;
  }
  FUNC_6(VAR_5->sgt.sgl, VAR_6, sizeof(*VAR_6));
  VAR_5->channel = VAR_3.channel_id_cmd;
  VAR_5->context = VAR_4;
  FUNC_5(&VAR_5->link, &VAR_4->cmdqueue);
 }

 return 0;

out:
 FUNC_1(VAR_4);
 return -VAR_1;
}
