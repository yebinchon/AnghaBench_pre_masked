
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evhttp_request {char const* response_code_line; } ;



const char *
FUNC_0(const struct evhttp_request *VAR_0)
{
 return VAR_0->response_code_line;
}
