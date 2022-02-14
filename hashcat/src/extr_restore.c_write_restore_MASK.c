
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_18__ {scalar_t__ dicts_pos; } ;
typedef TYPE_1__ straight_ctx_t ;
struct TYPE_19__ {scalar_t__ words_cur; } ;
typedef TYPE_2__ status_ctx_t ;
struct TYPE_20__ {size_t argc; scalar_t__ words_cur; scalar_t__ dicts_pos; scalar_t__ masks_pos; int * argv; } ;
typedef TYPE_3__ restore_data_t ;
struct TYPE_21__ {int enabled; char* new_restore_file; TYPE_3__* rd; } ;
typedef TYPE_4__ restore_ctx_t ;
struct TYPE_22__ {scalar_t__ masks_pos; } ;
typedef TYPE_5__ mask_ctx_t ;
struct TYPE_23__ {TYPE_1__* straight_ctx; TYPE_2__* status_ctx; TYPE_4__* restore_ctx; TYPE_5__* mask_ctx; } ;
typedef TYPE_6__ hashcat_ctx_t ;
struct TYPE_24__ {int pfp; } ;
typedef TYPE_7__ HCFILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,char*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,char*,char*) ;
 int FUNC_6 (TYPE_7__*,char*,int ) ;
 int FUNC_7 (char,TYPE_7__*) ;
 int FUNC_8 (TYPE_3__*,int,int,TYPE_7__*) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11 (hashcat_ctx_t *VAR_2)
{
  const mask_ctx_t *VAR_3 = VAR_2->mask_ctx;
  const restore_ctx_t *VAR_4 = VAR_2->restore_ctx;
  const status_ctx_t *VAR_5 = VAR_2->status_ctx;
  const straight_ctx_t *VAR_6 = VAR_2->straight_ctx;

  if (VAR_4->enabled == 0) return 0;

  restore_data_t *VAR_7 = VAR_4->rd;

  VAR_7->masks_pos = VAR_3->masks_pos;
  VAR_7->dicts_pos = VAR_6->dicts_pos;
  VAR_7->words_cur = VAR_5->words_cur;

  char *VAR_8 = VAR_4->new_restore_file;

  HCFILE VAR_9;

  if (FUNC_5 (&VAR_9, VAR_8, "wb") == 0)
  {
    FUNC_0 (VAR_2, "%s: %s", VAR_8, FUNC_10 (VAR_1));

    return -1;
  }

  if (FUNC_9 (VAR_9.pfp, ((void*)0), VAR_0, 0))
  {
    FUNC_0 (VAR_2, "setvbuf file '%s': %s", VAR_8, FUNC_10 (VAR_1));

    FUNC_2 (&VAR_9);

    return -1;
  }

  FUNC_8 (VAR_7, sizeof (restore_data_t), 1, &VAR_9);

  for (u32 VAR_10 = 0; VAR_10 < VAR_7->argc; VAR_10++)
  {
    FUNC_6 (&VAR_9, "%s", VAR_7->argv[VAR_10]);

    FUNC_7 ('\n', &VAR_9);
  }

  FUNC_3 (&VAR_9);

  FUNC_1 (FUNC_4 (&VAR_9));

  FUNC_2 (&VAR_9);

  VAR_7->masks_pos = 0;
  VAR_7->dicts_pos = 0;
  VAR_7->words_cur = 0;

  return 0;
}
