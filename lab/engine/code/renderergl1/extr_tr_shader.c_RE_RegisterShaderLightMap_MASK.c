
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int index; scalar_t__ defaultShader; } ;
typedef TYPE_1__ shader_t ;
typedef int qhandle_t ;
struct TYPE_5__ {int (* Printf ) (int ,char*) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (char const*,int,int ) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*) ;

qhandle_t FUNC_3( const char *VAR_4, int VAR_5 ) {
 shader_t *VAR_6;

 if ( FUNC_1( VAR_4 ) >= VAR_0 ) {
  VAR_3.Printf( VAR_1, "Shader name exceeds MAX_QPATH\n" );
  return 0;
 }

 VAR_6 = FUNC_0( VAR_4, VAR_5, VAR_2 );






 if ( VAR_6->defaultShader ) {
  return 0;
 }

 return VAR_6->index;
}
