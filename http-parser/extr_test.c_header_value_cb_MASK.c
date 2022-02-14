
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int num_headers; int last_header_element; int ** headers; } ;
typedef int http_parser ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct message* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char const*,size_t) ;

int
FUNC_2 (http_parser *VAR_4, const char *VAR_5, size_t VAR_6)
{
  FUNC_0(VAR_4 == &VAR_3);
  struct message *VAR_7 = &VAR_1[VAR_2];

  FUNC_1(VAR_7->headers[VAR_7->num_headers-1][1],
           sizeof(VAR_7->headers[VAR_7->num_headers-1][1]),
           VAR_5,
           VAR_6);

  VAR_7->last_header_element = VAR_0;

  return 0;
}
