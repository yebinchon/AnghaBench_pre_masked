
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct property {int length; void* value; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct property*) ;
 int FUNC_1 (int ,int ) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (struct property*,int ) ;

__attribute__((used)) static struct property *FUNC_5(struct property *VAR_2,
          u32 VAR_3)
{
 struct property *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->name = FUNC_1(VAR_2->name, VAR_0);
 VAR_4->value = FUNC_2(VAR_3, VAR_0);
 if (!VAR_4->name || !VAR_4->value) {
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 FUNC_3(VAR_4->value, VAR_2->value, VAR_2->length);
 VAR_4->length = VAR_3;

 FUNC_4(VAR_4, VAR_1);
 return VAR_4;
}
