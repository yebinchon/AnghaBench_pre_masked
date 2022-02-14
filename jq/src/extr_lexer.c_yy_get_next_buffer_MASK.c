
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ yyscan_t ;
typedef int yy_size_t ;
struct yyguts_t {char* yytext_ptr; char* yy_c_buf_p; int yy_n_chars; } ;
typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_3__ {char* yy_ch_buf; scalar_t__ yy_fill_buffer; scalar_t__ yy_buffer_status; int yy_n_chars; int yy_buf_size; scalar_t__ yy_is_our_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (void*,int ,scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4 (yyscan_t VAR_9)
{
    struct yyguts_t * VAR_10 = (struct yyguts_t*)VAR_9;
 char *VAR_11 = VAR_4->yy_ch_buf;
 char *VAR_12 = VAR_10->yytext_ptr;
 int VAR_13, VAR_14;
 int VAR_15;

 if ( VAR_10->yy_c_buf_p > &VAR_4->yy_ch_buf[VAR_10->yy_n_chars + 1] )
  FUNC_0(
  "fatal flex scanner internal error--end of buffer missed" );

 if ( VAR_4->yy_fill_buffer == 0 )
  {
  if ( VAR_10->yy_c_buf_p - VAR_10->yytext_ptr - VAR_6 == 1 )
   {



   return VAR_1;
   }

  else
   {



   return VAR_2;
   }
  }




 VAR_13 = (int) (VAR_10->yy_c_buf_p - VAR_10->yytext_ptr - 1);

 for ( VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14 )
  *(VAR_11++) = *(VAR_12++);

 if ( VAR_4->yy_buffer_status == VAR_3 )



  VAR_4->yy_n_chars = VAR_10->yy_n_chars = 0;

 else
  {
   int VAR_16 =
   VAR_4->yy_buf_size - VAR_13 - 1;

  while ( VAR_16 <= 0 )
   {


   YY_BUFFER_STATE VAR_17 = VAR_4;

   int VAR_18 =
    (int) (VAR_10->yy_c_buf_p - VAR_17->yy_ch_buf);

   if ( VAR_17->yy_is_our_buffer )
    {
    int VAR_19 = VAR_17->yy_buf_size * 2;

    if ( VAR_19 <= 0 )
     VAR_17->yy_buf_size += VAR_17->yy_buf_size / 8;
    else
     VAR_17->yy_buf_size *= 2;

    VAR_17->yy_ch_buf = (char *)

     FUNC_2( (void *) VAR_17->yy_ch_buf,
        (yy_size_t) (VAR_17->yy_buf_size + 2) , VAR_9 );
    }
   else

    VAR_17->yy_ch_buf = ((void*)0);

   if ( ! VAR_17->yy_ch_buf )
    FUNC_0(
    "fatal error - scanner input buffer overflow" );

   VAR_10->yy_c_buf_p = &VAR_17->yy_ch_buf[VAR_18];

   VAR_16 = VAR_4->yy_buf_size -
      VAR_13 - 1;

   }

  if ( VAR_16 > VAR_7 )
   VAR_16 = VAR_7;


  FUNC_1( (&VAR_4->yy_ch_buf[VAR_13]),
   VAR_10->yy_n_chars, VAR_16 );

  VAR_4->yy_n_chars = VAR_10->yy_n_chars;
  }

 if ( VAR_10->yy_n_chars == 0 )
  {
  if ( VAR_13 == VAR_6 )
   {
   VAR_15 = VAR_1;
   FUNC_3( VAR_8 , VAR_9);
   }

  else
   {
   VAR_15 = VAR_2;
   VAR_4->yy_buffer_status =
    VAR_3;
   }
  }

 else
  VAR_15 = VAR_0;

 if ((VAR_10->yy_n_chars + VAR_13) > VAR_4->yy_buf_size) {

  int VAR_20 = VAR_10->yy_n_chars + VAR_13 + (VAR_10->yy_n_chars >> 1);
  VAR_4->yy_ch_buf = (char *) FUNC_2(
   (void *) VAR_4->yy_ch_buf, (yy_size_t) VAR_20 , VAR_9 );
  if ( ! VAR_4->yy_ch_buf )
   FUNC_0( "out of dynamic memory in yy_get_next_buffer()" );

  VAR_4->yy_buf_size = (int) (VAR_20 - 2);
 }

 VAR_10->yy_n_chars += VAR_13;
 VAR_4->yy_ch_buf[VAR_10->yy_n_chars] = VAR_5;
 VAR_4->yy_ch_buf[VAR_10->yy_n_chars + 1] = VAR_5;

 VAR_10->yytext_ptr = &VAR_4->yy_ch_buf[0];

 return VAR_15;
}
