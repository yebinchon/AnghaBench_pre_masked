
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {char* custom_charset_1; char* custom_charset_2; char* custom_charset_3; char* custom_charset_4; } ;
typedef TYPE_1__ user_options_t ;
struct TYPE_9__ {size_t mf_len; char* mf_buf; } ;
typedef TYPE_2__ mf_t ;
struct TYPE_10__ {int enabled; int mask_from_file; char* mask; int mp_usr; int mp_sys; TYPE_2__* mfs; } ;
typedef TYPE_3__ mask_ctx_t ;
struct TYPE_11__ {TYPE_1__* user_options; TYPE_3__* mask_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_4__*,int ,int ,char*,int) ;
 size_t FUNC_3 (char*) ;

int FUNC_4 (hashcat_ctx_t *VAR_1)
{
  mask_ctx_t *VAR_2 = VAR_1->mask_ctx;
  user_options_t *VAR_3 = VAR_1->user_options;

  if (VAR_2->enabled == 0) return 0;

  if (VAR_2->mask_from_file == 0) return 0;

  mf_t *VAR_4 = VAR_2->mfs;

  VAR_4[0].mf_len = 0;
  VAR_4[1].mf_len = 0;
  VAR_4[2].mf_len = 0;
  VAR_4[3].mf_len = 0;
  VAR_4[4].mf_len = 0;

  size_t VAR_5 = 0;

  char *VAR_6 = VAR_2->mask;

  const size_t VAR_7 = FUNC_3 (VAR_6);

  bool VAR_8 = 0;

  for (size_t VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  {
    mf_t *VAR_10 = VAR_4 + VAR_5;

    if (VAR_8 == 1)
    {
      VAR_8 = 0;

      VAR_10->mf_buf[VAR_10->mf_len] = VAR_6[VAR_9];

      VAR_10->mf_len++;
    }
    else
    {
      if (VAR_6[VAR_9] == '\\')
      {
        VAR_8 = 1;
      }
      else if (VAR_6[VAR_9] == ',')
      {
        VAR_10->mf_buf[VAR_10->mf_len] = 0;

        VAR_5++;

        if (VAR_5 == VAR_0)
        {
          FUNC_0 (VAR_1, "Invalid line '%s' in maskfile.", VAR_6);

          return -1;
        }
      }
      else
      {
        VAR_10->mf_buf[VAR_10->mf_len] = VAR_6[VAR_9];

        VAR_10->mf_len++;
      }
    }
  }

  mf_t *VAR_11 = VAR_4 + VAR_5;

  VAR_11->mf_buf[VAR_11->mf_len] = 0;

  VAR_3->custom_charset_1 = ((void*)0);
  VAR_3->custom_charset_2 = ((void*)0);
  VAR_3->custom_charset_3 = ((void*)0);
  VAR_3->custom_charset_4 = ((void*)0);

  FUNC_1 (VAR_2->mp_usr, 0);
  FUNC_1 (VAR_2->mp_usr, 1);
  FUNC_1 (VAR_2->mp_usr, 2);
  FUNC_1 (VAR_2->mp_usr, 3);

  for (size_t VAR_12 = 0; VAR_12 < VAR_5; VAR_12++)
  {
    switch (VAR_12)
    {
      case 0:
        VAR_3->custom_charset_1 = VAR_4[0].mf_buf;
        FUNC_2 (VAR_1, VAR_2->mp_sys, VAR_2->mp_usr, VAR_3->custom_charset_1, 0);
        break;

      case 1:
        VAR_3->custom_charset_2 = VAR_4[1].mf_buf;
        FUNC_2 (VAR_1, VAR_2->mp_sys, VAR_2->mp_usr, VAR_3->custom_charset_2, 1);
        break;

      case 2:
        VAR_3->custom_charset_3 = VAR_4[2].mf_buf;
        FUNC_2 (VAR_1, VAR_2->mp_sys, VAR_2->mp_usr, VAR_3->custom_charset_3, 2);
        break;

      case 3:
        VAR_3->custom_charset_4 = VAR_4[3].mf_buf;
        FUNC_2 (VAR_1, VAR_2->mp_sys, VAR_2->mp_usr, VAR_3->custom_charset_4, 3);
        break;
    }
  }

  VAR_2->mask = VAR_4[VAR_5].mf_buf;

  return 0;
}
