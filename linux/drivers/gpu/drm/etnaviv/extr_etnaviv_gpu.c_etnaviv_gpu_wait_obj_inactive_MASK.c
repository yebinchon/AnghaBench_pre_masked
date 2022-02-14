
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct etnaviv_gpu {int fence_event; } ;
struct etnaviv_gem_object {int dummy; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct timespec*) ;
 int FUNC_1 (struct etnaviv_gem_object*) ;
 long FUNC_2 (int ,int,unsigned long) ;

int FUNC_3(struct etnaviv_gpu *VAR_3,
 struct etnaviv_gem_object *VAR_4, struct timespec *VAR_5)
{
 unsigned long VAR_6;
 long VAR_7;

 if (!VAR_5)
  return !FUNC_1(VAR_4) ? 0 : -VAR_0;

 VAR_6 = FUNC_0(VAR_5);

 VAR_7 = FUNC_2(VAR_3->fence_event,
            !FUNC_1(VAR_4),
            VAR_6);
 if (VAR_7 > 0)
  return 0;
 else if (VAR_7 == -VAR_1)
  return -VAR_1;
 else
  return -VAR_2;
}
