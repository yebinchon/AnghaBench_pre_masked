
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port {int outvq_full; int outvq_lock; int host_connected; int guest_connected; } ;


 int FUNC_0 (struct port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(struct port *VAR_0)
{
 bool VAR_1;

 if (!VAR_0->guest_connected) {

  return 0;
 }
 if (!VAR_0->host_connected)
  return 1;

 FUNC_1(&VAR_0->outvq_lock);




 FUNC_0(VAR_0);
 VAR_1 = VAR_0->outvq_full;
 FUNC_2(&VAR_0->outvq_lock);

 return VAR_1;
}
