
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;

void FUNC_1(unsigned long VAR_0)
{
 unsigned long VAR_1, VAR_2, VAR_3;
 VAR_1 = VAR_0 >> 20;
 VAR_2 = (VAR_0 & 0xFFFFF) >> 10;
 VAR_3 = (VAR_0 & 0x3FF);
 if (VAR_1) FUNC_0("%ld MB", VAR_1);
 if (VAR_1 && VAR_2) FUNC_0(" and ");
 if (VAR_2) FUNC_0("%ld KB", VAR_2);
 if (VAR_2 && VAR_3) FUNC_0(" and ");
 if (VAR_3) FUNC_0("%ld bytes", VAR_3);
}
