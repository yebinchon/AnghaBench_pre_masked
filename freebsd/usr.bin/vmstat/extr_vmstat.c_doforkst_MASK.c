
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double v_forks; double v_vforks; double v_rforks; scalar_t__ v_rforkpages; scalar_t__ v_vforkpages; scalar_t__ v_forkpages; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,double,scalar_t__,double) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(void)
{

 FUNC_0(&VAR_0);
 FUNC_3("fork-statistics");
 FUNC_2("{:fork/%u} {N:forks}, {:fork-pages/%u} {N:pages}, "
     "{L:average} {:fork-average/%.2f}\n",
     VAR_0.v_forks, VAR_0.v_forkpages,
     VAR_0.v_forks == 0 ? 0.0 :
     (double)VAR_0.v_forkpages / VAR_0.v_forks);
 FUNC_2("{:vfork/%u} {N:vforks}, {:vfork-pages/%u} {N:pages}, "
     "{L:average} {:vfork-average/%.2f}\n",
     VAR_0.v_vforks, VAR_0.v_vforkpages,
     VAR_0.v_vforks == 0 ? 0.0 :
     (double)VAR_0.v_vforkpages / VAR_0.v_vforks);
 FUNC_2("{:rfork/%u} {N:rforks}, {:rfork-pages/%u} {N:pages}, "
     "{L:average} {:rfork-average/%.2f}\n",
     VAR_0.v_rforks, VAR_0.v_rforkpages,
     VAR_0.v_rforks == 0 ? 0.0 :
     (double)VAR_0.v_rforkpages / VAR_0.v_rforks);
 FUNC_1("fork-statistics");
}
