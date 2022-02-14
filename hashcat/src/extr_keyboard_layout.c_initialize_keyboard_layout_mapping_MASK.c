
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int token_cnt; int* len_min; int* len_max; int* sep; int * len; int * buf; void** attr; } ;
typedef TYPE_1__ token_t ;
struct TYPE_7__ {int dst_len; int src_len; int dst_char; int src_char; } ;
typedef TYPE_2__ keyboard_layout_mapping_t ;
typedef int HCFILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 size_t FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int const*,int const,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (TYPE_2__*,int,int,int ) ;
 int VAR_3 ;

bool FUNC_9 (const char *VAR_4, keyboard_layout_mapping_t *VAR_5, int *VAR_6)
{
  HCFILE VAR_7;

  if (FUNC_3 (&VAR_7, VAR_4, "r") == 0) return 0;

  char *VAR_8 = (char *) FUNC_5 (VAR_0);

  int VAR_9 = 0;

  while (!FUNC_2 (&VAR_7))
  {
    const size_t VAR_10 = FUNC_0 (&VAR_7, VAR_8, VAR_0);

    if (VAR_10 == 0) continue;

    token_t VAR_11;

    VAR_11.token_cnt = 2;

    VAR_11.len_min[0] = 1;
    VAR_11.len_max[0] = 4;
    VAR_11.sep[0] = 0x09;
    VAR_11.attr[0] = VAR_2;

    VAR_11.len_min[1] = 0;
    VAR_11.len_max[1] = 4;
    VAR_11.sep[1] = 0x09;
    VAR_11.attr[1] = VAR_2;

    if (FUNC_6 ((const u8 *) VAR_8, (const int) VAR_10, &VAR_11) != VAR_1)
    {
      FUNC_1 (&VAR_7);

      FUNC_4 (VAR_8);

      return 0;
    }

    FUNC_7 (&VAR_5[VAR_9].src_char, VAR_11.buf[0], VAR_11.len[0]);
    FUNC_7 (&VAR_5[VAR_9].dst_char, VAR_11.buf[1], VAR_11.len[1]);

    VAR_5[VAR_9].src_len = VAR_11.len[0];
    VAR_5[VAR_9].dst_len = VAR_11.len[1];

    if (VAR_9 == 256)
    {
      FUNC_1 (&VAR_7);

      FUNC_4 (VAR_8);

      return 0;
    }

    VAR_9++;
  }

  *VAR_6 = VAR_9;

  FUNC_1 (&VAR_7);

  FUNC_4 (VAR_8);



  FUNC_8 (VAR_5, VAR_9, sizeof (keyboard_layout_mapping_t), VAR_3);

  return 1;
}
