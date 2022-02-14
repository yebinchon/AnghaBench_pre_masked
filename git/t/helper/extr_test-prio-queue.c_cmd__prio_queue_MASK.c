
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prio_queue {int * compare; int member_0; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int VAR_0 ;
 void* FUNC_2 (struct prio_queue*) ;
 void* FUNC_3 (struct prio_queue*) ;
 int FUNC_4 (struct prio_queue*,int*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (char const*,char*) ;
 int* FUNC_7 (int) ;

int FUNC_8(int VAR_1, const char **VAR_2)
{
 struct prio_queue VAR_3 = { &VAR_0 };

 while (*++VAR_2) {
  if (!FUNC_6(*VAR_2, "get")) {
   void *VAR_4 = FUNC_3(&VAR_3);
   void *VAR_5 = FUNC_2(&VAR_3);
   if (VAR_4 != VAR_5)
    FUNC_0("peek and get results do not match");
   FUNC_5(VAR_5);
  } else if (!FUNC_6(*VAR_2, "dump")) {
   void *VAR_6;
   void *VAR_7;
   while ((VAR_6 = FUNC_3(&VAR_3))) {
    VAR_7 = FUNC_2(&VAR_3);
    if (VAR_6 != VAR_7)
     FUNC_0("peek and get results do not match");
    FUNC_5(VAR_7);
   }
  } else if (!FUNC_6(*VAR_2, "stack")) {
   VAR_3.compare = ((void*)0);
  } else {
   int *VAR_8 = FUNC_7(sizeof(*VAR_8));
   *VAR_8 = FUNC_1(*VAR_2);
   FUNC_4(&VAR_3, VAR_8);
  }
 }

 return 0;
}
