
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dn_fsk_head {int dummy; } ;
struct dn_fsk {int dummy; } ;


 int FUNC_0 (char*,int,...) ;
 struct dn_fsk* FUNC_1 (struct dn_fsk_head*) ;
 int FUNC_2 (struct dn_fsk_head*,int ) ;
 int FUNC_3 (struct dn_fsk*,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct dn_fsk_head *VAR_1, int VAR_2)
{
 struct dn_fsk *VAR_3;
 int VAR_4 = 0;

 FUNC_0("head %p flags %x", VAR_1, VAR_2);
 while ((VAR_3 = FUNC_1(VAR_1))) {
  FUNC_2(VAR_1, VAR_0);
  VAR_4++;
  FUNC_3(VAR_3, VAR_2);
 }
 FUNC_0("done %d flowsets", VAR_4);
}
