
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int content_length; scalar_t__ transfer; int buffer_end; int buffer_start; char* buffer; size_t chunked_offset; int protocol; int on_error; int on_body; int request; int chunked_decoder; } ;
typedef int PyObject ;
typedef TYPE_1__ Parser ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,size_t,int) ;
 int FUNC_1 (int ,int *) ;
 int VAR_3 ;
 int * FUNC_2 (char*,size_t,int ) ;
 int * FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int * VAR_5 ;
 int FUNC_10 (int *,char*,int*) ;
 int FUNC_11 (char*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int FUNC_12(Parser* VAR_8) {




  char* VAR_9 = ((void*)0);
  size_t VAR_10 = 0;
  int VAR_11 = -2;
  if(VAR_8->content_length == VAR_0
     && VAR_8->transfer == VAR_2) {
    VAR_11 = 0;
    goto on_body;
  }

  if(VAR_8->content_length == 0) {
    VAR_9 = (char*)VAR_7;
    VAR_11 = 0;
    goto on_body;
  }

  if(VAR_8->content_length != VAR_0) {
    if(VAR_8->content_length > VAR_8->buffer_end - VAR_8->buffer_start) {
      VAR_11 = -2;
      goto finally;
    }

    VAR_9 = VAR_8->buffer + VAR_8->buffer_start;
    VAR_10 = VAR_8->content_length;

    VAR_8->buffer_start += VAR_8->content_length;


    VAR_11 = 1;

    goto on_body;
  }

  if(VAR_8->transfer == VAR_1) {
    size_t VAR_12 = VAR_8->chunked_offset;
    VAR_8->chunked_offset = VAR_8->buffer_end - VAR_8->buffer_start - VAR_8->chunked_offset;
    VAR_11 = FUNC_10(
      &VAR_8->chunked_decoder,
      VAR_8->buffer + VAR_8->buffer_start + VAR_12,
      &VAR_8->chunked_offset);
    VAR_8->chunked_offset = VAR_8->chunked_offset + VAR_12;

    if(VAR_11 == -2) {
      VAR_8->buffer_end = VAR_8->buffer_start + VAR_8->chunked_offset;
      goto finally;
    }

    if(VAR_11 == -1)
      goto on_error;

    VAR_9 = VAR_8->buffer + VAR_8->buffer_start;
    VAR_10 = VAR_8->chunked_offset;

    VAR_8->buffer_start += VAR_8->chunked_offset;
    VAR_8->buffer_end = VAR_8->buffer_start + (size_t)VAR_11;

    goto on_body;
  }

  goto finally;

  on_body:

  if(VAR_9) {
  }
  if(!FUNC_0(VAR_8->protocol, VAR_9, VAR_10, VAR_8->buffer_end - VAR_8->buffer_start))
    goto error;


  FUNC_9(VAR_8, 0);

  goto finally;
  on_error:
  if(!FUNC_1(VAR_8->protocol, VAR_5))
    goto error;


  FUNC_9(VAR_8, 1);

  VAR_11 = -1;

  goto finally;

  error:
  VAR_11 = -3;

  finally:



  return VAR_11;
}
