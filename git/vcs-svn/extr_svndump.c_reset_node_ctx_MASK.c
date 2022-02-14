
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prop_length; int text_length; scalar_t__ prop_delta; scalar_t__ text_delta; int dst; scalar_t__ srcRev; int src; int action; scalar_t__ type; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(char *VAR_2)
{
 VAR_1.type = 0;
 VAR_1.action = VAR_0;
 VAR_1.prop_length = -1;
 VAR_1.text_length = -1;
 FUNC_1(&VAR_1.src);
 VAR_1.srcRev = 0;
 FUNC_1(&VAR_1.dst);
 if (VAR_2)
  FUNC_0(&VAR_1.dst, VAR_2);
 VAR_1.text_delta = 0;
 VAR_1.prop_delta = 0;
}
