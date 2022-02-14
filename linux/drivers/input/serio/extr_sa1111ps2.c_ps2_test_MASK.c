
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ps2if {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (char*,unsigned int) ;
 unsigned int FUNC_1 (struct ps2if*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ps2if *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8 = 0;

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 if (VAR_7 != VAR_5) {
  FUNC_0("PS/2 interface test failed[1]: %02x\n", VAR_7);
  VAR_8 = -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_6, 0);
 if (VAR_7 != (VAR_4 | VAR_5)) {
  FUNC_0("PS/2 interface test failed[2]: %02x\n", VAR_7);
  VAR_8 = -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 if (VAR_7 != VAR_4) {
  FUNC_0("PS/2 interface test failed[3]: %02x\n", VAR_7);
  VAR_8 = -VAR_0;
 }

 FUNC_2(0, VAR_6->base + VAR_1);

 return VAR_8;
}
