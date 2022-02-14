
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rxe_qp {int dummy; } ;
struct rxe_pkt_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct sk_buff* FUNC_1 (struct rxe_qp*,struct rxe_pkt_info*,struct rxe_pkt_info*,int ,int ,int ,int ,int *) ;
 int FUNC_2 (struct rxe_qp*,struct rxe_pkt_info*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct rxe_qp *VAR_2, struct rxe_pkt_info *VAR_3,
      u8 VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;
 struct rxe_pkt_info VAR_7;
 struct sk_buff *VAR_8;

 VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_7, VAR_1,
     0, VAR_5, VAR_4, ((void*)0));
 if (!VAR_8) {
  VAR_6 = -VAR_0;
  goto err1;
 }

 VAR_6 = FUNC_2(VAR_2, &VAR_7, VAR_8);
 if (VAR_6)
  FUNC_0("Failed sending ack\n");

err1:
 return VAR_6;
}
