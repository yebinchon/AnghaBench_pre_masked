
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lima_ip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lima_ip*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

int FUNC_3(struct lima_ip *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 FUNC_2(VAR_0, 0);




 FUNC_2(VAR_3, 0xffff);


 VAR_6 = FUNC_1(VAR_2);


 if (VAR_6) {
  FUNC_2(VAR_1, VAR_6);
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5)
   return VAR_5;
 }
 return 0;
}
