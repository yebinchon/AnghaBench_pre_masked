
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mce {int addr; int mcgstatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mce *VAR_4)
{
 int VAR_5 = VAR_1;
 int VAR_6;

 FUNC_1("Uncorrected hardware memory error in user-access at %llx", VAR_4->addr);
 if (!(VAR_4->mcgstatus & VAR_0))
  VAR_5 |= VAR_2;
 VAR_6 = FUNC_0(VAR_4->addr >> VAR_3, VAR_5);
 if (VAR_6)
  FUNC_1("Memory error not recovered");
 else
  FUNC_2(VAR_4->addr >> VAR_3);
 return VAR_6;
}
