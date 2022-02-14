
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int * idx; int stream_padding; } ;
typedef TYPE_1__ xz_file_info ;
struct stat {int st_size; } ;
typedef int off_t ;
typedef scalar_t__ lzma_vli ;
struct TYPE_17__ {scalar_t__ version; scalar_t__ backward_size; } ;
typedef TYPE_2__ lzma_stream_flags ;
struct TYPE_18__ {int avail_in; int next_in; } ;
typedef TYPE_3__ lzma_stream ;
typedef int lzma_ret ;
typedef int lzma_index ;
struct TYPE_19__ {scalar_t__* u32; int u8; } ;
typedef TYPE_4__ io_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,struct stat*) ;
 scalar_t__ FUNC_1 (int,TYPE_4__*,int,int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (TYPE_3__*,int **,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_14(xz_file_info *VAR_9, int VAR_10)
{
 struct stat VAR_11;

 FUNC_0(VAR_10, &VAR_11);
 if (VAR_11.st_size <= 0) {
  return 1;
 }

 if (VAR_11.st_size < 2 * VAR_6) {
  return 1;
 }

 io_buf VAR_12;
 lzma_stream_flags VAR_13;
 lzma_stream_flags VAR_14;
 lzma_ret VAR_15;


 lzma_stream VAR_16 = VAR_7;


 lzma_index *VAR_17 = ((void*)0);


 lzma_index *VAR_18 = ((void*)0);



 off_t VAR_19 = VAR_11.st_size;


 do {



  if (VAR_19 < 2 * VAR_6) {
   goto error;
  }

  VAR_19 -= VAR_6;
  lzma_vli VAR_20 = 0;



  while (1) {
   if (VAR_19 < VAR_6) {
    goto error;
   }

   if (FUNC_1(VAR_10, &VAR_12,
     VAR_6, VAR_19))
    goto error;


   int VAR_21 = 2;
   if (VAR_12.u32[VAR_21] != 0)
    break;





   do {
    VAR_20 += 4;
    VAR_19 -= 4;
    --VAR_21;
   } while (VAR_21 >= 0 && VAR_12.u32[VAR_21] == 0);
  }


  VAR_15 = FUNC_11(&VAR_14, VAR_12.u8);
  if (VAR_15 != VAR_3) {
   goto error;
  }
  if (VAR_14.version != 0) {
   goto error;
  }


  lzma_vli VAR_22 = VAR_14.backward_size;
  if ((lzma_vli)(VAR_19) < VAR_22 + VAR_6) {
   goto error;
  }


  VAR_19 -= VAR_22;


  VAR_15 = FUNC_5(&VAR_16, &VAR_18, VAR_8);
  if (VAR_15 != VAR_3) {
   goto error;
  }

  do {


   VAR_16.avail_in = FUNC_13(VAR_0, VAR_22);
   if (FUNC_1(VAR_10, &VAR_12, VAR_16.avail_in, VAR_19))
    goto error;

   VAR_19 += VAR_16.avail_in;
   VAR_22 -= VAR_16.avail_in;

   VAR_16.next_in = VAR_12.u8;
   VAR_15 = FUNC_2(&VAR_16, VAR_4);

  } while (VAR_15 == VAR_3);




  if (VAR_15 == VAR_5)
   if (VAR_22 != 0 || VAR_16.avail_in != 0)
    VAR_15 = VAR_2;

  if (VAR_15 != VAR_5) {





   if (VAR_15 == VAR_1)
    VAR_15 = VAR_2;

   goto error;
  }



  VAR_19 -= VAR_14.backward_size + VAR_6;
  if ((lzma_vli)(VAR_19) < FUNC_9(VAR_18)) {
   goto error;
  }

  VAR_19 -= FUNC_9(VAR_18);
  if (FUNC_1(VAR_10, &VAR_12, VAR_6, VAR_19))
   goto error;

  VAR_15 = FUNC_12(&VAR_13, VAR_12.u8);
  if (VAR_15 != VAR_3) {
   goto error;
  }

  VAR_15 = FUNC_10(&VAR_13, &VAR_14);
  if (VAR_15 != VAR_3) {
   goto error;
  }




  VAR_15 = FUNC_7(VAR_18, &VAR_14);
  if (VAR_15 != VAR_3)
   goto error;



  VAR_15 = FUNC_8(VAR_18, VAR_20);
  if (VAR_15 != VAR_3)
   goto error;

  if (VAR_17 != ((void*)0)) {


   VAR_15 = FUNC_4(
     VAR_18, VAR_17, ((void*)0));
   if (VAR_15 != VAR_3) {
    goto error;
   }
  }

  VAR_17 = VAR_18;
  VAR_18 = ((void*)0);

  VAR_9->stream_padding += VAR_20;

 } while (VAR_19 > 0);

 FUNC_3(&VAR_16);


 VAR_9->idx = VAR_17;
 return 0;

error:

 FUNC_3(&VAR_16);
 FUNC_6(VAR_17, ((void*)0));
 FUNC_6(VAR_18, ((void*)0));
 return 1;
}
