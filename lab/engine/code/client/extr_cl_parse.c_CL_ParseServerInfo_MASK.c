
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* stringData; int* stringOffsets; } ;
struct TYPE_6__ {TYPE_1__ gameState; } ;
struct TYPE_5__ {int sv_dlURL; int sv_allowDownload; } ;


 size_t VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_3(void)
{
 const char *VAR_3;

 VAR_3 = VAR_1.gameState.stringData
  + VAR_1.gameState.stringOffsets[ VAR_0 ];

 VAR_2.sv_allowDownload = FUNC_2(FUNC_0(VAR_3,
  "sv_allowDownload"));
 FUNC_1(VAR_2.sv_dlURL,
  FUNC_0(VAR_3, "sv_dlURL"),
  sizeof(VAR_2.sv_dlURL));
}
