
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WSStatus ;
struct TYPE_4__ {int status; } ;
typedef TYPE_1__ WSClient ;


 int FUNC_0 (TYPE_1__*,unsigned short,char const*) ;

__attribute__((used)) static int
FUNC_1 (WSClient * VAR_0, unsigned short VAR_1, WSStatus VAR_2,
               const char *VAR_3)
{
  VAR_0->status = VAR_2;
  return FUNC_0 (VAR_0, VAR_1, VAR_3);
}
