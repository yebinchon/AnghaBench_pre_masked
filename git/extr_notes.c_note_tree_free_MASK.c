
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct int_node {void** a; } ;


 struct int_node* FUNC_0 (void*) ;
 int FUNC_1 (void*) ;



 int FUNC_2 (struct int_node*) ;

__attribute__((used)) static void FUNC_3(struct int_node *VAR_0)
{
 unsigned int VAR_1;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  void *VAR_2 = VAR_0->a[VAR_1];
  switch (FUNC_1(VAR_2)) {
  case 130:
   FUNC_3(FUNC_0(VAR_2));

  case 129:
  case 128:
   FUNC_2(FUNC_0(VAR_2));
  }
 }
}
