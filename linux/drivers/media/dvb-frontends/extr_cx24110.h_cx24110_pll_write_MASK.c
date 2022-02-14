
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int (* write ) (struct dvb_frontend*,int *,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; } ;


 int FUNC_0 (struct dvb_frontend*,int *,int) ;

__attribute__((used)) static inline int FUNC_1(struct dvb_frontend *VAR_0, u32 VAR_1)
{
 u8 VAR_2[] = {
  (u8)((VAR_1 >> 24) & 0xff),
  (u8)((VAR_1 >> 16) & 0xff),
  (u8)((VAR_1 >> 8) & 0xff)
 };

 if (VAR_0->ops.write)
  return VAR_0->ops.write(VAR_0, VAR_2, 3);
 return 0;
}
