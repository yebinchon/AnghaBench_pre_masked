
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_notify {int c; int count; int wc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1, void *VAR_2)
{
 struct io_notify *VAR_3 = VAR_2;

 if (FUNC_4(VAR_1 != 0))
  FUNC_5(VAR_3->wc, -VAR_0, "error writing metadata");
 FUNC_0(FUNC_2(&VAR_3->count) <= 0);
 if (FUNC_1(&VAR_3->count))
  FUNC_3(&VAR_3->c);
}
