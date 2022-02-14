
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_probe {int registered; int hit; int kprobe; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct test_probe *VAR_0)
{
 int VAR_1;

 if (VAR_0->registered)
  FUNC_0();

 VAR_1 = FUNC_1(&VAR_0->kprobe);
 if (VAR_1 >= 0) {
  VAR_0->registered = 1;
  VAR_0->hit = -1;
 }
 return VAR_1;
}
