
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {char* name; } ;
struct TYPE_16__ {char* prefix; int digits; } ;
struct TYPE_18__ {TYPE_6__ still; TYPE_5__ seq; } ;
struct TYPE_15__ {float val; } ;
struct TYPE_14__ {float val; } ;
struct TYPE_13__ {float val; } ;
struct TYPE_12__ {float val; } ;
struct TYPE_19__ {int index; TYPE_7__ source; int type; TYPE_4__ gamma; TYPE_3__ saturation; TYPE_2__ brightness; TYPE_1__ contrast; } ;
typedef TYPE_8__ lwClip ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (int,int) ;
 int FUNC_1 (void**,TYPE_8__*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3( char *VAR_2, lwClip **VAR_3, int *VAR_4 ){
 lwClip *VAR_5;
 char *VAR_6;

 VAR_5 = FUNC_0( 1, sizeof( lwClip ) );
 if ( !VAR_5 ) {
  return 0;
 }

 VAR_5->contrast.val = 1.0f;
 VAR_5->brightness.val = 1.0f;
 VAR_5->saturation.val = 1.0f;
 VAR_5->gamma.val = 1.0f;

 if ( ( VAR_6 = FUNC_2( VAR_2, "(sequence)" ) ) != ((void*)0) ) {
  VAR_6[ -1 ] = 0;
  VAR_5->type = VAR_0;
  VAR_5->source.seq.prefix = VAR_2;
  VAR_5->source.seq.digits = 3;
 }
 else {
  VAR_5->type = VAR_1;
  VAR_5->source.still.name = VAR_2;
 }

 ( *VAR_4 )++;
 VAR_5->index = *VAR_4;

 FUNC_1( (void **) VAR_3, VAR_5 );

 return VAR_5->index;
}
