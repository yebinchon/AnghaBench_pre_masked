
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; struct property* next; void* value; int name; } ;
struct device_node {int phandle; struct property* properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct property*) ;
 int FUNC_1 (struct property*) ;
 int VAR_4 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (int ,char const*,void*,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,char const*) ;

int FUNC_10(struct device_node *VAR_6, const char *VAR_7, void *VAR_8, int VAR_9)
{
 struct property **VAR_10;
 unsigned long VAR_11;
 void *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_8, VAR_9, VAR_3);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = -VAR_1;

 FUNC_4(&VAR_5);
 FUNC_7(&VAR_4, VAR_11);
 VAR_10 = &VAR_6->properties;
 while (*VAR_10) {
  struct property *VAR_14 = *VAR_10;

  if (!FUNC_9(VAR_14->name, VAR_7)) {
   void *VAR_15 = VAR_14->value;
   int VAR_16;

   VAR_16 = FUNC_6(VAR_6->phandle, VAR_7, VAR_8, VAR_9);

   VAR_13 = -VAR_0;
   if (VAR_16 >= 0) {
    VAR_14->value = VAR_12;
    VAR_14->length = VAR_9;

    if (FUNC_0(VAR_14))
     FUNC_2(VAR_15);

    FUNC_1(VAR_14);

    VAR_13 = 0;
   }
   break;
  }
  VAR_10 = &(*VAR_10)->next;
 }
 FUNC_8(&VAR_4, VAR_11);
 FUNC_5(&VAR_5);



 return VAR_13;
}
