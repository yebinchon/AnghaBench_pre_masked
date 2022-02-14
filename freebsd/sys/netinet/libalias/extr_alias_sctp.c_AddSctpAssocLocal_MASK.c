
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_assoc {scalar_t__ g_port; int TableRegister; int l_port; int l_vtag; int l_addr; } ;
struct libalias {int packetAliasMode; int sctpLinkCount; int sctpNatTableSize; int * sctpTableLocal; } ;
struct in_addr {int dummy; } ;


 struct sctp_nat_assoc* FUNC_0 (struct libalias*,int ,struct in_addr,int ,int ,scalar_t__) ;
 int FUNC_1 (struct libalias*) ;
 int FUNC_2 (int *,struct sctp_nat_assoc*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct libalias*,struct sctp_nat_assoc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int VAR_5 ;
 size_t FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct libalias*) ;
 int FUNC_7 (struct sctp_nat_assoc*) ;
 int VAR_6 ;
 int FUNC_8 (struct sctp_nat_assoc*,char*) ;
 int FUNC_9 (struct libalias*,struct sctp_nat_assoc*) ;
 int FUNC_10 (struct sctp_nat_assoc*) ;

__attribute__((used)) static int
FUNC_11(struct libalias *VAR_7, struct sctp_nat_assoc *VAR_8, struct in_addr VAR_9)
{
 struct sctp_nat_assoc *VAR_10;

 FUNC_1(VAR_7);
 VAR_10 = FUNC_0(VAR_7, VAR_8->l_addr, VAR_9, VAR_8->l_vtag, VAR_8->l_port, VAR_8->g_port);
 if (VAR_10 != ((void*)0)) {
  if ((VAR_10->TableRegister == VAR_4) && (VAR_10->g_port == VAR_8->g_port)) {
   FUNC_3(VAR_7, VAR_10);
   FUNC_9(VAR_7, VAR_10);
   FUNC_7(VAR_10);
   FUNC_10(VAR_10);
  } else
   return (VAR_1);
 }

 FUNC_2(&VAR_7->sctpTableLocal[FUNC_5(VAR_8->l_vtag, VAR_8->l_port, VAR_7->sctpNatTableSize)],
     VAR_8, VAR_6);
 VAR_8->TableRegister |= VAR_4;
 VAR_7->sctpLinkCount++;

 if (VAR_8->TableRegister == VAR_3) {

  if (VAR_7->packetAliasMode & VAR_0)
   FUNC_6(VAR_7);

  FUNC_4(VAR_5, FUNC_8(VAR_8, "^"));
 }

 return (VAR_2);
}
