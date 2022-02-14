
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vm_guest_paging {int cr3; int paging_mode; int cpu_mode; scalar_t__ cpl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int,int ,int const*,int*) ;

__attribute__((used)) static int
FUNC_2(int VAR_17, struct vm_guest_paging *VAR_18)
{
 uint64_t VAR_19[4];
 const int VAR_20[4] = {
  VAR_12,
  VAR_13,
  VAR_14,
  VAR_15
 };

 if (FUNC_1(VAR_16, VAR_17, FUNC_0(VAR_20), VAR_20, VAR_19) == -1)
  return (-1);






 VAR_18->cr3 = VAR_19[1];
 VAR_18->cpl = 0;
 if (VAR_19[3] & VAR_6)
  VAR_18->cpu_mode = VAR_0;
 else if (VAR_19[0] & VAR_3)
  VAR_18->cpu_mode = VAR_1;
 else
  VAR_18->cpu_mode = VAR_2;
 if (!(VAR_19[0] & VAR_4))
  VAR_18->paging_mode = VAR_10;
 else if (!(VAR_19[2] & VAR_5))
  VAR_18->paging_mode = VAR_8;
 else if (VAR_19[3] & VAR_7)
  VAR_18->paging_mode = VAR_9;
 else
  VAR_18->paging_mode = VAR_11;
 return (0);
}
