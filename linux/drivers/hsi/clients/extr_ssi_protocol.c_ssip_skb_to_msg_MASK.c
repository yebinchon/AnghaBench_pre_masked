
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct scatterlist {int dummy; } ;
struct TYPE_3__ {unsigned int nents; struct scatterlist* sgl; } ;
struct hsi_msg {TYPE_1__ sgt; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 int FUNC_2 (struct scatterlist*,int ,int ) ;
 int FUNC_3 (struct scatterlist*,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sk_buff*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct sk_buff *VAR_0, struct hsi_msg *VAR_1)
{
 skb_frag_t *VAR_2;
 struct scatterlist *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1->sgt.nents != (unsigned int)(FUNC_8(VAR_0)->nr_frags + 1));

 VAR_3 = VAR_1->sgt.sgl;
 FUNC_2(VAR_3, VAR_0->data, FUNC_7(VAR_0));
 for (VAR_4 = 0; VAR_4 < FUNC_8(VAR_0)->nr_frags; VAR_4++) {
  VAR_3 = FUNC_1(VAR_3);
  FUNC_0(!VAR_3);
  VAR_2 = &FUNC_8(VAR_0)->frags[VAR_4];
  FUNC_3(VAR_3, FUNC_5(VAR_2), FUNC_6(VAR_2),
    FUNC_4(VAR_2));
 }
}
