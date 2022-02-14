
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct grep_source {int type; scalar_t__ buf; } ;


 int FUNC_0 (char*) ;



 int FUNC_1 (struct grep_source*) ;
 int FUNC_2 (struct grep_source*) ;

__attribute__((used)) static int FUNC_3(struct grep_source *VAR_0)
{
 if (VAR_0->buf)
  return 0;

 switch (VAR_0->type) {
 case 129:
  return FUNC_1(VAR_0);
 case 128:
  return FUNC_2(VAR_0);
 case 130:
  return VAR_0->buf ? 0 : -1;
 }
 FUNC_0("invalid grep_source type to load");
}
