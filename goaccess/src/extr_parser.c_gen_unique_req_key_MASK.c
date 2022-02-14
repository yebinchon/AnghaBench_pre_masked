
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ append_protocol; scalar_t__ append_method; } ;
struct TYPE_4__ {int protocol; int method; int req; } ;
typedef TYPE_1__ GLogItem ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (char*,int ,size_t) ;
 size_t FUNC_1 (int ) ;
 char* FUNC_2 (size_t,int) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static char *
FUNC_4 (GLogItem * VAR_1)
{
  char *VAR_2 = ((void*)0);
  size_t VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 1, VAR_7 = 0;


  if (!VAR_0.append_method && !VAR_0.append_protocol)
    return FUNC_3 (VAR_1->req);

  if (!VAR_1->method && !VAR_1->protocol)
    return FUNC_3 (VAR_1->req);

  VAR_3 = FUNC_1 (VAR_1->req);
  if (VAR_1->method && VAR_0.append_method) {
    VAR_4 = FUNC_1 (VAR_1->method);
    VAR_6++;
  }
  if (VAR_1->protocol && VAR_0.append_protocol) {
    VAR_5 = FUNC_1 (VAR_1->protocol);
    VAR_6++;
  }


  VAR_2 = FUNC_2 (VAR_3 + VAR_4 + VAR_5 + VAR_6, sizeof (char));

  FUNC_0 (VAR_2, VAR_1->req, VAR_3);

  if (VAR_1->method && VAR_0.append_method) {
    VAR_2[VAR_3] = '|';
    VAR_7++;
    FUNC_0 (VAR_2 + VAR_3 + VAR_7, VAR_1->method, VAR_4 + 1);
  }
  if (VAR_1->protocol && VAR_0.append_protocol) {
    VAR_2[VAR_3 + VAR_4 + VAR_7] = '|';
    VAR_7++;
    FUNC_0 (VAR_2 + VAR_3 + VAR_4 + VAR_7, VAR_1->protocol, VAR_5 + 1);
  }

  return VAR_2;
}
