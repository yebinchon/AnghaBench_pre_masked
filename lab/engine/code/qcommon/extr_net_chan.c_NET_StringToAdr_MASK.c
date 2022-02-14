
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int netadrtype_t ;
struct TYPE_5__ {void* port; int type; } ;
typedef TYPE_1__ netadr_t ;
typedef int base ;


 void* FUNC_0 (short) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 int FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 (char const*,char*) ;

int FUNC_8( const char *VAR_4, netadr_t *VAR_5, netadrtype_t VAR_6 )
{
 char VAR_7[VAR_0], *VAR_8;
 char *VAR_9 = ((void*)0);

 if (!FUNC_7 (VAR_4, "localhost")) {
  FUNC_1 (VAR_5, 0, sizeof(*VAR_5));
  VAR_5->type = VAR_2;

  return 1;
 }

 FUNC_3( VAR_7, VAR_4, sizeof( VAR_7 ) );

 if(*VAR_7 == '[' || FUNC_2(VAR_7, ':') > 1)
 {

  VAR_8 = FUNC_6(VAR_7, ']');
  if(VAR_8)
  {
   *VAR_8 = '\0';
   VAR_8++;

   if(*VAR_8 == ':')
    VAR_9 = VAR_8 + 1;
  }

  if(*VAR_7 == '[')
   VAR_8 = VAR_7 + 1;
  else
   VAR_8 = VAR_7;
 }
 else
 {

  VAR_9 = FUNC_6( VAR_7, ':' );

  if ( VAR_9 ) {
   *VAR_9 = '\0';
   VAR_9++;
  }

  VAR_8 = VAR_7;
 }

 if(!FUNC_4(VAR_8, VAR_5, VAR_6))
 {
  VAR_5->type = VAR_1;
  return 0;
 }

 if(VAR_9)
 {
  VAR_5->port = FUNC_0((short) FUNC_5(VAR_9));
  return 1;
 }
 else
 {
  VAR_5->port = FUNC_0(VAR_3);
  return 2;
 }
}
