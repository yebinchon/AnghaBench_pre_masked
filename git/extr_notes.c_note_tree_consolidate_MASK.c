
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_node {void** a; } ;


 struct int_node* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct int_node*) ;

__attribute__((used)) static int FUNC_4(struct int_node *VAR_2,
 struct int_node *VAR_3, unsigned char VAR_4)
{
 unsigned int VAR_5;
 void *VAR_6 = ((void*)0);

 FUNC_2(VAR_2 && VAR_3);
 FUNC_2(FUNC_0(VAR_3->a[VAR_4]) == VAR_2);

 for (VAR_5 = 0; VAR_5 < 16; VAR_5++) {
  if (FUNC_1(VAR_2->a[VAR_5]) != VAR_1) {
   if (VAR_6)
    return -2;
   VAR_6 = VAR_2->a[VAR_5];
  }
 }

 if (VAR_6 && (FUNC_1(VAR_6) != VAR_0))
  return -2;

 VAR_3->a[VAR_4] = VAR_6;
 FUNC_3(VAR_2);
 return 0;
}
