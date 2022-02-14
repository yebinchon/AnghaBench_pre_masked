
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* my_src_ptr ;
typedef TYPE_3__* j_decompress_ptr ;
struct TYPE_8__ {int src; } ;
struct TYPE_6__ {size_t next_input_byte; scalar_t__ bytes_in_buffer; } ;
struct TYPE_7__ {TYPE_1__ pub; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1( j_decompress_ptr VAR_0, long VAR_1 ){
 my_src_ptr VAR_2 = (my_src_ptr) VAR_0->src;





 if ( VAR_1 > 0 ) {
  while ( VAR_1 > (long) VAR_2->pub.bytes_in_buffer ) {
   VAR_1 -= (long) VAR_2->pub.bytes_in_buffer;
   (void) FUNC_0( VAR_0 );



  }
  VAR_2->pub.next_input_byte += (size_t) VAR_1;
  VAR_2->pub.bytes_in_buffer -= (size_t) VAR_1;
 }
}
