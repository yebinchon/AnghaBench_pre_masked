
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sockaddr {int dummy; } ;
struct sctp_ifa {int dummy; } ;


 int VAR_0 ;
 struct sctp_ifa* FUNC_0 (struct sockaddr*,int ,int ) ;

int
FUNC_1(struct sockaddr *VAR_1, uint32_t VAR_2)
{
 struct sctp_ifa *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_0);
 if (VAR_3) {
  return (1);
 } else {
  return (0);
 }
}
