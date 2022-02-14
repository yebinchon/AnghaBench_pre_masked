
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct vio_dev {int dummy; } ;


 int FUNC_0 (struct vio_dev*,int) ;

__attribute__((used)) static int FUNC_1(struct vio_dev *VAR_0,
  u8 VAR_1, u8 VAR_2, u16 VAR_3, u32 VAR_4)
{
 u64 VAR_5 = ((u64)VAR_1 << 56) | ((u64)VAR_2 << 48) | ((u64)VAR_3 << 32) |
  (u64)VAR_4;
 return FUNC_0(VAR_0, VAR_5);
}
