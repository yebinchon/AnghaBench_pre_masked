
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char*,int ) ;

__attribute__((used)) static int
FUNC_5(void)
{
 int VAR_5;
 int VAR_6 = 0;
 char VAR_7[sizeof "/dev/bpf000"];




 do {
  (void)FUNC_4(VAR_7, "/dev/bpf%d", VAR_6++);
  VAR_5 = FUNC_2(VAR_7, VAR_2);
 } while ((VAR_5 == -1) && (VAR_3 == VAR_0));

 if (VAR_5 == -1) {
  FUNC_1(VAR_1, "%s: %m", VAR_7);
  FUNC_3(VAR_4);
  FUNC_0(1);
 }
 return VAR_5;
}
