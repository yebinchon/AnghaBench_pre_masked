
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ referer; scalar_t__ ws_sock_ver; scalar_t__ ws_resp; scalar_t__ ws_protocol; scalar_t__ ws_key; scalar_t__ ws_accept; scalar_t__ upgrade; scalar_t__ protocol; scalar_t__ path; scalar_t__ origin; scalar_t__ method; scalar_t__ agent; scalar_t__ host; scalar_t__ connection; } ;
typedef TYPE_1__ WSHeaders ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1 (WSHeaders * VAR_0)
{
  if (VAR_0->connection)
    FUNC_0 (VAR_0->connection);
  if (VAR_0->host)
    FUNC_0 (VAR_0->host);
  if (VAR_0->agent)
    FUNC_0 (VAR_0->agent);
  if (VAR_0->method)
    FUNC_0 (VAR_0->method);
  if (VAR_0->origin)
    FUNC_0 (VAR_0->origin);
  if (VAR_0->path)
    FUNC_0 (VAR_0->path);
  if (VAR_0->protocol)
    FUNC_0 (VAR_0->protocol);
  if (VAR_0->upgrade)
    FUNC_0 (VAR_0->upgrade);
  if (VAR_0->ws_accept)
    FUNC_0 (VAR_0->ws_accept);
  if (VAR_0->ws_key)
    FUNC_0 (VAR_0->ws_key);
  if (VAR_0->ws_protocol)
    FUNC_0 (VAR_0->ws_protocol);
  if (VAR_0->ws_resp)
    FUNC_0 (VAR_0->ws_resp);
  if (VAR_0->ws_sock_ver)
    FUNC_0 (VAR_0->ws_sock_ver);
  if (VAR_0->referer)
    FUNC_0 (VAR_0->referer);
}
