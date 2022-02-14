
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct jpeg_compress_struct {int image_width; int image_height; int input_components; int next_scanline; scalar_t__ dest; TYPE_1__* comp_info; int in_color_space; TYPE_6__* err; } ;
struct TYPE_9__ {int setjmp_buffer; int pub; } ;
typedef TYPE_3__ q_jpeg_error_mgr_t ;
typedef TYPE_4__* my_dest_ptr ;
typedef int byte ;
struct TYPE_12__ {int output_message; int error_exit; } ;
struct TYPE_11__ {int (* Printf ) (int ,char*) ;} ;
struct TYPE_8__ {size_t free_in_buffer; } ;
struct TYPE_10__ {size_t size; TYPE_2__ pub; } ;
struct TYPE_7__ {int h_samp_factor; int v_samp_factor; } ;
typedef int * JSAMPROW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct jpeg_compress_struct*,int *,size_t) ;
 int FUNC_1 (struct jpeg_compress_struct*) ;
 int FUNC_2 (struct jpeg_compress_struct*) ;
 int FUNC_3 (struct jpeg_compress_struct*) ;
 int FUNC_4 (struct jpeg_compress_struct*) ;
 int FUNC_5 (struct jpeg_compress_struct*,int,int ) ;
 int FUNC_6 (struct jpeg_compress_struct*,int ) ;
 TYPE_6__* FUNC_7 (int *) ;
 int FUNC_8 (struct jpeg_compress_struct*,int **,int) ;
 TYPE_5__ VAR_5 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;

size_t FUNC_11(byte *VAR_6, size_t VAR_7, int VAR_8,
    int VAR_9, int VAR_10, byte *VAR_11, int VAR_12)
{
  struct jpeg_compress_struct VAR_13;
  q_jpeg_error_mgr_t VAR_14;
  JSAMPROW VAR_15[1];
  my_dest_ptr VAR_16;
  int VAR_17;
  size_t VAR_18;


  VAR_13.err = FUNC_7(&VAR_14.pub);
  VAR_13.err->error_exit = VAR_2;
  VAR_13.err->output_message = VAR_3;


  if (FUNC_9(VAR_14.setjmp_buffer))
  {



    FUNC_2(&VAR_13);

    VAR_5.Printf(VAR_1, "\n");
    return 0;
  }


  FUNC_1(&VAR_13);



  FUNC_0(&VAR_13, VAR_6, VAR_7);


  VAR_13.image_width = VAR_9;
  VAR_13.image_height = VAR_10;
  VAR_13.input_components = 3;
  VAR_13.in_color_space = VAR_0;

  FUNC_4(&VAR_13);
  FUNC_5(&VAR_13, VAR_8, VAR_4 );

  if (VAR_8 >= 85) {
    VAR_13.comp_info[0].h_samp_factor = 1;
    VAR_13.comp_info[0].v_samp_factor = 1;
  }


  FUNC_6(&VAR_13, VAR_4);



  VAR_17 = VAR_9 * VAR_13.input_components + VAR_12;

  while (VAR_13.next_scanline < VAR_13.image_height) {




    VAR_15[0] = &VAR_11[((VAR_13.image_height-1)*VAR_17)-VAR_13.next_scanline * VAR_17];
    (void) FUNC_8(&VAR_13, VAR_15, 1);
  }


  FUNC_3(&VAR_13);

  VAR_16 = (my_dest_ptr) VAR_13.dest;
  VAR_18 = VAR_16->size - VAR_16->pub.free_in_buffer;


  FUNC_2(&VAR_13);


  return VAR_18;
}
