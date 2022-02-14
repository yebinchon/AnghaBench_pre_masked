
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_frame {struct stack_frame* next_frame; int return_address; } ;
typedef int bufhead ;


 unsigned long FUNC_0 (struct stack_frame*,struct stack_frame*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static struct stack_frame *FUNC_2(struct stack_frame *VAR_0)
{

 struct stack_frame VAR_1[2];
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_1, VAR_0, sizeof(VAR_1));
 if (VAR_2 != 0)
  return ((void*)0);

 FUNC_1(VAR_1[0].return_address);



 if (VAR_0 >= VAR_1[0].next_frame)
  return ((void*)0);

 return VAR_1[0].next_frame;
}
