
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_parser ;
struct TYPE_2__ {size_t body_size; int body; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int,char const*,size_t) ;

int
FUNC_3 (http_parser *VAR_3, const char *VAR_4, size_t VAR_5)
{
  FUNC_0(VAR_3 == &VAR_2);
  FUNC_2(VAR_0[VAR_1].body,
           sizeof(VAR_0[VAR_1].body),
           VAR_4,
           VAR_5);
  VAR_0[VAR_1].body_size += VAR_5;
  FUNC_1(VAR_3);

  return 0;
}
