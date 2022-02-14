
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int actname ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*,int,char*,unsigned int) ;

const char *
FUNC_1(unsigned VAR_2)
{
  static const char * const VAR_3[] = { "  none ", "permit ", "  deny " };
  static char VAR_4[8];

  if (VAR_2 < VAR_1) {
    FUNC_0(VAR_4, sizeof VAR_4, "%6d ", VAR_2);
    return VAR_4;
  } else if (VAR_2 >= VAR_0 && VAR_2 < VAR_0 + sizeof(VAR_3)/sizeof(char *))
    return VAR_3[VAR_2 - VAR_0];
  else
    return "?????? ";
}
