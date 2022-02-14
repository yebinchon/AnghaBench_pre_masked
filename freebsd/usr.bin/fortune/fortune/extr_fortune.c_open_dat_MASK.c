
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ datfd; int datfile; } ;
typedef TYPE_1__ FILEDESC ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(FILEDESC *VAR_1)
{
 if (VAR_1->datfd < 0 && (VAR_1->datfd = FUNC_1(VAR_1->datfile, VAR_0)) < 0) {
  FUNC_2(VAR_1->datfile);
  FUNC_0(1);
 }
}
