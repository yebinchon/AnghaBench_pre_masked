
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 () ;

__attribute__((used)) static unsigned long FUNC_5(unsigned long VAR_2,
        unsigned long VAR_3)
{

 if (VAR_1) {
  FUNC_1("Aborted memory entries scan (more than 4 memmap= args)!\n");
  return 0;
 }


 VAR_2 = FUNC_0(VAR_2, VAR_0);

 if (FUNC_3(VAR_2, VAR_3))
  return FUNC_4();

 FUNC_2(VAR_2, VAR_3);
 return FUNC_4();
}
