
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_msg {int msg; } ;
struct sctp_nat_assoc {int TableRegister; void* state; } ;
struct libalias {int dummy; } ;


 int FUNC_0 (struct libalias*,struct sctp_nat_msg*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct libalias*) ;
 int VAR_2 ;
 void* VAR_3 ;





 void* VAR_4 ;
 int FUNC_2 (struct libalias*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct libalias*,struct sctp_nat_assoc*,int ) ;

__attribute__((used)) static int
FUNC_4(struct libalias *VAR_7, int VAR_8,struct sctp_nat_assoc *VAR_9, struct sctp_nat_msg *VAR_10)
{
 switch (VAR_10->msg) {
 case 131:
  FUNC_3(VAR_7,VAR_9, FUNC_1(VAR_7));
  return (VAR_2);
 case 130:
  switch (VAR_8) {
  case 128:
   if (!(VAR_9->TableRegister & VAR_6))
    return (VAR_1);
   break;
  case 129:
   if (!(VAR_9->TableRegister & VAR_5))
    return (VAR_1);
  }
  if (FUNC_0(VAR_7,VAR_10,VAR_8)) {
   VAR_9->TableRegister &= VAR_0;
   VAR_9->state = VAR_4;
   FUNC_3(VAR_7,VAR_9, FUNC_2(VAR_7));
   return (VAR_2);
  } else {
   VAR_9->state = VAR_3;
   return (VAR_2);
  }
 case 132:
  VAR_9->state = VAR_3;
  return (VAR_2);
 default:
  return (VAR_1);
 }
 return (VAR_1);
}
