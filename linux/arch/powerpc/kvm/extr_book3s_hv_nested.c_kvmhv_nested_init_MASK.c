
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patb_entry {int dummy; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 long FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (char*,...) ;
 int * VAR_6 ;
 int FUNC_7 () ;

long FUNC_8(void)
{
 long int VAR_7;
 unsigned long VAR_8;
 long VAR_9;

 if (!FUNC_4())
  return 0;
 if (!FUNC_7())
  return -VAR_0;


 VAR_7 = FUNC_0(VAR_5 - 1) + 1;
 if (VAR_7 < 8)
  VAR_7 = 8;
 VAR_6 = FUNC_3(sizeof(struct patb_entry) << VAR_7,
           VAR_2);
 if (!VAR_6) {
  FUNC_6("kvm-hv: failed to allocated nested partition table\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_1(VAR_6) | (VAR_7 - 8);
 VAR_9 = FUNC_5(VAR_3, VAR_8);
 if (VAR_9 != VAR_4) {
  FUNC_6("kvm-hv: Parent hypervisor does not support nesting (rc=%ld)\n",
         VAR_9);
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
