
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revmap_entry {int guest_rpte; } ;
typedef int __be64 ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct revmap_entry *VAR_4, __be64 *VAR_5)
{
 unsigned long VAR_6;

 if (VAR_4->guest_rpte & VAR_0)
  return 1;


 VAR_6 = ~VAR_4->guest_rpte & (VAR_2 | VAR_1);
 if ((FUNC_0(VAR_5[0]) & VAR_3) &&
     (FUNC_0(VAR_5[1]) & VAR_6))
  return 1;

 return 0;
}
