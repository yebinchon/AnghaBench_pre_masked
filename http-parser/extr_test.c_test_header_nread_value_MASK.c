
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t nread; } ;
typedef TYPE_1__ http_parser ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (TYPE_1__*,int *,char const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 size_t FUNC_3 (char const*) ;

void
FUNC_4 ()
{
  http_parser VAR_2;
  FUNC_2(&VAR_2, VAR_0);
  size_t VAR_3;
  const char *VAR_4;
  VAR_4 = "GET / HTTP/1.1\r\nheader: value\nhdr: value\r\n";
  VAR_3 = FUNC_1(&VAR_2, &VAR_1, VAR_4, FUNC_3(VAR_4));
  FUNC_0(VAR_3 == FUNC_3(VAR_4));

  FUNC_0(VAR_2.nread == FUNC_3(VAR_4));
}
