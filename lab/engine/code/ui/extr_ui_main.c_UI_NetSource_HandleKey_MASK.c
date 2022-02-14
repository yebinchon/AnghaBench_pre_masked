
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int qboolean ;
typedef int masterstr ;
typedef int cvarname ;
struct TYPE_2__ {scalar_t__ integer; } ;


 int FUNC_0 (char*,int,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (char*,char*,int) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static qboolean FUNC_6(int VAR_7, float *VAR_8, int VAR_9) {
 int VAR_10 = FUNC_2(VAR_9);
 if (VAR_10 != 0) {
  VAR_6.integer += VAR_10;

  if(VAR_6.integer >= VAR_1 && VAR_6.integer <= VAR_2)
  {
   char VAR_11[2], VAR_12[sizeof("sv_master1")];

   while(VAR_6.integer >= VAR_1 && VAR_6.integer <= VAR_2)
   {
    FUNC_0(VAR_12, sizeof(VAR_12), "sv_master%d", VAR_6.integer - VAR_0);
    FUNC_5(VAR_12, VAR_11, sizeof(VAR_11));
    if(*VAR_11)
     break;

    VAR_6.integer += VAR_10;
   }
  }

  if (VAR_6.integer >= VAR_3) {
   VAR_6.integer = 0;
  } else if (VAR_6.integer < 0) {
   VAR_6.integer = VAR_3 - 1;
  }

  FUNC_1(VAR_5);
  FUNC_3(VAR_5, VAR_4);
  FUNC_4( "ui_netSource", VAR_6.integer);
  return VAR_5;
 }
 return VAR_4;
}
