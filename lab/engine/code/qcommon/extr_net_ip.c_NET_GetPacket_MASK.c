
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int sin_zero; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int qboolean ;
struct TYPE_7__ {int* ip; short port; int type; } ;
typedef TYPE_1__ netadr_t ;
struct TYPE_8__ {int* data; int maxsize; int readcount; int cursize; } ;
typedef TYPE_2__ msg_t ;
typedef int from ;
typedef int fd_set ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__) ;
 int FUNC_3 () ;
 int VAR_4 ;
 int FUNC_4 (struct sockaddr*,TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (struct sockaddr_storage*,int *,int) ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (scalar_t__,void*,int,int ,struct sockaddr*,int*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

qboolean FUNC_8(netadr_t *VAR_13, msg_t *VAR_14, fd_set *VAR_15)
{
 int VAR_16;
 struct sockaddr_storage VAR_17;
 socklen_t VAR_18;
 int VAR_19;

 if(VAR_6 != VAR_2 && FUNC_1(VAR_6, VAR_15))
 {
  VAR_18 = sizeof(VAR_17);
  VAR_16 = FUNC_7( VAR_6, (void *)VAR_14->data, VAR_14->maxsize, 0, (struct sockaddr *) &VAR_17, &VAR_18 );

  if (VAR_16 == VAR_4)
  {
   VAR_19 = VAR_10;

   if( VAR_19 != VAR_0 && VAR_19 != VAR_1 )
    FUNC_0( "NET_GetPacket: %s\n", FUNC_3() );
  }
  else
  {

   FUNC_6( ((struct sockaddr_in *)&VAR_17)->sin_zero, 0, 8 );

   if ( VAR_12 && FUNC_5( &VAR_17, &VAR_11, VAR_18 ) == 0 ) {
    if ( VAR_16 < 10 || VAR_14->data[0] != 0 || VAR_14->data[1] != 0 || VAR_14->data[2] != 0 || VAR_14->data[3] != 1 ) {
     return VAR_8;
    }
    VAR_13->type = VAR_3;
    VAR_13->ip[0] = VAR_14->data[4];
    VAR_13->ip[1] = VAR_14->data[5];
    VAR_13->ip[2] = VAR_14->data[6];
    VAR_13->ip[3] = VAR_14->data[7];
    VAR_13->port = *(short *)&VAR_14->data[8];
    VAR_14->readcount = 10;
   }
   else {
    FUNC_4( (struct sockaddr *) &VAR_17, VAR_13 );
    VAR_14->readcount = 0;
   }

   if( VAR_16 >= VAR_14->maxsize ) {
    FUNC_0( "Oversize packet from %s\n", FUNC_2 (*VAR_13) );
    return VAR_8;
   }

   VAR_14->cursize = VAR_16;
   return VAR_9;
  }
 }

 if(VAR_5 != VAR_2 && FUNC_1(VAR_5, VAR_15))
 {
  VAR_18 = sizeof(VAR_17);
  VAR_16 = FUNC_7(VAR_5, (void *)VAR_14->data, VAR_14->maxsize, 0, (struct sockaddr *) &VAR_17, &VAR_18);

  if (VAR_16 == VAR_4)
  {
   VAR_19 = VAR_10;

   if( VAR_19 != VAR_0 && VAR_19 != VAR_1 )
    FUNC_0( "NET_GetPacket: %s\n", FUNC_3() );
  }
  else
  {
   FUNC_4((struct sockaddr *) &VAR_17, VAR_13);
   VAR_14->readcount = 0;

   if(VAR_16 >= VAR_14->maxsize)
   {
    FUNC_0( "Oversize packet from %s\n", FUNC_2 (*VAR_13) );
    return VAR_8;
   }

   VAR_14->cursize = VAR_16;
   return VAR_9;
  }
 }

 if(VAR_7 != VAR_2 && VAR_7 != VAR_5 && FUNC_1(VAR_7, VAR_15))
 {
  VAR_18 = sizeof(VAR_17);
  VAR_16 = FUNC_7(VAR_7, (void *)VAR_14->data, VAR_14->maxsize, 0, (struct sockaddr *) &VAR_17, &VAR_18);

  if (VAR_16 == VAR_4)
  {
   VAR_19 = VAR_10;

   if( VAR_19 != VAR_0 && VAR_19 != VAR_1 )
    FUNC_0( "NET_GetPacket: %s\n", FUNC_3() );
  }
  else
  {
   FUNC_4((struct sockaddr *) &VAR_17, VAR_13);
   VAR_14->readcount = 0;

   if(VAR_16 >= VAR_14->maxsize)
   {
    FUNC_0( "Oversize packet from %s\n", FUNC_2 (*VAR_13) );
    return VAR_8;
   }

   VAR_14->cursize = VAR_16;
   return VAR_9;
  }
 }


 return VAR_8;
}
