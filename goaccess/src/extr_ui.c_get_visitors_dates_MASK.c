
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int holder_size; int idx; TYPE_2__* items; } ;
struct TYPE_6__ {TYPE_1__* metrics; } ;
struct TYPE_5__ {char* data; } ;
typedef TYPE_3__ GHolder ;


 char** FUNC_0 (int) ;
 int FUNC_1 (char**,int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static char **
FUNC_2 (GHolder * VAR_1)
{
  char **VAR_2 = FUNC_0 (sizeof (char *) * VAR_1->holder_size);
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_1->idx; VAR_3++) {
    VAR_2[VAR_3] = VAR_1->items[VAR_3].metrics->data;
  }
  FUNC_1 (VAR_2, VAR_1->holder_size, sizeof (char *), VAR_0);

  return VAR_2;
}
