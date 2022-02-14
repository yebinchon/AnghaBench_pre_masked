
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct dumpreg {int addr; int type; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,char*,int,int) ;
 int FUNC_2 (struct dumpreg*,int,int,int,int,int) ;

void
FUNC_3(u_int VAR_0, u_int VAR_1, int VAR_2,
 int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 struct dumpreg *VAR_7, *VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = (VAR_1 - VAR_0) / sizeof(uint32_t);
 VAR_7 = (struct dumpreg *) FUNC_0(VAR_10, sizeof(struct dumpreg));
 if (VAR_7 == ((void*)0))
  FUNC_1(-1, "no space for %d register slots (type %d)\n",
      VAR_10, VAR_2);
 VAR_8 = VAR_7;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  VAR_8->addr = VAR_0 + (VAR_9<<2);
  VAR_8->type = VAR_2;
  VAR_8++;
 }
 FUNC_2(VAR_7, VAR_10,
     VAR_3, VAR_4, VAR_5, VAR_6);
}
