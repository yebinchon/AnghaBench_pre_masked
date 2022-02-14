
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qhandle_t ;
typedef scalar_t__ qboolean ;
typedef int namebuf ;
struct TYPE_5__ {int type; int index; int numLods; } ;
typedef TYPE_1__ model_t ;
typedef int md3Header_t ;
typedef int byte ;
struct TYPE_6__ {int (* Printf ) (int ,char*,char const*) ;int (* Free ) (int *) ;} ;


 int FUNC_0 (char*,int,char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,int **) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int,int *,char const*,char*) ;
 scalar_t__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,char const*) ;

qhandle_t FUNC_5(const char *VAR_7, model_t *VAR_8)
{
 int VAR_9;
 char VAR_10[VAR_0 + 20];
 md3Header_t *VAR_11;
 qboolean VAR_12 = VAR_5;

 for ( VAR_9 = 0 ; VAR_9 < VAR_1 ; ++VAR_9 )
 {
  if ( VAR_9 != 0 )
   FUNC_0(VAR_10, sizeof(VAR_10), "%s_%d", VAR_7, VAR_9);
  else
   FUNC_0(VAR_10, sizeof(VAR_10), "%s", VAR_7);

  if ( FUNC_1( VAR_7, &VAR_11 ) )
  {
   VAR_12 = FUNC_2( VAR_8, VAR_9, (byte *)VAR_11, VAR_7, "" );
   VAR_6.Free( VAR_11 );
  }

  if ( VAR_12 )
   VAR_8->numLods++;
  else
   break;
 }

 if ( VAR_9 > 0 )
 {
  VAR_8->type = VAR_3;
  return VAR_8->index;
 }





 VAR_8->type = VAR_2;
 return 0;
}
