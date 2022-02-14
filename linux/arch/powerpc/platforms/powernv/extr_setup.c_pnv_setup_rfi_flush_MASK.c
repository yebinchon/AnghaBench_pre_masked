
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
typedef enum l1d_flush_type { ____Placeholder_l1d_flush_type } l1d_flush_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (int *,char*) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (struct device_node*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(void)
{
 struct device_node *VAR_8, *VAR_9;
 enum l1d_flush_type VAR_10;
 bool VAR_11;


 VAR_10 = VAR_0;

 VAR_8 = FUNC_1(((void*)0), "ibm,opal");
 VAR_9 = FUNC_2(VAR_8, "fw-features");
 FUNC_3(VAR_8);

 if (VAR_9) {
  FUNC_0(VAR_9);
  FUNC_3(VAR_9);

  if (FUNC_4(VAR_7))
   VAR_10 = VAR_1;

  if (FUNC_4(VAR_5))
   VAR_10 = VAR_2;
 }

 VAR_11 = FUNC_4(VAR_3) && (FUNC_4(VAR_6) || FUNC_4(VAR_4));



 FUNC_6(VAR_10, VAR_11);
 FUNC_5();
}
