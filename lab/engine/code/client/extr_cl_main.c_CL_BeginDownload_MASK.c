
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ downloadCount; scalar_t__ downloadBlock; int downloadTempName; int downloadName; } ;
struct TYPE_3__ {int realtime; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char const*,char const*) ;
 int FUNC_2 (int ,int,char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char const*,int) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (char*,char const*) ;

void FUNC_7( const char *VAR_3, const char *VAR_4 ) {

 FUNC_1("***** CL_BeginDownload *****\n"
    "Localname: %s\n"
    "Remotename: %s\n"
    "****************************\n", VAR_3, VAR_4);

 FUNC_5 ( VAR_0.downloadName, VAR_3, sizeof(VAR_0.downloadName) );
 FUNC_2( VAR_0.downloadTempName, sizeof(VAR_0.downloadTempName), "%s.tmp", VAR_3 );


 FUNC_3( "cl_downloadName", VAR_4 );
 FUNC_3( "cl_downloadSize", "0" );
 FUNC_3( "cl_downloadCount", "0" );
 FUNC_4( "cl_downloadTime", VAR_1.realtime );

 VAR_0.downloadBlock = 0;
 VAR_0.downloadCount = 0;

 FUNC_0(FUNC_6("download %s", VAR_4), VAR_2);
}
