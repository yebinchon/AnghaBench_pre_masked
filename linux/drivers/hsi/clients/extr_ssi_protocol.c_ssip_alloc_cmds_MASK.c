
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ssi_protocol {int cmdqueue; int channel_id_cmd; } ;
struct TYPE_2__ {int sgl; } ;
struct hsi_msg {int link; int channel; TYPE_1__ sgt; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 struct hsi_msg* FUNC_0 (int,int ) ;
 int FUNC_1 (struct hsi_msg*) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (struct ssi_protocol*) ;

__attribute__((used)) static int FUNC_6(struct ssi_protocol *VAR_3)
{
 struct hsi_msg *VAR_4;
 u32 *VAR_5;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_4 = FUNC_0(1, VAR_1);
  if (!VAR_4)
   goto out;
  VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
  if (!VAR_5) {
   FUNC_1(VAR_4);
   goto out;
  }
  FUNC_4(VAR_4->sgt.sgl, VAR_5, sizeof(*VAR_5));
  VAR_4->channel = VAR_3->channel_id_cmd;
  FUNC_3(&VAR_4->link, &VAR_3->cmdqueue);
 }

 return 0;
out:
 FUNC_5(VAR_3);

 return -VAR_0;
}
