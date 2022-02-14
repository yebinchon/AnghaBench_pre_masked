
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int url; } ;





 char* VAR_0 ;
 int FUNC_0 (char*,char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int *,int *) ;
 TYPE_1__* VAR_1 ;
 char* FUNC_3 (char*,int ,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_2)
{
 char *VAR_3 = FUNC_3("%s%s", VAR_1->url, VAR_2);
 int VAR_4;


 switch (FUNC_2(VAR_3, ((void*)0), ((void*)0))) {
 case 128:
  VAR_4 = 1;
  break;
 case 129:
  VAR_4 = 0;
  break;
 case 130:
  FUNC_0("unable to access '%s': %s", VAR_3, VAR_0);

 default:
  VAR_4 = -1;
 }
 FUNC_1(VAR_3);
 return VAR_4;
}
