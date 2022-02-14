
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
typedef int uint32_t ;
struct cam_device {int dummy; } ;
typedef int caddr_t ;


 int FUNC_0 (struct cam_device*,int ,int ,int ,int ,int,int,int ) ;

uint32_t
FUNC_1(struct cam_device *VAR_0, uint8_t VAR_1, uint32_t VAR_2, int *VAR_3) {
 uint32_t VAR_4;
 *VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2,
                   0,
               (caddr_t) &VAR_4,
                  sizeof(VAR_4),
                       1,
                    0
  );
 return VAR_4;
}
