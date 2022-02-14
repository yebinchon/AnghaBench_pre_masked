
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {size_t pkey_index; int qkey; } ;
struct rxe_qp {TYPE_2__ attr; } ;
struct TYPE_3__ {int pkey_tbl_len; } ;
struct rxe_port {int * pkey_tbl; TYPE_1__ attr; } ;
struct rxe_pkt_info {int pkey_index; scalar_t__ mask; } ;
struct rxe_dev {struct rxe_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rxe_pkt_info*) ;
 int FUNC_1 (struct rxe_pkt_info*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int,...) ;
 scalar_t__ FUNC_4 (struct rxe_qp*) ;
 int FUNC_5 (struct rxe_port*) ;
 int FUNC_6 (struct rxe_port*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct rxe_dev *VAR_4, struct rxe_pkt_info *VAR_5,
        u32 VAR_6, struct rxe_qp *VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 struct rxe_port *VAR_10 = &VAR_4->port;
 u16 VAR_11 = FUNC_0(VAR_5);

 VAR_5->pkey_index = 0;

 if (VAR_6 == 1) {
  for (VAR_8 = 0; VAR_8 < VAR_10->attr.pkey_tbl_len; VAR_8++) {
   if (FUNC_2(VAR_11, VAR_10->pkey_tbl[VAR_8])) {
    VAR_5->pkey_index = VAR_8;
    VAR_9 = 1;
    break;
   }
  }

  if (!VAR_9) {
   FUNC_3("bad pkey = 0x%x\n", VAR_11);
   FUNC_5(VAR_10);
   goto err1;
  }
 } else {
  if (FUNC_7(!FUNC_2(VAR_11,
      VAR_10->pkey_tbl[VAR_7->attr.pkey_index]
     ))) {
   FUNC_3("bad pkey = 0x%0x\n", VAR_11);
   FUNC_5(VAR_10);
   goto err1;
  }
  VAR_5->pkey_index = VAR_7->attr.pkey_index;
 }

 if ((FUNC_4(VAR_7) == VAR_3 || FUNC_4(VAR_7) == VAR_2) &&
     VAR_5->mask) {
  u32 VAR_12 = (VAR_6 == 1) ? VAR_1 : VAR_7->attr.qkey;

  if (FUNC_7(FUNC_1(VAR_5) != VAR_12)) {
   FUNC_3("bad qkey, got 0x%x expected 0x%x for qpn 0x%x\n",
         FUNC_1(VAR_5), VAR_12, VAR_6);
   FUNC_6(VAR_10);
   goto err1;
  }
 }

 return 0;

err1:
 return -VAR_0;
}
