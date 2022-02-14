
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,char const*) ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_5, unsigned long VAR_6, void *VAR_7)
{
 const char *VAR_8;

 switch (VAR_6) {
 case 130:
 default:
  VAR_8 = VAR_4;
  break;

 case 129:
  VAR_8 = VAR_2;
  break;

 case 128:
  VAR_8 = VAR_3;
  break;
 }

 FUNC_0(VAR_0, VAR_8);

 return VAR_1;
}
