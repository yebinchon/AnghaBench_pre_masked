
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtinfo {int rti_prefixlen; int rti_rtpref; scalar_t__ rti_ltime; int rti_prefix; } ;
typedef int ntopbuf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (char*,char*,int,char*,char*) ;
 char** VAR_4 ;
 char* FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static int
FUNC_3(struct rtinfo *VAR_5)
{
 char VAR_6[VAR_1];
 char VAR_7[VAR_3];

 FUNC_1("\t  %s/%d (pref: %s, ltime: %s)\n",
     FUNC_0(VAR_0, &VAR_5->rti_prefix,
  VAR_6, sizeof(VAR_6)),
     VAR_5->rti_prefixlen,
     VAR_4[0xff & (VAR_5->rti_rtpref >> 3)],
     (VAR_5->rti_ltime == VAR_2) ?
     "infinity" : FUNC_2(VAR_5->rti_ltime, VAR_7));

 return (0);
}
