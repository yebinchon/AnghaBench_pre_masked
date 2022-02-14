
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsrc {scalar_t__ is_pic; } ;
struct atpic_intsrc {int dummy; } ;
struct atpic {int dummy; } ;


 int FUNC_0 (struct atpic*,struct atpic_intsrc*) ;

__attribute__((used)) static int
FUNC_1(struct intsrc *VAR_0)
{
 struct atpic_intsrc *VAR_1 = (struct atpic_intsrc *)VAR_0;
 struct atpic *VAR_2 = (struct atpic *)VAR_0->is_pic;

 return (FUNC_0(VAR_2, VAR_1));
}
