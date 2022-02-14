
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int enabled; char* buf; int iconv_enabled; scalar_t__ iconv_ctx; char* iconv_tmp; int func; scalar_t__ pos; scalar_t__ cnt; int incr; int avail; } ;
typedef TYPE_1__ wl_data_t ;
struct TYPE_7__ {int benchmark; int example_hashes; int left; int backend_info; int usage; int version; int encoding_from; int encoding_to; int segment_size; } ;
typedef TYPE_2__ user_options_t ;
typedef scalar_t__ iconv_t ;
struct TYPE_8__ {int opts_type; } ;
typedef TYPE_3__ hashconfig_t ;
struct TYPE_9__ {TYPE_1__* wl_data; TYPE_2__* user_options; TYPE_3__* hashconfig; } ;
typedef TYPE_4__ hashcat_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

int FUNC_3 (hashcat_ctx_t *VAR_6)
{
  hashconfig_t *VAR_7 = VAR_6->hashconfig;
  user_options_t *VAR_8 = VAR_6->user_options;
  wl_data_t *VAR_9 = VAR_6->wl_data;

  VAR_9->enabled = 0;

  if (VAR_8->benchmark == 1) return 0;
  if (VAR_8->example_hashes == 1) return 0;
  if (VAR_8->left == 1) return 0;
  if (VAR_8->backend_info == 1) return 0;
  if (VAR_8->usage == 1) return 0;
  if (VAR_8->version == 1) return 0;

  VAR_9->enabled = 1;

  VAR_9->buf = (char *) FUNC_0 (VAR_8->segment_size);
  VAR_9->avail = VAR_8->segment_size;
  VAR_9->incr = VAR_8->segment_size;
  VAR_9->cnt = 0;
  VAR_9->pos = 0;





  VAR_9->func = VAR_4;

  if (VAR_7->opts_type & VAR_2)
  {
    VAR_9->func = VAR_5;
  }

  if (VAR_7->opts_type & VAR_1)
  {
    VAR_9->func = VAR_3;
  }





  if (FUNC_2 (VAR_8->encoding_from, VAR_8->encoding_to) != 0)
  {
    VAR_9->iconv_enabled = 1;

    VAR_9->iconv_ctx = FUNC_1 (VAR_8->encoding_to, VAR_8->encoding_from);

    if (VAR_9->iconv_ctx == (iconv_t) -1) return -1;

    VAR_9->iconv_tmp = (char *) FUNC_0 (VAR_0);
  }

  return 0;
}
