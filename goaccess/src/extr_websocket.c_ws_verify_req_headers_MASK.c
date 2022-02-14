
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ws_sock_ver; int ws_key; int connection; int origin; int path; int protocol; int method; int host; } ;
typedef TYPE_1__ WSHeaders ;
struct TYPE_5__ {scalar_t__ origin; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static int
FUNC_1 (WSHeaders * VAR_1)
{
  if (!VAR_1->host)
    return 1;
  if (!VAR_1->method)
    return 1;
  if (!VAR_1->protocol)
    return 1;
  if (!VAR_1->path)
    return 1;
  if (VAR_0.origin && !VAR_1->origin)
    return 1;
  if (VAR_0.origin && FUNC_0 (VAR_0.origin, VAR_1->origin) != 0)
    return 1;
  if (!VAR_1->connection)
    return 1;
  if (!VAR_1->ws_key)
    return 1;
  if (!VAR_1->ws_sock_ver)
    return 1;
  return 0;
}
