
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_l2cap {int l2cap_len; scalar_t__ l2cap_psm; int l2cap_bdaddr; scalar_t__ l2cap_cid; int l2cap_bdaddr_type; int l2cap_family; } ;
struct sockaddr {int dummy; } ;
typedef int l2addr ;
typedef scalar_t__ int32_t ;
typedef int bdaddr_p ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,struct sockaddr*,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,struct sockaddr*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,...) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_8(bdaddr_p VAR_10, uint16_t VAR_11)
{
 struct sockaddr_l2cap VAR_12;
 int32_t VAR_13, VAR_14;

 VAR_13 = FUNC_7(VAR_7, VAR_8, VAR_2);
 if (VAR_13 < 0)
  return (-1);

 VAR_14 = FUNC_3(VAR_13, VAR_4);
 if (VAR_14 < 0) {
  FUNC_1(VAR_13);
  return (-1);
 }

 if (FUNC_3(VAR_13, VAR_5, (VAR_14|VAR_6)) < 0) {
  FUNC_1(VAR_13);
  return (-1);
 }

 VAR_12.l2cap_len = sizeof(VAR_12);
 VAR_12.l2cap_family = VAR_0;
 FUNC_6(&VAR_12.l2cap_bdaddr, 0, sizeof(VAR_12.l2cap_bdaddr));
 VAR_12.l2cap_psm = 0;
 VAR_12.l2cap_bdaddr_type = VAR_1;
 VAR_12.l2cap_cid = 0;

 if (FUNC_0(VAR_13, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0) {
  FUNC_1(VAR_13);
  return (-1);
 }

 FUNC_5(&VAR_12.l2cap_bdaddr, VAR_10, sizeof(VAR_12.l2cap_bdaddr));
 VAR_12.l2cap_psm = FUNC_4(VAR_11);

 if (FUNC_2(VAR_13, (struct sockaddr *) &VAR_12, sizeof(VAR_12)) < 0 &&
     VAR_9 != VAR_3) {
  FUNC_1(VAR_13);
  return (-1);
 }

 return (VAR_13);
}
