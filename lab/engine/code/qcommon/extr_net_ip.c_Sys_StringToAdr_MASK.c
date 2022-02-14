
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int sadr ;
typedef int sa_family_t ;
typedef int qboolean ;
typedef int netadrtype_t ;
typedef int netadr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct sockaddr*,int *) ;
 int FUNC_1 (char const*,struct sockaddr*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;

qboolean FUNC_2( const char *VAR_5, netadr_t *VAR_6, netadrtype_t VAR_7 ) {
 struct sockaddr_storage VAR_8;
 sa_family_t VAR_9;

 switch(VAR_7)
 {
  case 129:
   VAR_9 = VAR_0;
  break;
  case 128:
   VAR_9 = VAR_1;
  break;
  default:
   VAR_9 = VAR_2;
  break;
 }
 if( !FUNC_1(VAR_5, (struct sockaddr *) &VAR_8, sizeof(VAR_8), VAR_9 ) ) {
  return VAR_3;
 }

 FUNC_0( (struct sockaddr *) &VAR_8, VAR_6 );
 return VAR_4;
}
