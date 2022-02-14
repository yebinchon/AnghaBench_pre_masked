
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int masks_avail; int masks_cnt; char** masks; } ;
typedef TYPE_1__ mask_ctx_t ;
struct TYPE_5__ {TYPE_1__* mask_ctx; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char**,int,int) ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2 (hashcat_ctx_t *VAR_1, const char *VAR_2)
{
  mask_ctx_t *VAR_3 = VAR_1->mask_ctx;

  if (VAR_3->masks_avail == VAR_3->masks_cnt)
  {
    VAR_3->masks = (char **) FUNC_0 (VAR_3->masks, VAR_3->masks_avail * sizeof (char *), VAR_0 * sizeof (char *));

    VAR_3->masks_avail += VAR_0;
  }

  VAR_3->masks[VAR_3->masks_cnt] = FUNC_1 (VAR_2);

  VAR_3->masks_cnt++;

  return 0;
}
