
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* Printf ) (int ,char*,char const*,int ) ;} ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char const*,char*) ;
 TYPE_2__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_1 (int ,char*,char const*,int ) ;

__attribute__((used)) static unsigned FUNC_2( const char *VAR_6 )
{
 if ( !FUNC_0( VAR_6, "GT0" ) )
 {
  return VAR_1;
 }
 else if ( !FUNC_0( VAR_6, "LT128" ) )
 {
  return VAR_2;
 }
 else if ( !FUNC_0( VAR_6, "GE128" ) )
 {
  return VAR_0;
 }

 VAR_4.Printf( VAR_3, "WARNING: invalid alphaFunc name '%s' in shader '%s'\n", VAR_6, VAR_5.name );
 return 0;
}
