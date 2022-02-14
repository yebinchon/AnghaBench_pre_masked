
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ata_ering_entry {int eflags; scalar_t__ timestamp; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ata_ering_entry *VAR_2, void *VAR_3)
{
 u64 VAR_4 = FUNC_2(VAR_1);
 u64 VAR_5 = FUNC_0();
 int *VAR_6 = VAR_3;

 if ((VAR_2->eflags & VAR_0) ||
     (VAR_2->timestamp < VAR_5 - FUNC_1(VAR_5, VAR_4)))
  return -1;

 (*VAR_6)++;
 return 0;
}
