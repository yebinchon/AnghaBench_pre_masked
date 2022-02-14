
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,char*,char*,char*,char*,char*) ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0(VAR_5,
"Usage:\n"
"%s %s [-A options] [-b buffersize] [-C options] [-I options]\n"
"\t[-i filelist] [-l filename]%s [-o output] [-P options]\n"
"\t%s[-r retries] [-s [trans::][community@][server][:port]]\n"
"\t[-t timeout] [-U options] [-v version]%s\n",
 VAR_4,
 (VAR_3 == VAR_0) ? "[-aDdehnK]" :
     (VAR_3 == VAR_2) ? "[-dhnK]" :
     (VAR_3 == VAR_1) ? "[-adehnK]" :
     "",
 (VAR_3 == VAR_0 || VAR_3 == VAR_2) ?
 " [-M max-repetitions] [-N non-repeaters]" : "",
 (VAR_3 == VAR_0 || VAR_3 == VAR_2) ? "[-p pdu] " : "",
 (VAR_3 == VAR_0) ? " OID [OID ...]" :
     (VAR_3 == VAR_2 || VAR_3 == VAR_1) ? " [OID ...]" :
     ""
 );
}
