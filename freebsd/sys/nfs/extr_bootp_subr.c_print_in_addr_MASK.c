
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_2(struct in_addr VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = FUNC_0(VAR_0.s_addr);
 FUNC_1("%d.%d.%d.%d",
        VAR_1 >> 24, (VAR_1 >> 16) & 255, (VAR_1 >> 8) & 255, VAR_1 & 255);
}
