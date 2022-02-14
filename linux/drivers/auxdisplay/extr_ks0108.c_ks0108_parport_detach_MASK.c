
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {scalar_t__ base; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static void FUNC_3(struct parport *VAR_4)
{
 if (VAR_4->base != VAR_3)
  return;

 if (!VAR_1) {
  FUNC_2("%s: already unregistered.\n", VAR_0);
  return;
 }

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 VAR_1 = ((void*)0);
 VAR_2 = ((void*)0);
}
