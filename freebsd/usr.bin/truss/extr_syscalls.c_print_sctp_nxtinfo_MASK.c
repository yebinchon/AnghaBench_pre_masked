
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_nxtinfo {int nxt_sid; int nxt_length; int nxt_assoc_id; int nxt_ppid; int nxt_flags; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_1, struct sctp_nxtinfo *VAR_2)
{
 FUNC_0(VAR_1, "{sid=%u,", VAR_2->nxt_sid);
 FUNC_1("flgs=", VAR_1);
 FUNC_3(VAR_0, VAR_1, VAR_2->nxt_flags);
 FUNC_0(VAR_1, ",ppid=%u,", FUNC_2(VAR_2->nxt_ppid));
 FUNC_0(VAR_1, "len=%u,", VAR_2->nxt_length);
 FUNC_0(VAR_1, "id=%u}", VAR_2->nxt_assoc_id);
}
