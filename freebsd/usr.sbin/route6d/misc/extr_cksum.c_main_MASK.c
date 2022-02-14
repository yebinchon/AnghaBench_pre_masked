
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (char*,int*) ;

FUNC_2()
{
 int VAR_2;
 unsigned short *VAR_3 = VAR_1, *VAR_4 = &VAR_1[4];
 unsigned long VAR_5, VAR_6;

 while (FUNC_1("%x", &VAR_2) != VAR_0) {
  *VAR_3++ = VAR_2; FUNC_0("%d ", VAR_2);
 }
 FUNC_0("\n");

 VAR_5 = VAR_1[2] + (VAR_1[3] >> 8) & 0xff;
 while (VAR_4 != VAR_3)
  VAR_5 += (*VAR_4++ & 0xffff);
 VAR_6 = (VAR_5 & 0xffff) + (VAR_5 >> 16) & 0xffff;
 FUNC_0("%x, %x\n", VAR_5, VAR_6);
}
