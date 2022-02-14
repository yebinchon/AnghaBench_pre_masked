
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int *,unsigned char) ;

__attribute__((used)) static void FUNC_2 (amb_dev * VAR_3) {
  unsigned char VAR_4;

  FUNC_0 (VAR_0|VAR_1, "drain_rx_pools %p", VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4)
    FUNC_1 (VAR_3, VAR_4);
}
