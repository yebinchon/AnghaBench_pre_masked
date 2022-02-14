
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intsrc {int * is_pic; } ;
struct atpic_intsrc {scalar_t__ at_trigger; } ;
struct atpic {int at_imen; scalar_t__ at_ioaddr; } ;
struct TYPE_2__ {int at_pic; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct atpic_intsrc*) ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct intsrc*) ;
 int FUNC_2 (struct intsrc*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(struct intsrc *VAR_5, int VAR_6)
{
 struct atpic_intsrc *VAR_7 = (struct atpic_intsrc *)VAR_5;
 struct atpic *VAR_8 = (struct atpic *)VAR_5->is_pic;

 FUNC_4();
 if (VAR_7->at_trigger != VAR_1) {
  VAR_8->at_imen |= FUNC_0(VAR_7);
  FUNC_3(VAR_8->at_ioaddr + VAR_0, VAR_8->at_imen);
 }






 if (VAR_6 == VAR_3) {
  if (VAR_5->is_pic == &VAR_4[VAR_2].at_pic)
   FUNC_1(VAR_5);
  else
   FUNC_2(VAR_5);
 }

 FUNC_5();
}
