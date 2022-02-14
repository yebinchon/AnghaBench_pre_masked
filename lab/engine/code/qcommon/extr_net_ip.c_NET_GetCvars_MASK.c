
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef void* qboolean ;
struct TYPE_24__ {int modified; } ;
struct TYPE_23__ {int modified; } ;
struct TYPE_22__ {int modified; } ;
struct TYPE_21__ {int modified; } ;
struct TYPE_20__ {int modified; } ;
struct TYPE_19__ {int modified; } ;
struct TYPE_18__ {int modified; } ;
struct TYPE_17__ {int modified; } ;
struct TYPE_16__ {int modified; } ;
struct TYPE_15__ {int modified; } ;
struct TYPE_14__ {int modified; } ;
struct TYPE_13__ {int modified; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (char*,char*,int) ;
 char* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 TYPE_12__* VAR_6 ;
 TYPE_11__* VAR_7 ;
 TYPE_10__* VAR_8 ;
 TYPE_9__* VAR_9 ;
 TYPE_8__* VAR_10 ;
 TYPE_7__* VAR_11 ;
 TYPE_6__* VAR_12 ;
 TYPE_5__* VAR_13 ;
 TYPE_4__* VAR_14 ;
 TYPE_3__* VAR_15 ;
 TYPE_2__* VAR_16 ;
 TYPE_1__* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 char* FUNC_1 (char*,int ) ;

__attribute__((used)) static qboolean FUNC_2( void ) {
 int VAR_20;







 VAR_6 = FUNC_0( "net_enabled", "3", VAR_1 | VAR_0 );

 VAR_20 = VAR_6->modified;
 VAR_6->modified = VAR_18;

 VAR_7 = FUNC_0( "net_ip", "0.0.0.0", VAR_1 );
 VAR_20 += VAR_7->modified;
 VAR_7->modified = VAR_18;

 VAR_8 = FUNC_0( "net_ip6", "::", VAR_1 );
 VAR_20 += VAR_8->modified;
 VAR_8->modified = VAR_18;

 VAR_11 = FUNC_0( "net_port", FUNC_1( "%i", VAR_4 ), VAR_1 );
 VAR_20 += VAR_11->modified;
 VAR_11->modified = VAR_18;

 VAR_12 = FUNC_0( "net_port6", FUNC_1( "%i", VAR_4 ), VAR_1 );
 VAR_20 += VAR_12->modified;
 VAR_12->modified = VAR_18;


 VAR_9 = FUNC_0( "net_mcast6addr", VAR_3, VAR_1 | VAR_0 );
 VAR_20 += VAR_9->modified;
 VAR_9->modified = VAR_18;




 VAR_10 = FUNC_0( "net_mcast6iface", "", VAR_1 | VAR_0 );

 VAR_20 += VAR_10->modified;
 VAR_10->modified = VAR_18;

 VAR_13 = FUNC_0( "net_socksEnabled", "0", VAR_1 | VAR_0 );
 VAR_20 += VAR_13->modified;
 VAR_13->modified = VAR_18;

 VAR_16 = FUNC_0( "net_socksServer", "", VAR_1 | VAR_0 );
 VAR_20 += VAR_16->modified;
 VAR_16->modified = VAR_18;

 VAR_15 = FUNC_0( "net_socksPort", "1080", VAR_1 | VAR_0 );
 VAR_20 += VAR_15->modified;
 VAR_15->modified = VAR_18;

 VAR_17 = FUNC_0( "net_socksUsername", "", VAR_1 | VAR_0 );
 VAR_20 += VAR_17->modified;
 VAR_17->modified = VAR_18;

 VAR_14 = FUNC_0( "net_socksPassword", "", VAR_1 | VAR_0 );
 VAR_20 += VAR_14->modified;
 VAR_14->modified = VAR_18;

 VAR_5 = FUNC_0("net_dropsim", "", VAR_2);

 return VAR_20 ? VAR_19 : VAR_18;
}
