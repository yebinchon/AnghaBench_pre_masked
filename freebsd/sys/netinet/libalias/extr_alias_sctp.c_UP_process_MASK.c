
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_msg {int msg; } ;
struct sctp_nat_assoc {int num_Gaddr; int state; } ;
struct libalias {int dummy; } ;


 int FUNC_0 (struct sctp_nat_msg*,struct sctp_nat_assoc*,int) ;
 int FUNC_1 (struct libalias*,struct sctp_nat_msg*,int) ;
 int FUNC_2 (struct sctp_nat_msg*,struct sctp_nat_assoc*,int) ;


 int VAR_0 ;
 int FUNC_3 (struct libalias*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_4 (struct libalias*) ;
 int FUNC_5 (struct libalias*,struct sctp_nat_assoc*,int ) ;

__attribute__((used)) static int
FUNC_6(struct libalias *VAR_5, int VAR_6, struct sctp_nat_assoc *VAR_7, struct sctp_nat_msg *VAR_8)
{
 switch (VAR_8->msg) {
 case 128:
  VAR_7->state = VAR_0;
  FUNC_5(VAR_5,VAR_7, FUNC_3(VAR_5));
  return (VAR_2);
 case 130:
  VAR_7->state = VAR_3;
  return (VAR_2);
 case 129:
  if ((VAR_6 == VAR_4) && VAR_7->num_Gaddr)
   switch (FUNC_1(VAR_5,VAR_8,VAR_6)) {
   case 132:
    FUNC_0(VAR_8, VAR_7, VAR_6);
    break;
   case 131:
    FUNC_2(VAR_8, VAR_7, VAR_6);
    break;
   }
 default:
  FUNC_5(VAR_5,VAR_7, FUNC_4(VAR_5));
  return (VAR_2);
 }
 return (VAR_1);
}
