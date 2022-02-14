
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct extcon_dev {int state; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static bool FUNC_1(struct extcon_dev *VAR_0, unsigned int VAR_1)
{
 return !!(VAR_0->state & FUNC_0(VAR_1));
}
