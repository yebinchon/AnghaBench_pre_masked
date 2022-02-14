
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ipack_device {unsigned int id_avail; int * id; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static u16 FUNC_1(struct ipack_device *VAR_0)
{
 u8 VAR_1;
 u16 VAR_2;
 unsigned int VAR_3;

 VAR_2 = 0xffff;
 for (VAR_3 = 0; VAR_3 < VAR_0->id_avail; VAR_3++) {
  VAR_1 = ((VAR_3 != 0x18) && (VAR_3 != 0x19)) ? VAR_0->id[VAR_3] : 0;
  VAR_2 = FUNC_0(VAR_2, VAR_1);
 }
 VAR_2 = ~VAR_2;
 return VAR_2;
}
