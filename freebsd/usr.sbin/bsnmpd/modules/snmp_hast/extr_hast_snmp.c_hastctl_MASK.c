
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proto_conn {int dummy; } ;
struct nv {int dummy; } ;
struct hastd_config {int hc_controladdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct proto_conn*,struct nv**) ;
 int FUNC_1 (int *,struct proto_conn*,struct nv*,int *,int ) ;
 int FUNC_2 (struct nv*) ;
 int FUNC_3 (struct nv*,char*) ;
 int FUNC_4 (struct nv*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int,struct proto_conn**) ;
 int FUNC_7 (struct proto_conn*) ;
 int FUNC_8 (struct proto_conn*,int ) ;
 struct hastd_config* FUNC_9 (int ,int) ;

__attribute__((used)) static int
FUNC_10(struct nv *VAR_2, struct nv **VAR_3)
{
 struct hastd_config *VAR_4;
 struct proto_conn *VAR_5;
 struct nv *VAR_6;
 int VAR_7;

 VAR_4 = FUNC_9(VAR_1, 1);
 if (VAR_4 == ((void*)0))
  return (-1);


 if (FUNC_6(((void*)0), VAR_4->hc_controladdr, &VAR_5) == -1) {
  FUNC_5("Unable to setup control connection to %s",
      VAR_4->hc_controladdr);
  return (-1);
 }

 if (FUNC_8(VAR_5, VAR_0) == -1) {
  FUNC_5("Unable to connect to hastd via %s",
      VAR_4->hc_controladdr);
  FUNC_7(VAR_5);
  return (-1);
 }

 if (FUNC_1(((void*)0), VAR_5, VAR_2, ((void*)0), 0) == -1) {
  FUNC_5("Unable to send command to hastd via %s",
      VAR_4->hc_controladdr);
  FUNC_7(VAR_5);
  return (-1);
 }

 if (FUNC_0(VAR_5, &VAR_6) == -1) {
  FUNC_5("cannot receive reply from hastd via %s",
      VAR_4->hc_controladdr);
  FUNC_7(VAR_5);
  return (-1);
 }
 FUNC_7(VAR_5);
 VAR_7 = FUNC_3(VAR_6, "error");
 if (VAR_7 != 0) {
  FUNC_5("Error %d received from hastd.", VAR_7);
  FUNC_2(VAR_6);
  return (-1);
 }
 FUNC_4(VAR_6, 0);
 *VAR_3 = VAR_6;
 return (0);
}
