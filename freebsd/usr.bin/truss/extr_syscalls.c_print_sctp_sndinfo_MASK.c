
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_sndinfo {int snd_sid; int snd_context; int snd_assoc_id; int snd_ppid; int snd_flags; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(FILE *VAR_1, struct sctp_sndinfo *VAR_2)
{
 FUNC_0(VAR_1, "{sid=%u,", VAR_2->snd_sid);
 FUNC_1("flgs=", VAR_1);
 FUNC_3(VAR_0, VAR_1, VAR_2->snd_flags);
 FUNC_0(VAR_1, ",ppid=%u,", FUNC_2(VAR_2->snd_ppid));
 FUNC_0(VAR_1, "ctx=%u,", VAR_2->snd_context);
 FUNC_0(VAR_1, "id=%u}", VAR_2->snd_assoc_id);
}
