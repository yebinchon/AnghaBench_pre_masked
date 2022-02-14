
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* event ) (int const,TYPE_1__*,void const*,size_t const) ;TYPE_2__* event_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_6__ {void const** old_buf; size_t* old_len; int mux_event; } ;
typedef TYPE_2__ event_ctx_t ;






 int VAR_0 ;
 size_t FUNC_0 (size_t const,size_t const) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void const*,void const*,size_t) ;
 int FUNC_4 (int const,TYPE_1__*,void const*,size_t const) ;

void FUNC_5 (const u32 VAR_1, hashcat_ctx_t *VAR_2, const void *VAR_3, const size_t VAR_4)
{
  event_ctx_t *VAR_5 = VAR_2->event_ctx;

  bool VAR_6 = 0;

  switch (VAR_1)
  {
    case 129: VAR_6 = 1; break;
    case 128: VAR_6 = 1; break;
    case 130: VAR_6 = 1; break;
    case 131: VAR_6 = 1; break;
  }

  if (VAR_6 == 0)
  {
    FUNC_1 (VAR_5->mux_event);
  }

  VAR_2->event (VAR_1, VAR_2, VAR_3, VAR_4);

  if (VAR_6 == 0)
  {
    FUNC_2 (VAR_5->mux_event);
  }



  if (VAR_6 == 0)
  {
    for (int VAR_7 = VAR_0 - 1; VAR_7 >= 1; VAR_7--)
    {
      FUNC_3 (VAR_5->old_buf[VAR_7], VAR_5->old_buf[VAR_7 - 1], VAR_5->old_len[VAR_7 - 1]);

      VAR_5->old_len[VAR_7] = VAR_5->old_len[VAR_7 - 1];
    }

    size_t VAR_8 = 0;

    if (VAR_3)
    {


      const size_t VAR_9 = sizeof (VAR_5->old_buf[0]);

      VAR_8 = FUNC_0 (VAR_4, VAR_9 - 1);

      FUNC_3 (VAR_5->old_buf[0], VAR_3, VAR_8);
    }

    VAR_5->old_len[0] = VAR_8;
  }
}
