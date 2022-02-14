
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smi_info {int msg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct smi_info *VAR_2)
{
 VAR_2->msg_flags = ((VAR_2->msg_flags & ~VAR_0) |
          VAR_1);
 return 1;
}
