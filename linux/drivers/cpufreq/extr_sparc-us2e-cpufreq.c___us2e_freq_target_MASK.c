
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned long FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (int ) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 unsigned int VAR_2 = FUNC_4();
 unsigned int *VAR_3 = VAR_1;
 unsigned long VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_5 = VAR_6 = FUNC_5(VAR_2) / 1000;
 VAR_4 = FUNC_2(*VAR_3);
 VAR_7 = FUNC_1(*VAR_3);
 VAR_5 /= VAR_7;

 VAR_9 = FUNC_3(VAR_0);

 VAR_8 = FUNC_0(VAR_9);

 if (VAR_8 != VAR_7) {
  FUNC_6(VAR_9, VAR_4, VAR_6 * 1000,
    VAR_8, VAR_7);
 }
}
