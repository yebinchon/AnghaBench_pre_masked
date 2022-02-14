
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_7__ {int pureAuthentic; int state; scalar_t__ lastSnapshotTime; void* gotCP; int name; } ;
typedef TYPE_1__ client_t ;
struct TYPE_9__ {int checksumFeedServerId; int checksumFeed; } ;
struct TYPE_8__ {scalar_t__ integer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 char const* FUNC_1 (int) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int*) ;
 char* FUNC_5 () ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char const*) ;
 int VAR_1 ;
 void* VAR_2 ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_9( client_t *VAR_5 ) {
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13[1024];
 int VAR_14[1024];
 const char *VAR_15, *VAR_16;
 qboolean VAR_17 = VAR_2;





 if ( VAR_4->integer != 0 ) {

  VAR_6 = VAR_7 = 0;

  VAR_17 = (FUNC_4("vm/cgame.qvm", &VAR_6) == 1);
  if (VAR_17)
   VAR_17 = (FUNC_4("vm/ui.qvm", &VAR_7) == 1);

  VAR_8 = FUNC_0();


  VAR_12 = 1;

  VAR_16 = FUNC_1(VAR_12++);
  if(!VAR_16) {
   VAR_17 = VAR_1;
  }
  else
  {



   if (FUNC_8(VAR_16) < VAR_3.checksumFeedServerId)
   {
    FUNC_3("ignoring outdated cp command from client %s\n", VAR_5->name);
    return;
   }
  }


  while (VAR_17) {



   if (VAR_8 < 6) {
    VAR_17 = VAR_1;
    break;
   }

   VAR_16 = FUNC_1(VAR_12++);
   if (!VAR_16 || *VAR_16 == '@' || FUNC_8(VAR_16) != VAR_6 ) {
    VAR_17 = VAR_1;
    break;
   }

   VAR_16 = FUNC_1(VAR_12++);
   if (!VAR_16 || *VAR_16 == '@' || FUNC_8(VAR_16) != VAR_7 ) {
    VAR_17 = VAR_1;
    break;
   }

   VAR_16 = FUNC_1(VAR_12++);
   if (*VAR_16 != '@') {
    VAR_17 = VAR_1;
    break;
   }

   for (VAR_10 = 0; VAR_12 < VAR_8; VAR_10++) {
    VAR_13[VAR_10] = FUNC_8(FUNC_1(VAR_12++));
   }


   VAR_8 = VAR_10 - 1;



   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
     if (VAR_10 == VAR_11)
      continue;
     if (VAR_13[VAR_10] == VAR_13[VAR_11]) {
      VAR_17 = VAR_1;
      break;
     }
    }
    if (VAR_17 == VAR_1)
     break;
   }
   if (VAR_17 == VAR_1)
    break;


   VAR_15 = FUNC_5();
   FUNC_2( VAR_15 );
   VAR_9 = FUNC_0();
   if (VAR_9 > 1024)
    VAR_9 = 1024;

   for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
    VAR_14[VAR_10] = FUNC_8(FUNC_1(VAR_10));
   }


   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
    for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
     if (VAR_13[VAR_10] == VAR_14[VAR_11]) {
      break;
     }
    }
    if (VAR_11 >= VAR_9) {
     VAR_17 = VAR_1;
     break;
    }
   }
   if ( VAR_17 == VAR_1 ) {
    break;
   }


   VAR_6 = VAR_3.checksumFeed;
   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++) {
    VAR_6 ^= VAR_13[VAR_10];
   }
   VAR_6 ^= VAR_8;
   if (VAR_6 != VAR_13[VAR_8]) {
    VAR_17 = VAR_1;
    break;
   }


   break;
  }

  VAR_5->gotCP = VAR_2;

  if (VAR_17) {
   VAR_5->pureAuthentic = 1;
  }
  else {
   VAR_5->pureAuthentic = 0;
   VAR_5->lastSnapshotTime = 0;
   VAR_5->state = VAR_0;
   FUNC_7( VAR_5 );
   FUNC_6( VAR_5, "Unpure client detected. Invalid .PK3 files referenced!" );
  }
 }
}
