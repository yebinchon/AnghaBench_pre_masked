
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int pkey_tbl_len; int gid_tbl_len; } ;
struct rxe_port {int* pkey_tbl; int port_lock; int port_guid; TYPE_2__ attr; } ;
struct rxe_dev {TYPE_1__* ndev; struct rxe_port port; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ) ;
 int* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct rxe_port*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct rxe_dev *VAR_3)
{
 struct rxe_port *VAR_4 = &VAR_3->port;

 FUNC_2(VAR_4);

 if (!VAR_4->attr.pkey_tbl_len || !VAR_4->attr.gid_tbl_len)
  return -VAR_0;

 VAR_4->pkey_tbl = FUNC_1(VAR_4->attr.pkey_tbl_len,
   sizeof(*VAR_4->pkey_tbl), VAR_2);

 if (!VAR_4->pkey_tbl)
  return -VAR_1;

 VAR_4->pkey_tbl[0] = 0xffff;
 FUNC_0((unsigned char *)&VAR_4->port_guid,
       VAR_3->ndev->dev_addr);

 FUNC_3(&VAR_4->port_lock);

 return 0;
}
