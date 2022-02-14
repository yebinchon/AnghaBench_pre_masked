
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {unsigned int len; int flags; int * buf; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *,unsigned int,int ) ;
 int * FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (char*,int ,...) ;

u8 *FUNC_3(struct i2c_msg *VAR_3, unsigned int VAR_4)
{

 if (!VAR_4)
  FUNC_2("DMA buffer for addr=0x%02x with length 0 is bogus\n",
    VAR_3->addr);
 if (VAR_3->len < VAR_4 || VAR_3->len == 0)
  return ((void*)0);

 if (VAR_3->flags & VAR_1)
  return VAR_3->buf;

 FUNC_2("using bounce buffer for addr=0x%02x, len=%d\n",
   VAR_3->addr, VAR_3->len);

 if (VAR_3->flags & VAR_2)
  return FUNC_1(VAR_3->len, VAR_0);
 else
  return FUNC_0(VAR_3->buf, VAR_3->len, VAR_0);
}
