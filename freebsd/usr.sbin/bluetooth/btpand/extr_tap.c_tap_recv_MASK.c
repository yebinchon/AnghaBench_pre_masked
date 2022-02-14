
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ len; int ptr; int type; int src; int dst; } ;
typedef TYPE_1__ packet_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static bool
FUNC_1(packet_t *VAR_3)
{

 if (VAR_3->len < VAR_1)
  return 0;

 VAR_3->dst = VAR_3->ptr;
 FUNC_0(VAR_3, VAR_0);
 VAR_3->src = VAR_3->ptr;
 FUNC_0(VAR_3, VAR_0);
 VAR_3->type = VAR_3->ptr;
 FUNC_0(VAR_3, VAR_2);

 return 1;
}
