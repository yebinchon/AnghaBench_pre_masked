
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vegas {int slow_start_toggle; } ;
struct cc_var {struct vegas* cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vegas* FUNC_0 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct cc_var *VAR_3)
{
 struct vegas *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct vegas), VAR_2, VAR_1);

 if (VAR_4 == ((void*)0))
  return (VAR_0);

 VAR_4->slow_start_toggle = 1;
 VAR_3->cc_data = VAR_4;

 return (0);
}
