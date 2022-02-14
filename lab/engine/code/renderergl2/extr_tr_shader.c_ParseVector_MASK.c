
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {int (* Printf ) (int ,char*,int ) ;} ;
struct TYPE_3__ {int name; } ;


 char* FUNC_0 (char**,int ) ;
 int VAR_0 ;
 float FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,int ) ;

__attribute__((used)) static qboolean FUNC_6( char **VAR_5, int VAR_6, float *VAR_7 ) {
 char *VAR_8;
 int VAR_9;


 VAR_8 = FUNC_0( VAR_5, VAR_1 );
 if ( FUNC_2( VAR_8, "(" ) ) {
  VAR_3.Printf( VAR_0, "WARNING: missing parenthesis in shader '%s'\n", VAR_4.name );
  return VAR_1;
 }

 for ( VAR_9 = 0 ; VAR_9 < VAR_6 ; VAR_9++ ) {
  VAR_8 = FUNC_0( VAR_5, VAR_1 );
  if ( !VAR_8[0] ) {
   VAR_3.Printf( VAR_0, "WARNING: missing vector element in shader '%s'\n", VAR_4.name );
   return VAR_1;
  }
  VAR_7[VAR_9] = FUNC_1( VAR_8 );
 }

 VAR_8 = FUNC_0( VAR_5, VAR_1 );
 if ( FUNC_2( VAR_8, ")" ) ) {
  VAR_3.Printf( VAR_0, "WARNING: missing parenthesis in shader '%s'\n", VAR_4.name );
  return VAR_1;
 }

 return VAR_2;
}
