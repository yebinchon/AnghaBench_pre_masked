
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stat {scalar_t__ STAT_NANOSECONDS_ACCESS_TIME; scalar_t__ st_atime; } ;
struct TYPE_2__ {int stat; int encoding_to; int encoding_from; } ;
typedef TYPE_1__ dictstat_t ;


 int FUNC_0 (struct stat*,struct stat*,int) ;
 int FUNC_1 (struct stat*,int *,int) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3 (const void *VAR_0, const void *VAR_1)
{
  const dictstat_t *VAR_2 = (const dictstat_t *) VAR_0;
  const dictstat_t *VAR_3 = (const dictstat_t *) VAR_1;

  const int VAR_4 = FUNC_2 (VAR_2->encoding_from, VAR_3->encoding_from);

  if (VAR_4 != 0) return VAR_4;

  const int VAR_5 = FUNC_2 (VAR_2->encoding_to, VAR_3->encoding_to);

  if (VAR_5 != 0) return VAR_5;

  struct stat VAR_6;
  struct stat VAR_7;

  FUNC_1 (&VAR_6, &VAR_2->stat, sizeof (struct stat));
  FUNC_1 (&VAR_7, &VAR_3->stat, sizeof (struct stat));

  VAR_6 = 0;
  VAR_7 = 0;






  const int VAR_8 = FUNC_0 (&VAR_6, &VAR_7, sizeof (struct stat));

  return VAR_8;
}
