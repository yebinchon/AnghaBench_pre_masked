
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct cam_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cam_device*,int ,scalar_t__,int*) ;
 int FUNC_1 (char*,int) ;

uint32_t
FUNC_2(struct cam_device *VAR_3) {
 uint32_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3, 0, VAR_0, &VAR_5);
 VAR_4 |= FUNC_0(VAR_3, 0, VAR_0 + 1, &VAR_5) << 8;
 VAR_4 |= FUNC_0(VAR_3, 0, VAR_0 + 2, &VAR_5) << 16;

 if (VAR_4 < VAR_2 || VAR_4 > VAR_2 + VAR_1) {
  FUNC_1("Bad CIS address: %04X\n", VAR_4);
  VAR_4 = 0;
 }

 return VAR_4;
}
