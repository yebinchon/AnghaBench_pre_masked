
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,unsigned long,int ,int ,void*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (void*) ;
 unsigned int FUNC_3 (void*) ;
 scalar_t__ VAR_8 ;
 unsigned long VAR_9 ;
 unsigned int FUNC_4 (void*) ;
 int FUNC_5 (void*,int ,unsigned int) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (char*) ;

void FUNC_8(unsigned long VAR_10)
{
 unsigned long VAR_11, VAR_12;

 VAR_11 = (unsigned long)(&VAR_5);
 VAR_12 = (unsigned long)(&VAR_6) -
     (unsigned long)(&VAR_5);

 FUNC_7("zimage at:     ");
 FUNC_6(VAR_11);
 FUNC_7(" ");
 FUNC_6(VAR_12 + VAR_11);
 FUNC_7("\n");


 VAR_9 = VAR_10;
 VAR_8 = VAR_10 + VAR_0;


 FUNC_7("Uncompressing Linux at load address ");
 FUNC_6(VAR_3);
 FUNC_7("\n");


 FUNC_1((char *)VAR_11, VAR_12, 0, 0,
     (void *)VAR_3, 0, 0, VAR_7);

 if (FUNC_0(VAR_1) &&
     FUNC_2((void *)&VAR_4) == VAR_2) {
  unsigned int VAR_13, VAR_14;

  VAR_14 = FUNC_3((void *)&VAR_4);


  VAR_13 = FUNC_4((void *)&VAR_6 - 4);


  FUNC_5((void *)VAR_3 + VAR_13,
         VAR_4, VAR_14);
 }


 FUNC_7("Now, booting the kernel...\n");
}
