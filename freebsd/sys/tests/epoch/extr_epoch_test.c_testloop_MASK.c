
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int *,int ,char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_7(void *VAR_3) {

 FUNC_4(&VAR_2);
 while ((VAR_1 & VAR_0) == 0) {
  FUNC_3(&VAR_2, &VAR_2, 0, "epoch start wait", 0);
  if (VAR_1 & VAR_0)
   goto out;
  FUNC_5(&VAR_2);
  FUNC_1(VAR_3);
  FUNC_6("W", 500);
  FUNC_0(VAR_3);
  FUNC_4(&VAR_2);
 }
 out:
 FUNC_5(&VAR_2);
 FUNC_2();
}
