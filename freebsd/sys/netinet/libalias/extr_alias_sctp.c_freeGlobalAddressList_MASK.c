
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_assoc {int Gaddr; } ;
struct sctp_GlobalAddress {int dummy; } ;


 struct sctp_GlobalAddress* FUNC_0 (int *) ;
 struct sctp_GlobalAddress* FUNC_1 (struct sctp_GlobalAddress*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct sctp_GlobalAddress*) ;

__attribute__((used)) static void FUNC_3(struct sctp_nat_assoc *VAR_1)
{
 struct sctp_GlobalAddress *VAR_2=((void*)0),*VAR_3=((void*)0);

 VAR_2 = FUNC_0(&(VAR_1->Gaddr));
 while (VAR_2 != ((void*)0)) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(VAR_2);
  VAR_2 = VAR_3;
 }
}
