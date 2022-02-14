
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vas_window {int * paste_addr_name; int * paste_kaddr; } ;


 int FUNC_0 (struct vas_window*,int *,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vas_window *VAR_0)
{
 int VAR_1;
 u64 VAR_2;

 if (VAR_0->paste_kaddr) {
  FUNC_0(VAR_0, &VAR_2, &VAR_1);
  FUNC_2(VAR_0->paste_kaddr, VAR_2, VAR_1);
  VAR_0->paste_kaddr = ((void*)0);
  FUNC_1(VAR_0->paste_addr_name);
  VAR_0->paste_addr_name = ((void*)0);
 }
}
