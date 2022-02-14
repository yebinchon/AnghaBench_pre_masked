
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx24120_state {int dummy; } ;
struct cx24120_cmd {scalar_t__ len; int * arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cx24120_state*,struct cx24120_cmd*) ;
 int FUNC_1 (struct cx24120_state*,scalar_t__) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct cx24120_state *VAR_2,
       struct cx24120_cmd *VAR_3, u8 VAR_4)
{
 int VAR_5, VAR_6;

 if (VAR_4 > VAR_0) {
  FUNC_2("Too many registers to read. cmd->reg = %d", VAR_4);
  return -VAR_1;
 }

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 != 0)
  return VAR_5;

 if (!VAR_4)
  return 0;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  VAR_3->arg[VAR_6] = FUNC_1(VAR_2, (VAR_3->len + VAR_6 + 1));

 return 0;
}
