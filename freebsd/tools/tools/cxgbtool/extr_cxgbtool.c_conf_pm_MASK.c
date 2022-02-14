
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ch_pm {int tx_num_pg; int tx_pg_sz; int rx_num_pg; int rx_pg_sz; int pm_total; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*,int ,struct ch_pm*) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (char*,int*,int*) ;
 int FUNC_3 (char*,int,int,int,int,int) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5(int VAR_2, char *VAR_3[], int VAR_4, const char *VAR_5)
{
 struct ch_pm VAR_6;

 if (VAR_2 == VAR_4) {
  if (FUNC_0(VAR_5, VAR_0, &VAR_6) < 0)
   FUNC_1(1, "read pm config");
  FUNC_3("%ux%uKB TX pages, %ux%uKB RX pages, %uKB total memory\n",
         VAR_6.tx_num_pg, VAR_6.tx_pg_sz >> 10, VAR_6.rx_num_pg,
         VAR_6.rx_pg_sz >> 10, VAR_6.pm_total >> 10);
  return 0;
 }

 if (VAR_2 != VAR_4 + 2) return -1;

 if (FUNC_2(VAR_3[VAR_4], &VAR_6.tx_pg_sz, &VAR_6.tx_num_pg)) {
  FUNC_4("bad parameter \"%s\"", VAR_3[VAR_4]);
  return -1;
 }
 if (FUNC_2(VAR_3[VAR_4 + 1], &VAR_6.rx_pg_sz,
        &VAR_6.rx_num_pg)) {
  FUNC_4("bad parameter \"%s\"", VAR_3[VAR_4 + 1]);
  return -1;
 }
 if (FUNC_0(VAR_5, VAR_1, &VAR_6) < 0)
  FUNC_1(1, "pm config");
 return 0;
}
