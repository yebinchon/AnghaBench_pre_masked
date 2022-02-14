
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssi_protocol {int channel_id_data; } ;
struct sk_buff {int dummy; } ;
struct hsi_msg {struct sk_buff* context; int channel; int destructor; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ nr_frags; } ;


 struct hsi_msg* FUNC_0 (scalar_t__,int ) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_2 (struct sk_buff*,struct hsi_msg*) ;

__attribute__((used)) static struct hsi_msg *FUNC_3(struct ssi_protocol *VAR_1,
     struct sk_buff *VAR_2, gfp_t VAR_3)
{
 struct hsi_msg *VAR_4;

 VAR_4 = FUNC_0(FUNC_1(VAR_2)->nr_frags + 1, VAR_3);
 if (!VAR_4)
  return ((void*)0);
 FUNC_2(VAR_2, VAR_4);
 VAR_4->destructor = VAR_0;
 VAR_4->channel = VAR_1->channel_id_data;
 VAR_4->context = VAR_2;

 return VAR_4;
}
