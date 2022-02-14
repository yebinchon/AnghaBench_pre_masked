
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int y; } ;
struct TYPE_6__ {int height; int width; TYPE_1__ generic; } ;
typedef TYPE_2__ menubitmap_s ;
struct TYPE_7__ {size_t newBotIndex; size_t gametype; int mapnamebuffer; scalar_t__ newBot; int newBotName; int * playerNameBuffers; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int,int ,int,int ) ;
 int FUNC_3 (int,int,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 size_t* VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__ VAR_8 ;

__attribute__((used)) static void FUNC_4( void *VAR_9 ) {
 menubitmap_s *VAR_10;
 int VAR_11;
 int VAR_12;


 if( VAR_8.newBot ) {
  FUNC_1( VAR_8.playerNameBuffers[VAR_8.newBotIndex], VAR_8.newBotName, 16 );
  VAR_8.newBot = VAR_7;
 }

 VAR_10 = (menubitmap_s *)VAR_9;

 FUNC_0( VAR_10 );

 VAR_11 = VAR_10->generic.x;
 VAR_12 = VAR_10->generic.y + VAR_10->height;
 FUNC_3( VAR_11, VAR_12, VAR_10->width, 40, VAR_3 );

 VAR_11 += VAR_10->width / 2;
 VAR_12 += 4;
 FUNC_2( VAR_11, VAR_12, VAR_8.mapnamebuffer, VAR_1|VAR_2, VAR_4 );

 VAR_12 += VAR_0;
 FUNC_2( VAR_11, VAR_12, VAR_5[VAR_6[VAR_8.gametype]], VAR_1|VAR_2, VAR_4 );
}
