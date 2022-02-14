
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct iser_conn {struct iscsi_endpoint* ep; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct iscsi_endpoint* FUNC_0 (int) ;
 int VAR_1 ;
 struct iscsi_endpoint* FUNC_1 (int ) ;
 int FUNC_2 (struct iscsi_endpoint*) ;
 int FUNC_3 (struct iser_conn*) ;
 int FUNC_4 (struct iser_conn*,int *,struct sockaddr*,int) ;
 struct iser_conn* FUNC_5 (int,int ) ;

__attribute__((used)) static struct iscsi_endpoint *
FUNC_6(struct Scsi_Host *VAR_2, struct sockaddr *VAR_3,
        int VAR_4)
{
 int VAR_5;
 struct iser_conn *VAR_6;
 struct iscsi_endpoint *VAR_7;

 VAR_7 = FUNC_1(0);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_5 = -VAR_0;
  goto failure;
 }

 VAR_7->dd_data = VAR_6;
 VAR_6->ep = VAR_7;
 FUNC_3(VAR_6);

 VAR_5 = FUNC_4(VAR_6, ((void*)0), VAR_3, VAR_4);
 if (VAR_5)
  goto failure;

 return VAR_7;
failure:
 FUNC_2(VAR_7);
 return FUNC_0(VAR_5);
}
