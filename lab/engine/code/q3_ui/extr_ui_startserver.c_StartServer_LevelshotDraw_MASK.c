
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int y; int id; int flags; scalar_t__ name; } ;
struct TYPE_5__ {int width; int height; void* focusshader; TYPE_1__ generic; void* shader; scalar_t__ focuspic; scalar_t__ errorpic; } ;
typedef TYPE_2__ menubitmap_s ;
struct TYPE_6__ {int page; int * maplist; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_4 ;
 int FUNC_3 (int,int,int,int,void*) ;
 int FUNC_4 (int,int,char*,int,int ) ;
 int FUNC_5 (int,int,int,int,int ) ;
 char* FUNC_6 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 void* FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8( void *VAR_9 ) {
 menubitmap_s *VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 const char *VAR_16;
 char VAR_17[ VAR_2 ];

 VAR_10 = (menubitmap_s *)VAR_9;

 if( !VAR_10->generic.name ) {
  return;
 }

 if( VAR_10->generic.name && !VAR_10->shader ) {
  VAR_10->shader = FUNC_7( VAR_10->generic.name );
  if( !VAR_10->shader && VAR_10->errorpic ) {
   VAR_10->shader = FUNC_7( VAR_10->errorpic );
  }
 }

 if( VAR_10->focuspic && !VAR_10->focusshader ) {
  VAR_10->focusshader = FUNC_7( VAR_10->focuspic );
 }

 VAR_11 = VAR_10->generic.x;
 VAR_12 = VAR_10->generic.y;
 VAR_13 = VAR_10->width;
 VAR_14 = VAR_10->height;
 if( VAR_10->shader ) {
  FUNC_3( VAR_11, VAR_12, VAR_13, VAR_14, VAR_10->shader );
 }

 VAR_11 = VAR_10->generic.x;
 VAR_12 = VAR_10->generic.y + VAR_10->height;
 FUNC_5( VAR_11, VAR_12, VAR_10->width, 28, VAR_6 );

 VAR_11 += VAR_10->width / 2;
 VAR_12 += 4;
 VAR_15 = VAR_8.page * VAR_1 + VAR_10->generic.id - VAR_0;

 VAR_16 = FUNC_6( VAR_8.maplist[ VAR_15 ]);
 FUNC_1( VAR_17, FUNC_0( VAR_16, "map"), VAR_2 );
 FUNC_2( VAR_17 );
 FUNC_4( VAR_11, VAR_12, VAR_17, VAR_4|VAR_5, VAR_7 );

 VAR_11 = VAR_10->generic.x;
 VAR_12 = VAR_10->generic.y;
 VAR_13 = VAR_10->width;
 VAR_14 = VAR_10->height + 28;
 if( VAR_10->generic.flags & VAR_3 ) {
  FUNC_3( VAR_11, VAR_12, VAR_13, VAR_14, VAR_10->focusshader );
 }
}
