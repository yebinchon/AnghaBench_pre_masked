
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct pms7003_frame {int length; scalar_t__* data; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u16 FUNC_0(struct pms7003_frame *VAR_2)
{
 u16 VAR_3 = (VAR_1 >> 8) + (u8)(VAR_1 & 0xff) +
         (VAR_2->length >> 8) + (u8)VAR_2->length;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->length - VAR_0; VAR_4++)
  VAR_3 += VAR_2->data[VAR_4];

 return VAR_3;
}
