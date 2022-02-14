
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int ansi_parser_state; scalar_t__ previous_eol; scalar_t__ utf8_codepoint; scalar_t__ utf8_bytes_left; } ;
struct TYPE_8__ {int last_input_record; scalar_t__ last_utf16_high_surrogate; scalar_t__ last_key_offset; scalar_t__ last_key_len; int * read_raw_wait; int read_line_buffer; int * unused_; } ;
struct TYPE_10__ {TYPE_3__ wr; TYPE_2__ rd; } ;
struct TYPE_7__ {int fd; } ;
struct TYPE_11__ {int flags; TYPE_4__ tty; scalar_t__ reqs_pending; TYPE_1__ u; scalar_t__ handle; } ;
typedef TYPE_5__ uv_tty_t ;
typedef int uv_stream_t ;
typedef int uv_loop_t ;
typedef int uv_file ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int CONSOLE_SCREEN_BUFFER_INFO ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,scalar_t__*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__,int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ VAR_10 ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int VAR_11 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int VAR_12 ;
 int FUNC_14 (int *) ;

int FUNC_15(uv_loop_t* VAR_13, uv_tty_t* VAR_14, uv_file VAR_15, int VAR_16) {
  BOOL VAR_17;
  DWORD VAR_18;
  HANDLE VAR_19;
  CONSOLE_SCREEN_BUFFER_INFO VAR_20;
  (void)VAR_16;

  FUNC_7();
  VAR_19 = (HANDLE) FUNC_6(VAR_15);
  if (VAR_19 == VAR_3)
    return VAR_4;

  if (VAR_15 <= 2) {






    if (!FUNC_0(VAR_3,
                         VAR_19,
                         VAR_3,
                         &VAR_19,
                         0,
                         VAR_2,
                         VAR_1))
      return FUNC_12(FUNC_2());
    VAR_15 = -1;
  }

  VAR_17 = FUNC_3(VAR_19, &VAR_18);
  if (!VAR_17) {

    if (!FUNC_1(VAR_19, &VAR_20)) {
      return FUNC_12(FUNC_2());
    }



    FUNC_10(&VAR_12);

    if (VAR_10)
      FUNC_5(VAR_19);


    FUNC_13(&VAR_20);

    FUNC_14(&VAR_20);

    FUNC_9(&VAR_12);
  }


  FUNC_11(VAR_13, (uv_stream_t*) VAR_14, VAR_9);
  FUNC_8((uv_stream_t*) VAR_14);

  VAR_14->handle = VAR_19;
  VAR_14->u.fd = VAR_15;
  VAR_14->reqs_pending = 0;
  VAR_14->flags |= VAR_5;

  if (VAR_17) {

    VAR_14->flags |= VAR_7 | VAR_6;

    VAR_14->tty.rd.unused_ = ((void*)0);
    VAR_14->tty.rd.read_line_buffer = VAR_11;
    VAR_14->tty.rd.read_raw_wait = ((void*)0);


    VAR_14->tty.rd.last_key_len = 0;
    VAR_14->tty.rd.last_key_offset = 0;
    VAR_14->tty.rd.last_utf16_high_surrogate = 0;
    FUNC_4(&VAR_14->tty.rd.last_input_record, 0, sizeof VAR_14->tty.rd.last_input_record);
  } else {

    VAR_14->flags |= VAR_8;


    VAR_14->tty.wr.utf8_bytes_left = 0;
    VAR_14->tty.wr.utf8_codepoint = 0;


    VAR_14->tty.wr.previous_eol = 0;


    VAR_14->tty.wr.ansi_parser_state = VAR_0;
  }

  return 0;
}
