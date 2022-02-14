
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* buffer; char* cursor; char* max; size_t tokenSize; char* token; int curLine; } ;
typedef TYPE_1__ picoParser_t ;



int FUNC_0( picoParser_t *VAR_0, int VAR_1, int VAR_2 ){
 int VAR_3 = 0;
 char *VAR_4;


 if ( VAR_0 == ((void*)0) || VAR_0->buffer == ((void*)0) ||
   VAR_0->cursor < VAR_0->buffer ||
   VAR_0->cursor >= VAR_0->max ) {
  return 0;
 }

 VAR_0->tokenSize = 0;
 VAR_0->token[ 0 ] = '\0';
 VAR_4 = VAR_0->cursor;


 while ( VAR_0->cursor < VAR_0->max && *VAR_0->cursor <= 32 )
 {
  if ( *VAR_0->cursor == '\n' ) {
   VAR_0->curLine++;
   VAR_3++;
  }
  VAR_0->cursor++;
 }

 if ( ( VAR_3 > 0 ) && !VAR_1 ) {
  VAR_0->cursor = VAR_4;
  return 0;
 }

 if ( *VAR_0->cursor == '\"' && VAR_2 ) {
  VAR_0->cursor++;
  while ( VAR_0->cursor < VAR_0->max && *VAR_0->cursor )
  {
   if ( *VAR_0->cursor == '\\' ) {
    if ( *( VAR_0->cursor + 1 ) == '"' ) {
     VAR_0->cursor++;
    }
    VAR_0->token[ VAR_0->tokenSize++ ] = *VAR_0->cursor++;
    continue;
   }
   else if ( *VAR_0->cursor == '\"' ) {
    VAR_0->cursor++;
    break;
   }
   else if ( *VAR_0->cursor == '\n' ) {
    VAR_0->curLine++;
   }
   VAR_0->token[ VAR_0->tokenSize++ ] = *VAR_0->cursor++;
  }

  VAR_0->token[ VAR_0->tokenSize ] = '\0';
  return 1;
 }

 while ( VAR_0->cursor < VAR_0->max && *VAR_0->cursor > 32 )
 {
  if ( *VAR_0->cursor == '\n' ) {
   VAR_0->curLine++;
  }
  VAR_0->token[ VAR_0->tokenSize++ ] = *VAR_0->cursor++;
 }

 VAR_0->token[ VAR_0->tokenSize ] = '\0';
 return 1;
}
