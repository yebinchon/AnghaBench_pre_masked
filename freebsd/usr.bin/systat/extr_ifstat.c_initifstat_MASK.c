
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_3__ {scalar_t__ ifi_ibytes; } ;
struct TYPE_4__ {TYPE_1__ ifmd_data; } ;
struct if_stat {int match; int display; TYPE_2__ if_mib; scalar_t__ if_row; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct if_stat*,int ) ;
 scalar_t__ FUNC_3 (int,int) ;
 int VAR_0 ;
 int FUNC_4 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (struct if_stat*) ;
 int FUNC_7 () ;

int
FUNC_8(void)
{
 struct if_stat *VAR_2 = ((void*)0);
 u_int VAR_3 = 0, VAR_4 = 0;

 VAR_3 = FUNC_5();
 if (VAR_3 <= 0)
  return (-1);

 FUNC_1(&VAR_0);

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_2 = (struct if_stat *)FUNC_3(1, sizeof(struct if_stat));
  if (VAR_2 == ((void*)0))
   FUNC_0(1, "out of memory");
  FUNC_2(&VAR_0, VAR_2, VAR_1);
  VAR_2->if_row = VAR_4+1;
  FUNC_4(VAR_2->if_row, &VAR_2->if_mib);
  FUNC_6(VAR_2);
  VAR_2->match = 1;





  if (VAR_2->if_mib.ifmd_data.ifi_ibytes != 0)
   VAR_2->display = 1;
 }

 FUNC_7();

 return (1);
}
