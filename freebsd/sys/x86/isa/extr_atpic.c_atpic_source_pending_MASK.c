
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsrc {scalar_t__ is_pic; } ;
struct atpic_intsrc {int dummy; } ;
struct atpic {int at_ioaddr; } ;


 int FUNC_0 (struct atpic_intsrc*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct intsrc *VAR_0)
{
 struct atpic_intsrc *VAR_1 = (struct atpic_intsrc *)VAR_0;
 struct atpic *VAR_2 = (struct atpic *)VAR_0->is_pic;

 return (FUNC_1(VAR_2->at_ioaddr) & FUNC_0(VAR_1));
}
