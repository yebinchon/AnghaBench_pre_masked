
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Info {long* intrcnt; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct Info *VAR_1)
{

 VAR_1->intrcnt = (long *) FUNC_0(VAR_0, sizeof(long));
 if (VAR_1->intrcnt == ((void*)0))
  FUNC_1(2, "out of memory");
}
