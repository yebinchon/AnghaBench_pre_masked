
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int genFunc_t ;
struct TYPE_4__ {int (* Printf ) (int ,char*,char const*,int ) ;} ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char const*,char*) ;
 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_1 (int ,char*,char const*,int ) ;

__attribute__((used)) static genFunc_t FUNC_2( const char *VAR_9 )
{
 if ( !FUNC_0( VAR_9, "sin" ) )
 {
  return VAR_3;
 }
 else if ( !FUNC_0( VAR_9, "square" ) )
 {
  return VAR_4;
 }
 else if ( !FUNC_0( VAR_9, "triangle" ) )
 {
  return VAR_5;
 }
 else if ( !FUNC_0( VAR_9, "sawtooth" ) )
 {
  return VAR_2;
 }
 else if ( !FUNC_0( VAR_9, "inversesawtooth" ) )
 {
  return VAR_0;
 }
 else if ( !FUNC_0( VAR_9, "noise" ) )
 {
  return VAR_1;
 }

 VAR_7.Printf( VAR_6, "WARNING: invalid genfunc name '%s' in shader '%s'\n", VAR_9, VAR_8.name );
 return VAR_3;
}
