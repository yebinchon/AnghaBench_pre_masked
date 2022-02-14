
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t cnt; char* buf; int avail; scalar_t__ incr; scalar_t__ pos; } ;
typedef TYPE_1__ wl_data_t ;
struct TYPE_5__ {TYPE_1__* wl_data; } ;
typedef TYPE_2__ hashcat_ctx_t ;
typedef int HCFILE ;


 int const VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 size_t FUNC_2 (char*,int,scalar_t__,int *) ;
 scalar_t__ FUNC_3 (char*,int,scalar_t__) ;

int FUNC_4 (hashcat_ctx_t *VAR_1, HCFILE *VAR_2)
{
  wl_data_t *VAR_3 = VAR_1->wl_data;



  VAR_3->pos = 0;

  VAR_3->cnt = FUNC_2 (VAR_3->buf, 1, VAR_3->incr - 1000, VAR_2);

  VAR_3->buf[VAR_3->cnt] = 0;

  if (VAR_3->cnt == 0) return 0;

  if (VAR_3->buf[VAR_3->cnt - 1] == '\n') return 0;

  while (!FUNC_0 (VAR_2))
  {
    if (VAR_3->cnt == VAR_3->avail)
    {
      VAR_3->buf = (char *) FUNC_3 (VAR_3->buf, VAR_3->avail, VAR_3->incr);

      VAR_3->avail += VAR_3->incr;
    }

    const int VAR_4 = FUNC_1 (VAR_2);

    if (VAR_4 == VAR_0) break;

    VAR_3->buf[VAR_3->cnt] = (char) VAR_4;

    VAR_3->cnt++;

    if (VAR_4 == '\n') break;
  }



  if (VAR_3->buf[VAR_3->cnt - 1] != '\n')
  {
    VAR_3->cnt++;

    VAR_3->buf[VAR_3->cnt - 1] = '\n';
  }

  return 0;
}
