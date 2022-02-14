
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_msg {int msg; } ;
struct sctp_nat_assoc {void* state; } ;
struct libalias {int dummy; } ;


 void* VAR_0 ;
 int FUNC_0 (struct libalias*) ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;



 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (struct libalias*,struct sctp_nat_assoc*,int ) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct libalias *VAR_5, int VAR_6,struct sctp_nat_assoc *VAR_7, struct sctp_nat_msg *VAR_8)
{
 switch (VAR_8->msg) {
 case 128:
  VAR_7->state = VAR_0;
  if (VAR_4 > 0)
   FUNC_2(VAR_5, VAR_7, FUNC_1(VAR_5));
  else
   VAR_7->state = VAR_3;
  return (VAR_2);
 case 129:
  VAR_7->state = VAR_0;
  FUNC_2(VAR_5, VAR_7, FUNC_0(VAR_5));
  return (VAR_2);
 case 130:
  VAR_7->state = VAR_3;
  return (VAR_2);
 default:
  return (VAR_1);
 }
 return (VAR_1);
}
