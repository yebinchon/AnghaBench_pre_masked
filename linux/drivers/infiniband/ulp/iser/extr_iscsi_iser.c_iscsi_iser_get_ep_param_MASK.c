
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct TYPE_8__ {TYPE_3__* cma_id; } ;
struct iser_conn {TYPE_4__ ib_conn; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
typedef enum iscsi_param { ____Placeholder_iscsi_param } iscsi_param ;
struct TYPE_5__ {int dst_addr; } ;
struct TYPE_6__ {TYPE_1__ addr; } ;
struct TYPE_7__ {TYPE_2__ route; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct sockaddr_storage*,int,char*) ;

__attribute__((used)) static int FUNC_1(struct iscsi_endpoint *VAR_2,
       enum iscsi_param VAR_3, char *VAR_4)
{
 struct iser_conn *VAR_5 = VAR_2->dd_data;

 switch (VAR_3) {
 case 128:
 case 129:
  if (!VAR_5 || !VAR_5->ib_conn.cma_id)
   return -VAR_1;

  return FUNC_0((struct sockaddr_storage *)
    &VAR_5->ib_conn.cma_id->route.addr.dst_addr,
    VAR_3, VAR_4);
 default:
  break;
 }
 return -VAR_0;
}
