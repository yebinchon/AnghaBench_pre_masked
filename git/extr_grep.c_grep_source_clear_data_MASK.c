
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {int type; int size; int buf; } ;


 int FUNC_0 (int ) ;




void FUNC_1(struct grep_source *VAR_0)
{
 switch (VAR_0->type) {
 case 129:
 case 128:
  FUNC_0(VAR_0->buf);
  VAR_0->size = 0;
  break;
 case 130:

  break;
 }
}
