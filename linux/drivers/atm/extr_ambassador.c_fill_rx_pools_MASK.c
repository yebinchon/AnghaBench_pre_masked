
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int,char*,int *) ;
 int FUNC_1 (int *,unsigned char,int ) ;

__attribute__((used)) static void FUNC_2 (amb_dev * VAR_4) {
  unsigned char VAR_5;

  FUNC_0 (VAR_0|VAR_1, "fill_rx_pools %p", VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
    FUNC_1 (VAR_4, VAR_5, VAR_2);

  return;
}
