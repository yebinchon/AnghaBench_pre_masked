
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_msg {int dummy; } ;
struct sctp_nat_assoc {int state; } ;
struct libalias {int dummy; } ;


 int FUNC_0 (struct libalias*,int,struct sctp_nat_assoc*,struct sctp_nat_msg*) ;
 int FUNC_1 (struct libalias*,int,struct sctp_nat_assoc*,struct sctp_nat_msg*) ;
 int FUNC_2 (struct libalias*,int,struct sctp_nat_assoc*,struct sctp_nat_msg*) ;
 int FUNC_3 (struct libalias*,int,struct sctp_nat_assoc*,struct sctp_nat_msg*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_4 (struct libalias*,int,struct sctp_nat_assoc*,struct sctp_nat_msg*) ;

__attribute__((used)) static int
FUNC_5(struct libalias *VAR_3, int VAR_4, struct sctp_nat_msg *VAR_5, struct sctp_nat_assoc *VAR_6)
{
 int VAR_7;

 switch (VAR_6->state) {
 case 131:
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_6, VAR_5);
  if (VAR_7 != VAR_0) {
   VAR_6->state = VAR_2;
  }
  return (VAR_7);
 case 129:
  return (FUNC_3(VAR_3, VAR_4, VAR_6, VAR_5));
 case 130:
  return (FUNC_2(VAR_3, VAR_4, VAR_6, VAR_5));
 case 128:
  return (FUNC_4(VAR_3, VAR_4, VAR_6, VAR_5));
 case 132:
  return (FUNC_0(VAR_3, VAR_4, VAR_6, VAR_5));
 }
 return (VAR_1);
}
