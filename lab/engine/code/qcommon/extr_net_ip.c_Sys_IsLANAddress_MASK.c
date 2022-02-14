
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
typedef int qboolean ;
struct TYPE_6__ {scalar_t__ type; int* ip; int* ip6; } ;
typedef TYPE_2__ netadr_t ;
typedef int byte ;
struct TYPE_7__ {scalar_t__ type; int netmask; int addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

qboolean FUNC_0( netadr_t VAR_7 ) {
 int VAR_8, VAR_9, VAR_10;
 qboolean VAR_11;
 byte *VAR_12, *VAR_13, *VAR_14;

 if( VAR_7.type == VAR_2 ) {
  return VAR_6;
 }

 if( VAR_7.type == VAR_0 )
 {




  if(VAR_7.ip[0] == 10)
   return VAR_6;
  if(VAR_7.ip[0] == 172 && (VAR_7.ip[1]&0xf0) == 16)
   return VAR_6;
  if(VAR_7.ip[0] == 192 && VAR_7.ip[1] == 168)
   return VAR_6;

  if(VAR_7.ip[0] == 127)
   return VAR_6;
 }
 else if(VAR_7.type == VAR_1)
 {
  if(VAR_7.ip6[0] == 0xfe && (VAR_7.ip6[1] & 0xc0) == 0x80)
   return VAR_6;
  if((VAR_7.ip6[0] & 0xfe) == 0xfc)
   return VAR_6;
 }


 for(VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
 {
  if(VAR_3[VAR_8].type == VAR_7.type)
  {
   if(VAR_7.type == VAR_0)
   {
    VAR_14 = (byte *) &((struct sockaddr_in *) &VAR_3[VAR_8].addr)->sin_addr.s_addr;
    VAR_13 = (byte *) &((struct sockaddr_in *) &VAR_3[VAR_8].netmask)->sin_addr.s_addr;
    VAR_12 = VAR_7.ip;

    VAR_10 = sizeof(VAR_7.ip);
   }
   else
   {


    VAR_14 = (byte *) &((struct sockaddr_in6 *) &VAR_3[VAR_8].addr)->sin6_addr;
    VAR_13 = (byte *) &((struct sockaddr_in6 *) &VAR_3[VAR_8].netmask)->sin6_addr;
    VAR_12 = VAR_7.ip6;

    VAR_10 = sizeof(VAR_7.ip6);
   }

   VAR_11 = VAR_5;
   for(VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
   {
    if((VAR_14[VAR_9] & VAR_13[VAR_9]) != (VAR_12[VAR_9] & VAR_13[VAR_9]))
    {
     VAR_11 = VAR_6;
     break;
    }
   }

   if(!VAR_11)
    return VAR_6;

  }
 }

 return VAR_5;
}
