
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nat_assoc {int TableRegister; } ;
struct libalias {int packetAliasMode; int sctpLinkCount; } ;


 int FUNC_0 (struct libalias*) ;
 int FUNC_1 (struct sctp_nat_assoc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct libalias*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct sctp_nat_assoc*,char*) ;
 int FUNC_5 (char*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct libalias *VAR_9, struct sctp_nat_assoc *VAR_10)
{

 if (VAR_10 == ((void*)0)) {

  FUNC_2(VAR_5,
      FUNC_5("ERROR: alias_sctp:RmSctpAssoc(NULL)\n", 0, 0, VAR_6));
  return;
 }

 if (VAR_10->TableRegister == VAR_1) {
  FUNC_2(VAR_4, FUNC_4(VAR_10, "$"));
 }
 FUNC_0(VAR_9);
 if (VAR_10->TableRegister & VAR_3) {
  VAR_10->TableRegister ^= VAR_3;
  VAR_9->sctpLinkCount--;
  FUNC_1(VAR_10, VAR_8);
 }

 if (VAR_10->TableRegister & VAR_2) {
  VAR_10->TableRegister ^= VAR_2;
  VAR_9->sctpLinkCount--;
  FUNC_1(VAR_10, VAR_7);
 }


 if (VAR_9->packetAliasMode & VAR_0)
  FUNC_3(VAR_9);
}
