
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec {int nr; int * items; } ;
typedef struct ref {struct ref const* next; } const ref ;


 int FUNC_0 (char*) ;
 struct ref const* FUNC_1 (int ) ;
 int FUNC_2 (struct ref const*,char*) ;
 int FUNC_3 (struct ref const*,scalar_t__) ;
 int FUNC_4 (struct ref const*,int *,struct ref const***,int ) ;
 struct ref const* FUNC_5 (struct ref const*,struct ref const*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static struct ref *FUNC_7(const struct ref *VAR_5,
  struct refspec *VAR_6)
{
 struct ref *VAR_7 = FUNC_1(FUNC_2(VAR_5, "HEAD"));
 struct ref *VAR_8 = VAR_7;
 struct ref **VAR_9 = VAR_7 ? &VAR_7->next : &VAR_8;

 if (VAR_3) {
  struct ref *VAR_10 = ((void*)0);

  if (!VAR_0)
   VAR_10 = FUNC_5(VAR_7, VAR_5, 0);
  else {
   VAR_8 = ((void*)0);
   VAR_9 = &VAR_8;
   VAR_10 = FUNC_1(FUNC_3(VAR_5, VAR_0));
  }

  if (!VAR_10 && VAR_0)
   FUNC_6(FUNC_0("Could not find remote branch %s to clone."),
    VAR_0);
  else {
   int VAR_11;
   for (VAR_11 = 0; VAR_11 < VAR_6->nr; VAR_11++)
    FUNC_4(VAR_10, &VAR_6->items[VAR_11],
           &VAR_9, 0);


   FUNC_4(VAR_10, VAR_4, &VAR_9, 0);
  }
 } else {
  int VAR_12;
  for (VAR_12 = 0; VAR_12 < VAR_6->nr; VAR_12++)
   FUNC_4(VAR_5, &VAR_6->items[VAR_12], &VAR_9, 0);
 }

 if (!VAR_1 && !VAR_3 && !VAR_2)
  FUNC_4(VAR_5, VAR_4, &VAR_9, 0);

 return VAR_8;
}
