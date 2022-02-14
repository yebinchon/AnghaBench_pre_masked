
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {unsigned int ctrl_reg1; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static unsigned int FUNC_0(struct mma8452_data *VAR_2)
{
 return (VAR_2->ctrl_reg1 & VAR_0) >>
   VAR_1;
}
