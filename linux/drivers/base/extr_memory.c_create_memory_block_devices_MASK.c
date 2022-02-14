
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memory_block {scalar_t__ section_count; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int ) ;
 int VAR_1 ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (int) ;
 struct memory_block* FUNC_3 (unsigned long) ;
 int FUNC_4 (struct memory_block**,unsigned long,int ) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (struct memory_block*) ;

int FUNC_10(unsigned long VAR_4, unsigned long VAR_5)
{
 const unsigned long VAR_6 = FUNC_8(FUNC_1(VAR_4));
 unsigned long VAR_7 = FUNC_8(FUNC_1(VAR_4 + VAR_5));
 struct memory_block *VAR_8;
 unsigned long VAR_9;
 int VAR_10 = 0;

 if (FUNC_2(!FUNC_0(VAR_4, FUNC_5()) ||
    !FUNC_0(VAR_5, FUNC_5())))
  return -VAR_0;

 FUNC_6(&VAR_2);
 for (VAR_9 = VAR_6; VAR_9 != VAR_7; VAR_9++) {
  VAR_10 = FUNC_4(&VAR_8, VAR_9, VAR_1);
  if (VAR_10)
   break;
  VAR_8->section_count = VAR_3;
 }
 if (VAR_10) {
  VAR_7 = VAR_9;
  for (VAR_9 = VAR_6; VAR_9 != VAR_7;
       VAR_9++) {
   VAR_8 = FUNC_3(VAR_9);
   VAR_8->section_count = 0;
   FUNC_9(VAR_8);
  }
 }
 FUNC_7(&VAR_2);
 return VAR_10;
}
