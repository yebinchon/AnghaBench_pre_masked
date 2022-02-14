
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* event_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_7__ {char* msg_buf; size_t msg_len; int msg_newline; size_t prev_len; } ;
typedef TYPE_2__ event_ctx_t ;
struct TYPE_8__ {int wAttributes; } ;
typedef int HANDLE ;
typedef int FILE ;
typedef TYPE_3__ CONSOLE_SCREEN_BUFFER_INFO ;


 char* VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;




 int VAR_3 ;
 int FUNC_2 (int ,int const) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,size_t const,int,int *) ;
 int FUNC_5 (size_t const,int *) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7 (hashcat_ctx_t *VAR_4, FILE *VAR_5, const int VAR_6)
{
  event_ctx_t *VAR_7 = VAR_4->event_ctx;

  const char *VAR_8 = VAR_7->msg_buf;
  const size_t VAR_9 = VAR_7->msg_len;
  const bool VAR_10 = VAR_7->msg_newline;



  const size_t VAR_11 = VAR_7->prev_len;

  if (VAR_11) FUNC_5 (VAR_11, VAR_5);

  if (VAR_10 == 1)
  {
    VAR_7->prev_len = 0;
  }
  else
  {
    VAR_7->prev_len = VAR_9;
  }
  switch (VAR_6)
  {
    case 129: break;
    case 128: FUNC_4 ("\033[33m", 5, 1, VAR_5); break;
    case 130: FUNC_4 ("\033[31m", 5, 1, VAR_5); break;
    case 131: FUNC_4 ("\033[33m", 5, 1, VAR_5); break;
  }




  FUNC_4 (VAR_8, VAR_9, 1, VAR_5);
  switch (VAR_6)
  {
    case 129: break;
    case 128: FUNC_4 ("\033[0m", 4, 1, VAR_5); break;
    case 130: FUNC_4 ("\033[0m", 4, 1, VAR_5); break;
    case 131: FUNC_4 ("\033[0m", 4, 1, VAR_5); break;
  }




  if (VAR_10 == 1)
  {
    FUNC_4 (VAR_0, FUNC_6 (VAR_0), 1, VAR_5);



    if (VAR_6 == 130)
    {
      FUNC_4 (VAR_0, FUNC_6 (VAR_0), 1, VAR_5);
    }
  }

  FUNC_3 (VAR_5);
}
