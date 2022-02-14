
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint32_t ;
struct mdp5_hw_pipe {int pipe; int flush_mask; void* caps; void* reg_offset; int name; } ;
typedef enum mdp5_pipe { ____Placeholder_mdp5_pipe } mdp5_pipe ;


 int VAR_0 ;
 struct mdp5_hw_pipe* FUNC_0 (int ) ;
 int VAR_1 ;
 struct mdp5_hw_pipe* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

struct mdp5_hw_pipe *FUNC_4(enum mdp5_pipe VAR_2,
  uint32_t VAR_3, uint32_t VAR_4)
{
 struct mdp5_hw_pipe *VAR_5;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->name = FUNC_3(VAR_2);
 VAR_5->pipe = VAR_2;
 VAR_5->reg_offset = VAR_3;
 VAR_5->caps = VAR_4;
 VAR_5->flush_mask = FUNC_2(VAR_2);

 return VAR_5;
}
