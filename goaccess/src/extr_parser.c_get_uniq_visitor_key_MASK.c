
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* host; char* date; int agent; } ;
typedef TYPE_1__ GLogItem ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*) ;
 char* FUNC_4 (size_t,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static char *
FUNC_6 (GLogItem * VAR_0)
{
  char *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);
  size_t VAR_3, VAR_4, VAR_5;

  VAR_1 = FUNC_0 (FUNC_5 (VAR_0->agent));

  VAR_3 = FUNC_3 (VAR_0->host);
  VAR_4 = FUNC_3 (VAR_0->date);
  VAR_5 = FUNC_3 (VAR_1);


  VAR_2 = FUNC_4 (VAR_3 + VAR_4 + VAR_5 + 3, sizeof (char));

  FUNC_2 (VAR_2, VAR_0->host, VAR_3);

  VAR_2[VAR_3] = '|';
  FUNC_2 (VAR_2 + VAR_3 + 1, VAR_0->date, VAR_4 + 1);

  VAR_2[VAR_3 + VAR_4 + 1] = '|';
  FUNC_2 (VAR_2 + VAR_3 + VAR_4 + 2, VAR_1, VAR_5 + 1);

  FUNC_1 (VAR_1);
  return VAR_2;
}
