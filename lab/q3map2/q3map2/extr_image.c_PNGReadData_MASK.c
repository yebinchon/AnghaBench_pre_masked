
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int png_struct ;
typedef scalar_t__ png_size_t ;
typedef int png_byte ;
struct TYPE_2__ {size_t offset; scalar_t__ size; int * buffer; } ;
typedef TYPE_1__ pngBuffer_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2( png_struct *VAR_0, png_byte *VAR_1, png_size_t VAR_2 ){
 pngBuffer_t *VAR_3 = (pngBuffer_t*) FUNC_1( VAR_0 );


 if ( ( VAR_3->offset + VAR_2 ) > VAR_3->size ) {
  VAR_2 = ( VAR_3->size - VAR_3->offset );
 }
 FUNC_0( VAR_1, &VAR_3->buffer[ VAR_3->offset ], VAR_2 );
 VAR_3->offset += VAR_2;

}
