
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor; int scroll; int widthInChars; int buffer; } ;
typedef TYPE_1__ field_t ;
struct TYPE_6__ {scalar_t__ down; } ;


 int FUNC_0 (TYPE_1__*) ;




 int VAR_0 ;


 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;

void FUNC_4( field_t *VAR_4, int VAR_5 ) {
 int VAR_6;


 if ( ( ( VAR_5 == 130 ) || ( VAR_5 == VAR_0 ) ) && VAR_3[VAR_1].down ) {
  FUNC_0( VAR_4 );
  return;
 }

 VAR_5 = FUNC_3( VAR_5 );
 VAR_6 = FUNC_2( VAR_4->buffer );

 switch ( VAR_5 ) {
  case 133:
   if ( VAR_4->cursor < VAR_6 ) {
    FUNC_1( VAR_4->buffer + VAR_4->cursor,
     VAR_4->buffer + VAR_4->cursor + 1, VAR_6 - VAR_4->cursor );
   }
   break;

  case 128:
   if ( VAR_4->cursor < VAR_6 ) {
    VAR_4->cursor++;
   }
   break;

  case 129:
   if ( VAR_4->cursor > 0 ) {
    VAR_4->cursor--;
   }
   break;

  case 131:
   VAR_4->cursor = 0;
   break;

  case 132:
   VAR_4->cursor = VAR_6;
   break;

  case 130:
   VAR_2 = !VAR_2;
   break;

  default:
   break;
 }


 if ( VAR_4->cursor < VAR_4->scroll ) {
  VAR_4->scroll = VAR_4->cursor;
 } else if ( VAR_4->cursor >= VAR_4->scroll + VAR_4->widthInChars && VAR_4->cursor <= VAR_6 ) {
  VAR_4->scroll = VAR_4->cursor - VAR_4->widthInChars + 1;
 }
}
