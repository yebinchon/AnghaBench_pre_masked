
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* buffer; int cursor; int scroll; int widthInChars; int maxchars; } ;
typedef TYPE_1__ mfield_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5( mfield_t *VAR_1, int VAR_2 ) {
 int VAR_3;

 if ( VAR_2 == 'v' - 'a' + 1 ) {
  FUNC_1( VAR_1 );
  return;
 }

 if ( VAR_2 == 'c' - 'a' + 1 ) {
  FUNC_0( VAR_1 );
  return;
 }

 VAR_3 = FUNC_3( VAR_1->buffer );

 if ( VAR_2 == 'h' - 'a' + 1 ) {
  if ( VAR_1->cursor > 0 ) {
   FUNC_2( VAR_1->buffer + VAR_1->cursor - 1,
    VAR_1->buffer + VAR_1->cursor, VAR_3 + 1 - VAR_1->cursor );
   VAR_1->cursor--;
   if ( VAR_1->cursor < VAR_1->scroll )
   {
    VAR_1->scroll--;
   }
  }
  return;
 }

 if ( VAR_2 == 'a' - 'a' + 1 ) {
  VAR_1->cursor = 0;
  VAR_1->scroll = 0;
  return;
 }

 if ( VAR_2 == 'e' - 'a' + 1 ) {
  VAR_1->cursor = VAR_3;
  VAR_1->scroll = VAR_1->cursor - VAR_1->widthInChars + 1;
  if (VAR_1->scroll < 0)
   VAR_1->scroll = 0;
  return;
 }




 if ( VAR_2 < 32 ) {
  return;
 }

 if ( FUNC_4() ) {
  if ((VAR_1->cursor == VAR_0 - 1) || (VAR_1->maxchars && VAR_1->cursor >= VAR_1->maxchars))
   return;
 } else {

  if (( VAR_3 == VAR_0 - 1 ) || (VAR_1->maxchars && VAR_3 >= VAR_1->maxchars))
   return;
  FUNC_2( VAR_1->buffer + VAR_1->cursor + 1, VAR_1->buffer + VAR_1->cursor, VAR_3 + 1 - VAR_1->cursor );
 }

 VAR_1->buffer[VAR_1->cursor] = VAR_2;
 if (!VAR_1->maxchars || VAR_1->cursor < VAR_1->maxchars-1)
  VAR_1->cursor++;

 if ( VAR_1->cursor >= VAR_1->widthInChars )
 {
  VAR_1->scroll++;
 }

 if ( VAR_1->cursor == VAR_3 + 1) {
  VAR_1->buffer[VAR_1->cursor] = 0;
 }
}
