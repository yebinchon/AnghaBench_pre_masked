
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct simdisk {scalar_t__ queue; scalar_t__ gd; } ;
struct proc_dir_entry {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,struct proc_dir_entry*) ;
 int FUNC_3 (struct simdisk*) ;

__attribute__((used)) static void FUNC_4(struct simdisk *VAR_0, int VAR_1,
  struct proc_dir_entry *VAR_2)
{
 char VAR_3[2] = { '0' + VAR_1, 0 };

 FUNC_3(VAR_0);
 if (VAR_0->gd)
  FUNC_1(VAR_0->gd);
 if (VAR_0->queue)
  FUNC_0(VAR_0->queue);
 FUNC_2(VAR_3, VAR_2);
}
