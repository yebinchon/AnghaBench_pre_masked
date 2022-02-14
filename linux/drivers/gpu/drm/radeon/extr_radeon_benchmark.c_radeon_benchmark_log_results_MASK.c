
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, unsigned VAR_1,
      unsigned int VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      char *VAR_5)
{
 unsigned int VAR_6 = (VAR_0 * (VAR_1 >> 10)) / VAR_2;
 FUNC_0("radeon: %s %u bo moves of %u kB from"
   " %d to %d in %u ms, throughput: %u Mb/s or %u MB/s\n",
   VAR_5, VAR_0, VAR_1 >> 10, VAR_3, VAR_4, VAR_2,
   VAR_6 * 8, VAR_6);
}
