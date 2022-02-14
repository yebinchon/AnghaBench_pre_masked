
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__,scalar_t__,int *,int *,unsigned char*,int ,int *,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_3 (unsigned char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned char* VAR_5 ;
 unsigned long VAR_6 ;

unsigned long FUNC_4(unsigned long VAR_7,
  unsigned long VAR_8,
  unsigned long VAR_9)
{
 unsigned char *VAR_10;

 VAR_5 = (unsigned char *)VAR_7;
 VAR_2 = VAR_8;
 VAR_1 = VAR_9;

 FUNC_2();

 VAR_10 = (unsigned char *) (((unsigned long)VAR_4) - 4);
 VAR_6 = FUNC_3(VAR_10);

 FUNC_1("Uncompressing Linux...");
 FUNC_0(VAR_3, VAR_4 - VAR_3, ((void*)0), ((void*)0),
   VAR_5, 0, ((void*)0), VAR_0);
 FUNC_1(" done, booting the kernel.\n");
 return VAR_6;
}
