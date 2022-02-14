
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned VAR_1, unsigned VAR_2)
{
 if (VAR_1 != VAR_2) {
  FUNC_0("Message received with %u arguments instead of %u.",
         VAR_1, VAR_2);
  return -VAR_0;
 }

 return 0;
}
