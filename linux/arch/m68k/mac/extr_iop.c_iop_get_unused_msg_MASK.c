
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iop_msg {scalar_t__ status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct iop_msg* VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static struct iop_msg *FUNC_2(void)
{
 int VAR_4;
 unsigned long VAR_5;

 FUNC_1(VAR_5);

 for (VAR_4 = 0 ; VAR_4 < VAR_2 ; VAR_4++) {
  if (VAR_3[VAR_4].status == VAR_0) {
   VAR_3[VAR_4].status = VAR_1;
   FUNC_0(VAR_5);
   return &VAR_3[VAR_4];
  }
 }

 FUNC_0(VAR_5);
 return ((void*)0);
}
