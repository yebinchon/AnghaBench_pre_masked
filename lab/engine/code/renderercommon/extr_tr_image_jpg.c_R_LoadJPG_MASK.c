
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct jpeg_decompress_struct {unsigned int output_width; unsigned int output_height; int output_components; int output_scanline; int out_color_space; TYPE_3__* err; int * member_0; } ;
struct TYPE_4__ {int setjmp_buffer; int pub; } ;
typedef TYPE_1__ q_jpeg_error_mgr_t ;
typedef unsigned char byte ;
struct TYPE_6__ {int output_message; int error_exit; } ;
struct TYPE_5__ {int (* FS_ReadFile ) (char*,void**) ;unsigned char* (* Malloc ) (unsigned int) ;int (* FS_FreeFile ) (void*) ;int (* Error ) (int ,char*,char const*,unsigned int,unsigned int,unsigned int,int) ;int (* Printf ) (int ,char*,char const*) ;} ;
typedef unsigned char** JSAMPARRAY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct jpeg_decompress_struct*) ;
 int FUNC_1 (struct jpeg_decompress_struct*) ;
 int FUNC_2 (struct jpeg_decompress_struct*) ;
 int FUNC_3 (struct jpeg_decompress_struct*,unsigned char*,int) ;
 int FUNC_4 (struct jpeg_decompress_struct*,int ) ;
 int FUNC_5 (struct jpeg_decompress_struct*,unsigned char**,int) ;
 int FUNC_6 (struct jpeg_decompress_struct*) ;
 TYPE_3__* FUNC_7 (int *) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*,void**) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (int ,char*,char const*) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,char*,char const*,unsigned int,unsigned int,unsigned int,int) ;
 unsigned char* FUNC_14 (unsigned int) ;
 int FUNC_15 (void*) ;

void FUNC_16(const char *VAR_7, unsigned char **VAR_8, int *VAR_9, int *VAR_10)
{



  struct jpeg_decompress_struct VAR_11 = {((void*)0)};
  q_jpeg_error_mgr_t VAR_12;

  JSAMPARRAY VAR_13;
  unsigned int VAR_14;
  unsigned int VAR_15, VAR_16;
  unsigned int VAR_17, VAR_18;
  byte *VAR_19;
  int VAR_20;
 union {
  byte *b;
  void *v;
 } VAR_21;
  byte *VAR_22;







  VAR_20 = VAR_6.FS_ReadFile ( ( char * ) VAR_7, &VAR_21.v);
  if (!VAR_21.b || VAR_20 < 0) {
 return;
  }
  VAR_11.err = FUNC_7(&VAR_12.pub);
  VAR_11.err->error_exit = VAR_3;
  VAR_11.err->output_message = VAR_4;


  if (FUNC_8(VAR_12.setjmp_buffer))
  {



    FUNC_1(&VAR_11);
    VAR_6.FS_FreeFile(VAR_21.v);


    VAR_6.Printf(VAR_2, ", loading file %s\n", VAR_7);
    return;
  }


  FUNC_0(&VAR_11);



  FUNC_3(&VAR_11, VAR_21.b, VAR_20);



  (void) FUNC_4(&VAR_11, VAR_5);
  VAR_11.out_color_space = VAR_1;



  (void) FUNC_6(&VAR_11);
  VAR_15 = VAR_11.output_width * VAR_11.output_height;

  if(!VAR_11.output_width || !VAR_11.output_height
      || ((VAR_15 * 4) / VAR_11.output_width) / 4 != VAR_11.output_height
      || VAR_15 > 0x1FFFFFFF || VAR_11.output_components != 3
    )
  {

    VAR_6.FS_FreeFile (VAR_21.v);
    FUNC_1(&VAR_11);

    VAR_6.Error(VAR_0, "LoadJPG: %s has an invalid image format: %dx%d*4=%d, components: %d", VAR_7,
      VAR_11.output_width, VAR_11.output_height, VAR_15 * 4, VAR_11.output_components);
  }

  VAR_16 = VAR_15 * 4;
  VAR_14 = VAR_11.output_width * VAR_11.output_components;

  VAR_19 = VAR_6.Malloc(VAR_16);

  *VAR_9 = VAR_11.output_width;
  *VAR_10 = VAR_11.output_height;







  while (VAR_11.output_scanline < VAR_11.output_height) {




 VAR_22 = ((VAR_19+(VAR_14*VAR_11.output_scanline)));
 VAR_13 = &VAR_22;
    (void) FUNC_5(&VAR_11, VAR_13, 1);
  }

  VAR_22 = VAR_19;


  VAR_17 = VAR_15 * VAR_11.output_components;
  VAR_18 = VAR_16;

  do
  {
    VAR_22[--VAR_18] = 255;
    VAR_22[--VAR_18] = VAR_22[--VAR_17];
    VAR_22[--VAR_18] = VAR_22[--VAR_17];
    VAR_22[--VAR_18] = VAR_22[--VAR_17];
  } while(VAR_17);

  *VAR_8 = VAR_19;



  FUNC_2(&VAR_11);







  FUNC_1(&VAR_11);






  VAR_6.FS_FreeFile (VAR_21.v);






}
