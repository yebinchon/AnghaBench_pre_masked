
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_assoc {int exp; } ;
struct libalias {int dummy; } ;


 int FUNC_0 (struct libalias*,struct sctp_nat_assoc*) ;
 int FUNC_1 (struct libalias*,struct sctp_nat_assoc*) ;

__attribute__((used)) static void
FUNC_2(struct libalias *VAR_0, struct sctp_nat_assoc *VAR_1, int VAR_2)
{
 if (VAR_2 < VAR_1->exp) {
  FUNC_1(VAR_0, VAR_1);
  VAR_1->exp = VAR_2;
  FUNC_0(VAR_0, VAR_1);
 } else {
  VAR_1->exp = VAR_2;
 }
}
