
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ka ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ,int*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{
 int VAR_5 = 1;

 if (FUNC_1(VAR_4, VAR_1, VAR_2, &VAR_5, sizeof(VAR_5)) < 0) {
  if (VAR_3 != VAR_0)
   FUNC_0("unable to set SO_KEEPALIVE on socket: %s",
    FUNC_2(VAR_3));
 }
}
