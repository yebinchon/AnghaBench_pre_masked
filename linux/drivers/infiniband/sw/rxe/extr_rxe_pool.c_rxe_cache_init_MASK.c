
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_type_info {int flags; int name; int cache; int size; } ;


 size_t FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,size_t,int ,int ,int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int) ;
 struct rxe_type_info* VAR_5 ;

int FUNC_4(void)
{
 int VAR_6;
 int VAR_7;
 size_t VAR_8;
 struct rxe_type_info *VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_9 = &VAR_5[VAR_7];
  VAR_8 = FUNC_0(VAR_9->size, VAR_2);
  if (!(VAR_9->flags & VAR_4)) {
   VAR_9->cache =
    FUNC_1(VAR_9->name, VAR_8,
        VAR_2,
        VAR_3, ((void*)0));
   if (!VAR_9->cache) {
    FUNC_2("Unable to init kmem cache for %s\n",
           VAR_9->name);
    VAR_6 = -VAR_0;
    goto err1;
   }
  }
 }

 return 0;

err1:
 FUNC_3(VAR_7);

 return VAR_6;
}
