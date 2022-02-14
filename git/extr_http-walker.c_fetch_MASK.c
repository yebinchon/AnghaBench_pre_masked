
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker_data {struct alt_base* alt; } ;
struct walker {struct walker_data* data; } ;
struct alt_base {char* base; struct alt_base* next; } ;


 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (struct walker*,char*) ;
 int FUNC_2 (struct walker*,unsigned char*) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct walker*,struct alt_base*,unsigned char*) ;

__attribute__((used)) static int FUNC_5(struct walker *VAR_0, unsigned char *VAR_1)
{
 struct walker_data *VAR_2 = VAR_0->data;
 struct alt_base *VAR_3 = VAR_2->alt;

 if (!FUNC_2(VAR_0, VAR_1))
  return 0;
 while (VAR_3) {
  if (!FUNC_4(VAR_0, VAR_3, VAR_1))
   return 0;
  FUNC_1(VAR_0, VAR_2->alt->base);
  VAR_3 = VAR_3->next;
 }
 return FUNC_0("Unable to find %s under %s", FUNC_3(VAR_1),
       VAR_2->alt->base);
}
