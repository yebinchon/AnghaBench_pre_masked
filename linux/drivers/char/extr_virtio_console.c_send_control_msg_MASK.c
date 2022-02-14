
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int id; scalar_t__ portdev; } ;
typedef int ssize_t ;


 int FUNC_0 (scalar_t__,int ,unsigned int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_1(struct port *VAR_0, unsigned int VAR_1,
    unsigned int VAR_2)
{

 if (VAR_0->portdev)
  return FUNC_0(VAR_0->portdev, VAR_0->id, VAR_1, VAR_2);
 return 0;
}
