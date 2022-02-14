
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_hash {int type; int hashsize; } ;


 int VAR_0 ;







int
FUNC_0(const struct auth_hash *VAR_1)
{
 int VAR_2;

 if (VAR_1 == ((void*)0))
  return 0;

 switch (VAR_1->type) {
 case 130:
 case 129:
 case 128:
  VAR_2 = VAR_1->hashsize / 2;
  break;

 case 133:
 case 132:
 case 131:
  VAR_2 = VAR_1->hashsize;
  break;

 default:
  VAR_2 = VAR_0;
  break;
 }

 return VAR_2;
}
