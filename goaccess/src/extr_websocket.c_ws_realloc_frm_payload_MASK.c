
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_5__ {scalar_t__ payloadsz; char* payload; } ;
typedef TYPE_1__ WSMessage ;
struct TYPE_6__ {scalar_t__ payloadlen; } ;
typedef TYPE_2__ WSFrame ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_2 (WSFrame * VAR_0, WSMessage * VAR_1)
{
  char *VAR_2 = ((void*)0);
  uint64_t VAR_3 = 0;

  VAR_3 = VAR_1->payloadsz + VAR_0->payloadlen;
  VAR_2 = FUNC_1 (VAR_1->payload, VAR_3);
  if (VAR_2 == ((void*)0) && VAR_3 > 0) {
    FUNC_0 (VAR_1->payload);
    VAR_1->payload = ((void*)0);
    return 1;
  }
  VAR_1->payload = VAR_2;

  return 0;
}
