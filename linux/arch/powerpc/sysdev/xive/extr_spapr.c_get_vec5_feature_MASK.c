
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 unsigned long VAR_0 ;
 int * FUNC_0 (unsigned long,char*,int*) ;
 unsigned long FUNC_1 () ;
 unsigned long FUNC_2 (unsigned long,char*) ;

__attribute__((used)) static const u8 *FUNC_3(unsigned int VAR_1)
{
 unsigned long VAR_2, VAR_3;
 int VAR_4;
 const u8 *VAR_5;

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_2(VAR_2, "chosen");
 if (VAR_3 == -VAR_0)
  return ((void*)0);

 VAR_5 = FUNC_0(VAR_3, "ibm,architecture-vec-5", &VAR_4);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_4 <= VAR_1)
  return ((void*)0);

 return VAR_5 + VAR_1;
}
