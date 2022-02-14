
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int outfile_autohex; int outfile_format; int outfile; } ;
typedef TYPE_2__ user_options_t ;
struct TYPE_6__ {int * pfp; } ;
struct TYPE_8__ {int outfile_autohex; int outfile_format; int filename; TYPE_1__ fp; } ;
typedef TYPE_3__ outfile_ctx_t ;
struct TYPE_9__ {TYPE_2__* user_options; TYPE_3__* outfile_ctx; } ;
typedef TYPE_4__ hashcat_ctx_t ;



int FUNC_0 (hashcat_ctx_t *VAR_0)
{
  outfile_ctx_t *VAR_1 = VAR_0->outfile_ctx;
  user_options_t *VAR_2 = VAR_0->user_options;

  VAR_1->fp.pfp = ((void*)0);
  VAR_1->filename = VAR_2->outfile;
  VAR_1->outfile_format = VAR_2->outfile_format;
  VAR_1->outfile_autohex = VAR_2->outfile_autohex;

  return 0;
}
