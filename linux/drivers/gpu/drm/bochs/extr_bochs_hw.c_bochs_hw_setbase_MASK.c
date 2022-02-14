
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bochs_device {int stride; int bpp; } ;


 int FUNC_0 (char*,int,int,scalar_t__,unsigned long,unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bochs_device*,int ,unsigned int) ;

void FUNC_2(struct bochs_device *VAR_3,
        int VAR_4, int VAR_5, int VAR_6, u64 VAR_7)
{
 unsigned long VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11;

 VAR_3->stride = VAR_6;
 VAR_8 = (unsigned long)VAR_7 +
  VAR_5 * VAR_3->stride +
  VAR_4 * (VAR_3->bpp / 8);
 VAR_10 = VAR_8 / VAR_3->stride;
 VAR_9 = (VAR_8 % VAR_3->stride) * 8 / VAR_3->bpp;
 VAR_11 = VAR_6 * 8 / VAR_3->bpp;

 FUNC_0("x %d, y %d, addr %llx -> offset %lx, vx %d, vy %d\n",
    VAR_4, VAR_5, VAR_7, VAR_8, VAR_9, VAR_10);
 FUNC_1(VAR_3, VAR_0, VAR_11);
 FUNC_1(VAR_3, VAR_1, VAR_9);
 FUNC_1(VAR_3, VAR_2, VAR_10);
}
