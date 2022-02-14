
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int content_length; } ;
typedef TYPE_1__ http_parser ;
struct TYPE_6__ {int num_chunks; int * chunk_lengths; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;

int
FUNC_1 (http_parser *VAR_4)
{
  FUNC_0(VAR_4 == &VAR_3);
  int VAR_5 = VAR_1[VAR_2].num_chunks;
  VAR_1[VAR_2].num_chunks++;
  if (VAR_5 < VAR_0) {
    VAR_1[VAR_2].chunk_lengths[VAR_5] = VAR_4->content_length;
  }

  return 0;
}
