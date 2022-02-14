
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int adr; } ;
typedef TYPE_1__ serverInfo_t ;
typedef scalar_t__ qboolean ;
struct TYPE_12__ {int port; int scope_id; int type; int * ip6; int * ip; } ;
typedef TYPE_2__ netadr_t ;
struct TYPE_13__ {char* data; int cursize; } ;
typedef TYPE_3__ msg_t ;
typedef char byte ;
struct TYPE_14__ {int numglobalservers; int numGlobalServerAddresses; TYPE_2__* globalServerAddresses; TYPE_1__* globalServers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__ const) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__) ;
 TYPE_4__ VAR_4 ;

void FUNC_5( const netadr_t* VAR_5, msg_t *VAR_6, qboolean VAR_7 ) {
 int VAR_8, VAR_9, VAR_10, VAR_11;
 netadr_t VAR_12[VAR_1];
 int VAR_13;
 byte* VAR_14;
 byte* VAR_15;

 FUNC_2("CL_ServersResponsePacket from %s\n", FUNC_3(*VAR_5));

 if (VAR_4.numglobalservers == -1) {

  VAR_4.numglobalservers = 0;
  VAR_4.numGlobalServerAddresses = 0;
 }


 VAR_13 = 0;
 VAR_14 = VAR_6->data;
 VAR_15 = VAR_14 + VAR_6->cursize;


 do
 {
  if(*VAR_14 == '\\' || (VAR_7 && *VAR_14 == '/'))
   break;

  VAR_14++;
 } while (VAR_14 < VAR_15);

 while (VAR_14 + 1 < VAR_15)
 {

  if (*VAR_14 == '\\')
  {
   VAR_14++;

   if (VAR_15 - VAR_14 < sizeof(VAR_12[VAR_13].ip) + sizeof(VAR_12[VAR_13].port) + 1)
    break;

   for(VAR_8 = 0; VAR_8 < sizeof(VAR_12[VAR_13].ip); VAR_8++)
    VAR_12[VAR_13].ip[VAR_8] = *VAR_14++;

   VAR_12[VAR_13].type = VAR_2;
  }

  else if (VAR_7 && *VAR_14 == '/')
  {
   VAR_14++;

   if (VAR_15 - VAR_14 < sizeof(VAR_12[VAR_13].ip6) + sizeof(VAR_12[VAR_13].port) + 1)
    break;

   for(VAR_8 = 0; VAR_8 < sizeof(VAR_12[VAR_13].ip6); VAR_8++)
    VAR_12[VAR_13].ip6[VAR_8] = *VAR_14++;

   VAR_12[VAR_13].type = VAR_3;
   VAR_12[VAR_13].scope_id = VAR_5->scope_id;
  }
  else

   break;


  VAR_12[VAR_13].port = (*VAR_14++) << 8;
  VAR_12[VAR_13].port += *VAR_14++;
  VAR_12[VAR_13].port = FUNC_0( VAR_12[VAR_13].port );


  if (*VAR_14 != '\\' && *VAR_14 != '/')
   break;

  VAR_13++;
  if (VAR_13 >= VAR_1)
   break;
 }

 VAR_10 = VAR_4.numglobalservers;

 for (VAR_8 = 0; VAR_8 < VAR_13 && VAR_10 < VAR_0; VAR_8++) {

  serverInfo_t *VAR_16 = &VAR_4.globalServers[VAR_10];




  for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  {
   if (FUNC_4(VAR_4.globalServers[VAR_9].adr, VAR_12[VAR_8]))
    break;
  }

  if (VAR_9 < VAR_10)
   continue;

  FUNC_1( VAR_16, &VAR_12[VAR_8] );

  VAR_10++;
 }


 if ( VAR_10 >= VAR_0 && VAR_4.numGlobalServerAddresses < VAR_0 )
 {

  for (; VAR_8 < VAR_13 && VAR_4.numGlobalServerAddresses < VAR_0; VAR_8++)
  {

   VAR_4.globalServerAddresses[VAR_4.numGlobalServerAddresses++] = VAR_12[VAR_8];
  }
 }

 VAR_4.numglobalservers = VAR_10;
 VAR_11 = VAR_10 + VAR_4.numGlobalServerAddresses;

 FUNC_2("%d servers parsed (total %d)\n", VAR_13, VAR_11);
}
