
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pbt; } ;
struct TYPE_6__ {TYPE_1__ pb0_hdr; } ;


 int VAR_0 ;


 char* VAR_1 ;
 TYPE_2__ VAR_2 ;
 size_t FUNC_0 (char*,int ,TYPE_2__*) ;
 size_t FUNC_1 (char*,int ,TYPE_2__*) ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
 char *VAR_3, *VAR_4;
 size_t VAR_5, VAR_6 = 0;

 VAR_5 = FUNC_3(VAR_1);

 VAR_4 = VAR_1 + VAR_5;
 VAR_3 = VAR_1 + VAR_5 + 1;

 switch (VAR_2.pb0_hdr.pbt) {
 case 129:
  VAR_6 = FUNC_1(
   VAR_3, VAR_0 - VAR_5 - 1, &VAR_2);
  break;
 case 128:
  VAR_6 = FUNC_0(
   VAR_3, VAR_0 - VAR_5 - 1, &VAR_2);
  break;
 }
 if (VAR_6) {
  if (*VAR_3 == '=')
   FUNC_2(VAR_1, VAR_3 + 1, VAR_6);
  else
   *VAR_4 = ' ';
 }
}
