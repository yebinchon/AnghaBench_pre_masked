
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hdmi_core_data {int base; int adap; } ;
struct cec_msg {int len; int* msg; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ,struct cec_msg*) ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct hdmi_core_data *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_6->base, VAR_4) & 0xff;


 while (VAR_7 & 0x70) {

  if (!(VAR_7 & 0x80)) {
   struct cec_msg VAR_8 = {};
   unsigned int VAR_9;


   VAR_8.len = VAR_7 & 0xf;
   if (VAR_8.len > VAR_0 - 2)
    VAR_8.len = VAR_0 - 2;
   VAR_8.msg[0] = FUNC_1(VAR_6->base,
         VAR_1);
   VAR_8.msg[1] = FUNC_1(VAR_6->base,
         VAR_2);
   for (VAR_9 = 0; VAR_9 < VAR_8.len; VAR_9++) {
    unsigned int VAR_10 = VAR_5 + VAR_9 * 4;

    VAR_8.msg[2 + VAR_9] =
     FUNC_1(VAR_6->base, VAR_10);
   }
   VAR_8.len += 2;
   FUNC_0(VAR_6->adap, &VAR_8);
  }

  FUNC_2(VAR_6->base, VAR_3, 1);

  while (FUNC_1(VAR_6->base, VAR_3) & 1)
   FUNC_3(1);




  VAR_7 = FUNC_1(VAR_6->base, VAR_4) & 0xff;
 }
}
