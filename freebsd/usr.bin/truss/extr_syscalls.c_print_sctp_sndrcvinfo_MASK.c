
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sndrcvinfo {int sinfo_stream; int sinfo_ssn; int sinfo_context; int sinfo_timetolive; int sinfo_tsn; int sinfo_cumtsn; int sinfo_assoc_id; int sinfo_ppid; int sinfo_flags; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_0, bool VAR_1, struct sctp_sndrcvinfo *VAR_2)
{
 FUNC_0(VAR_0, "{sid=%u,", VAR_2->sinfo_stream);
 if (VAR_1) {
  FUNC_0(VAR_0, "ssn=%u,", VAR_2->sinfo_ssn);
 }
 FUNC_1("flgs=", VAR_0);
 FUNC_3(VAR_0, VAR_2->sinfo_flags);
 FUNC_0(VAR_0, ",ppid=%u,", FUNC_2(VAR_2->sinfo_ppid));
 if (!VAR_1) {
  FUNC_0(VAR_0, "ctx=%u,", VAR_2->sinfo_context);
  FUNC_0(VAR_0, "ttl=%u,", VAR_2->sinfo_timetolive);
 }
 if (VAR_1) {
  FUNC_0(VAR_0, "tsn=%u,", VAR_2->sinfo_tsn);
  FUNC_0(VAR_0, "cumtsn=%u,", VAR_2->sinfo_cumtsn);
 }
 FUNC_0(VAR_0, "id=%u}", VAR_2->sinfo_assoc_id);
}
