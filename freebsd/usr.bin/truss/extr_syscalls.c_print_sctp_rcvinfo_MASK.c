
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_rcvinfo {int rcv_sid; int rcv_ssn; int rcv_tsn; int rcv_cumtsn; int rcv_context; int rcv_assoc_id; int rcv_ppid; int rcv_flags; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_1, struct sctp_rcvinfo *VAR_2)
{
 FUNC_0(VAR_1, "{sid=%u,", VAR_2->rcv_sid);
 FUNC_0(VAR_1, "ssn=%u,", VAR_2->rcv_ssn);
 FUNC_1("flgs=", VAR_1);
 FUNC_3(VAR_0, VAR_1, VAR_2->rcv_flags);
 FUNC_0(VAR_1, ",ppid=%u,", FUNC_2(VAR_2->rcv_ppid));
 FUNC_0(VAR_1, "tsn=%u,", VAR_2->rcv_tsn);
 FUNC_0(VAR_1, "cumtsn=%u,", VAR_2->rcv_cumtsn);
 FUNC_0(VAR_1, "ctx=%u,", VAR_2->rcv_context);
 FUNC_0(VAR_1, "id=%u}", VAR_2->rcv_assoc_id);
}
