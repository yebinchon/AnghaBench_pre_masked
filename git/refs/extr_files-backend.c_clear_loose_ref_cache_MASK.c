
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct files_ref_store {int * loose; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct files_ref_store *VAR_0)
{
 if (VAR_0->loose) {
  FUNC_0(VAR_0->loose);
  VAR_0->loose = ((void*)0);
 }
}
