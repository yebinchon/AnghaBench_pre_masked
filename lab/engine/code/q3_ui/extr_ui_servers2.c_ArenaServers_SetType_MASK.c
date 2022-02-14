
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int masterstr ;
typedef int cvarname ;
struct TYPE_7__ {int string; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ generic; } ;
struct TYPE_8__ {TYPE_3__ status; scalar_t__* numservers; scalar_t__ numqueriedservers; scalar_t__ currentping; int maxservers; int serverlist; TYPE_2__ remove; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*,int) ;

int FUNC_6( int VAR_14 )
{
 FUNC_1();

 if(VAR_14 >= 133 && VAR_14 <= 129)
 {
  char VAR_15[2], VAR_16[sizeof("sv_master1")];
  int VAR_17;

  if (VAR_14 == VAR_13 || VAR_14 == ((VAR_13+1) % VAR_5)) {
   VAR_17 = 1;
  } else {
   VAR_17 = -1;
  }

  while(VAR_14 >= 133 && VAR_14 <= 129)
  {
   FUNC_3(VAR_16, sizeof(VAR_16), "sv_master%d", VAR_14 - 134);
   FUNC_5(VAR_16, VAR_15, sizeof(VAR_15));
   if(*VAR_15)
    break;

   VAR_14 += VAR_17;
  }
 }

 VAR_13 = VAR_14;

 switch( VAR_14 ) {
 default:
 case 128:
  VAR_6.remove.generic.flags |= (VAR_4|VAR_3);
  VAR_6.serverlist = VAR_9;
  VAR_6.numservers = &VAR_12;
  VAR_6.maxservers = VAR_2;
  break;

 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
  VAR_6.remove.generic.flags |= (VAR_4|VAR_3);
  VAR_6.serverlist = VAR_8[VAR_14-134];
  VAR_6.numservers = &VAR_11[VAR_14-134];
  VAR_6.maxservers = VAR_1;
  break;

 case 135:
  VAR_6.remove.generic.flags &= ~(VAR_4|VAR_3);
  VAR_6.serverlist = VAR_7;
  VAR_6.numservers = &VAR_10;
  VAR_6.maxservers = VAR_0;
  break;

 }

 if( !*VAR_6.numservers ) {
  FUNC_0();
 }
 else {

  VAR_6.currentping = *VAR_6.numservers;
  VAR_6.numqueriedservers = *VAR_6.numservers;
  FUNC_2();
  FUNC_4(VAR_6.status.string,"hit refresh to update");
 }

 return VAR_14;
}
