
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nps_host_reg_thr_init_sts {scalar_t__ thr_id; scalar_t__ err; scalar_t__ bsy; int value; } ;
struct nps_host_reg_thr_init {scalar_t__ thr_id; int str; scalar_t__ value; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static void FUNC_6(int VAR_0)
{
 int VAR_1, VAR_2 = 5;
 struct nps_host_reg_thr_init VAR_3;
 struct nps_host_reg_thr_init_sts VAR_4;


 VAR_3.value = 0;
 FUNC_4(VAR_3.value, FUNC_0(VAR_0));
 VAR_3.thr_id = FUNC_2(VAR_0);
 VAR_3.str = 1;
 FUNC_4(VAR_3.value, FUNC_0(VAR_0));


 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  VAR_4.value = FUNC_3(FUNC_1(VAR_0));
  if (VAR_4.thr_id == VAR_3.thr_id) {
   if (VAR_4.bsy)
    continue;
   else if (VAR_4.err)
    FUNC_5("Failed to thread init cpu %u\n", VAR_0);
   break;
  }

  FUNC_5("Wrong thread id in thread init for cpu %u\n", VAR_0);
  break;
 }

 if (VAR_1 == VAR_2)
  FUNC_5("Got thread init timeout for cpu %u\n", VAR_0);
}
