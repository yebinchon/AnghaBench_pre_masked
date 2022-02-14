
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct last_printed {int * str; } ;
struct file_header {TYPE_1__* si; scalar_t__ fr; } ;
struct TYPE_4__ {int zflag; scalar_t__ uflag; } ;
struct TYPE_3__ {scalar_t__ str; } ;
typedef int FILE ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *,int ) ;
 TYPE_2__ VAR_0 ;
 scalar_t__ FUNC_3 (int *,TYPE_1__**) ;

__attribute__((used)) static void
FUNC_4(struct file_header *VAR_1, FILE *VAR_2, struct last_printed *VAR_3)
{

 if (VAR_1 && VAR_1->fr && VAR_2 && VAR_1->si && VAR_1->si->str) {
  if (VAR_0.uflag) {
   if ((VAR_3->str == ((void*)0)) || (FUNC_3(VAR_3->str, &(VAR_1->si)))) {
    FUNC_2(VAR_1->si->str, VAR_2, VAR_0.zflag);
    if (VAR_3->str)
     FUNC_1(VAR_3->str);
    VAR_3->str = FUNC_0(VAR_1->si->str);
   }
  } else
   FUNC_2(VAR_1->si->str, VAR_2, VAR_0.zflag);
 }
}
