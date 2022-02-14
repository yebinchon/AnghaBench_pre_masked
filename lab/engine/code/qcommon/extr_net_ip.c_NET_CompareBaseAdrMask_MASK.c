
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {scalar_t__ type; int ip6; int ip; } ;
typedef TYPE_1__ netadr_t ;
typedef int byte ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int*,int*,int) ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_2(netadr_t VAR_5, netadr_t VAR_6, int VAR_7)
{
 byte VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 if (VAR_5.type != VAR_6.type)
  return VAR_3;

 if (VAR_5.type == VAR_2)
  return VAR_4;

 if(VAR_5.type == VAR_0)
 {
  VAR_9 = (byte *) &VAR_5.ip;
  VAR_10 = (byte *) &VAR_6.ip;

  if(VAR_7 < 0 || VAR_7 > 32)
   VAR_7 = 32;
 }
 else if(VAR_5.type == VAR_1)
 {
  VAR_9 = (byte *) &VAR_5.ip6;
  VAR_10 = (byte *) &VAR_6.ip6;

  if(VAR_7 < 0 || VAR_7 > 128)
   VAR_7 = 128;
 }
 else
 {
  FUNC_0 ("NET_CompareBaseAdr: bad address type\n");
  return VAR_3;
 }

 VAR_11 = VAR_7 >> 3;

 if(VAR_11 && FUNC_1(VAR_9, VAR_10, VAR_11))
   return VAR_3;

 VAR_7 &= 0x07;
 if(VAR_7)
 {
  VAR_8 = (1 << VAR_7) - 1;
  VAR_8 <<= 8 - VAR_7;

  if((VAR_9[VAR_11] & VAR_8) == (VAR_10[VAR_11] & VAR_8))
   return VAR_4;
 }
 else
  return VAR_4;

 return VAR_3;
}
