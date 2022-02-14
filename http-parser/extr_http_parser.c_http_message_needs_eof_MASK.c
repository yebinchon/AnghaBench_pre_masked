
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int status_code; int flags; scalar_t__ content_length; } ;
typedef TYPE_1__ http_parser ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

int
FUNC_0 (const http_parser *VAR_4)
{
  if (VAR_4->type == VAR_2) {
    return 0;
  }


  if (VAR_4->status_code / 100 == 1 ||
      VAR_4->status_code == 204 ||
      VAR_4->status_code == 304 ||
      VAR_4->flags & VAR_1) {
    return 0;
  }

  if ((VAR_4->flags & VAR_0) || VAR_4->content_length != VAR_3) {
    return 0;
  }

  return 1;
}
