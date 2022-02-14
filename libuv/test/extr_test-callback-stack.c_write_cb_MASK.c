
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_write_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(uv_write_t* VAR_4, int VAR_5) {
  int VAR_6;

  FUNC_0(VAR_5 == 0);
  FUNC_0(VAR_0 == 0 && "write_cb must be called from a fresh stack");

  FUNC_1("Data written. 500ms timeout...");





  VAR_0++;
  VAR_6 = FUNC_3(FUNC_2(), &VAR_1);
  FUNC_0(VAR_6 == 0);
  VAR_6 = FUNC_4(&VAR_1, VAR_2, 500, 0);
  FUNC_0(VAR_6 == 0);
  VAR_0--;

  VAR_3++;
}
