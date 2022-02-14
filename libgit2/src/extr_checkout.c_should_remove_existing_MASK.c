
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int strategy; int repo; } ;
typedef TYPE_1__ checkout_data ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int ,int ) ;

__attribute__((used)) static bool FUNC_1(checkout_data *VAR_2)
{
 int VAR_3;

 if (FUNC_0(&VAR_3, VAR_2->repo, VAR_1) < 0) {
  VAR_3 = 0;
 }

 return (VAR_3 &&
  (VAR_2->strategy & VAR_0) == 0);
}
