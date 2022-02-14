
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_pgtable_cfg {int pgsize_bitmap; int oas; int ias; } ;


 int VAR_0 ;
 int VAR_1 ;

 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;

 int const VAR_5 ;

 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 void* FUNC_2 (int,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct io_pgtable_cfg *VAR_6)
{
 unsigned long VAR_7, VAR_8;
 unsigned int VAR_9 = 48;
 if (VAR_6->pgsize_bitmap & VAR_1)
  VAR_7 = VAR_1;
 else if (VAR_6->pgsize_bitmap & ~VAR_0)
  VAR_7 = 1UL << FUNC_1(VAR_6->pgsize_bitmap & ~VAR_0);
 else if (VAR_6->pgsize_bitmap & VAR_0)
  VAR_7 = 1UL << FUNC_0(VAR_6->pgsize_bitmap & VAR_0);
 else
  VAR_7 = 0;

 switch (VAR_7) {
 case 129:
  VAR_8 = (129 | VAR_3 | VAR_2);
  break;
 case 130:
  VAR_8 = (130 | VAR_4);
  break;
 case 128:
  VAR_9 = 52;
  VAR_8 = (128 | VAR_5);
  if (VAR_6->oas > 48)
   VAR_8 |= 1ULL << 42;
  break;
 default:
  VAR_8 = 0;
 }

 VAR_6->pgsize_bitmap &= VAR_8;
 VAR_6->ias = FUNC_2(VAR_6->ias, VAR_9);
 VAR_6->oas = FUNC_2(VAR_6->oas, VAR_9);
}
