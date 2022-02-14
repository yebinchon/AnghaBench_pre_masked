
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct salinfo_data {int read_wait; int cpu_event; } ;


 unsigned int FUNC_0 (struct salinfo_data*) ;
 int FUNC_1 (unsigned int,int *) ;
 int VAR_0 ;
 struct salinfo_data* VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4 = FUNC_0(VAR_1);
 struct salinfo_data *VAR_5;

 FUNC_2(&VAR_0);
 for (VAR_3 = 0, VAR_5 = VAR_1; VAR_3 < VAR_4; ++VAR_3, ++VAR_5) {
  FUNC_1(VAR_2, &VAR_5->cpu_event);
  FUNC_4(&VAR_5->read_wait);
 }
 FUNC_3(&VAR_0);
 return 0;
}
