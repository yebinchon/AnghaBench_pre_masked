
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* my_src_ptr ;
typedef TYPE_3__* j_decompress_ptr ;
typedef int boolean ;
struct TYPE_9__ {int src; } ;
struct TYPE_7__ {size_t bytes_in_buffer; void** next_input_byte; } ;
struct TYPE_8__ {size_t src_size; size_t src_buffer; scalar_t__ start_of_file; TYPE_1__ pub; void** buffer; } ;
typedef void* JOCTET ;


 int FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (void**,size_t,size_t) ;

__attribute__((used)) static boolean FUNC_3( j_decompress_ptr VAR_6 ){
 my_src_ptr VAR_7 = (my_src_ptr) VAR_6->src;
 size_t VAR_8;

 if ( VAR_7->src_size > VAR_1 ) {
  VAR_8 = VAR_1;
 }
 else{
  VAR_8 = VAR_7->src_size;
 }

 FUNC_2( VAR_7->buffer, VAR_7->src_buffer, VAR_8 );
 VAR_7->src_buffer += VAR_8;
 VAR_7->src_size -= VAR_8;

 if ( VAR_8 <= 0 ) {
  if ( VAR_7->start_of_file ) {
   FUNC_0( VAR_6, VAR_2 );
  }
  FUNC_1( VAR_6, VAR_4 );

  VAR_7->buffer[0] = (JOCTET) 0xFF;
  VAR_7->buffer[1] = (JOCTET) VAR_3;
  VAR_8 = 2;
 }

 VAR_7->pub.next_input_byte = VAR_7->buffer;
 VAR_7->pub.bytes_in_buffer = VAR_8;
 VAR_7->start_of_file = VAR_0;

 return VAR_5;
}
