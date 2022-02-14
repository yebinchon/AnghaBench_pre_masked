
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_parser ;
struct TYPE_2__ {scalar_t__ num_chunks; scalar_t__ num_chunks_complete; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

int
FUNC_1 (http_parser *VAR_3)
{
  FUNC_0(VAR_3 == &VAR_2);





  FUNC_0(VAR_0[VAR_1].num_chunks ==
         VAR_0[VAR_1].num_chunks_complete + 1);

  VAR_0[VAR_1].num_chunks_complete++;
  return 0;
}
