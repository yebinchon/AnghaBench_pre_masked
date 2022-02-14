
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static inline unsigned FUNC_1(int VAR_0, int VAR_1)
{
 if (VAR_0&3) goto err;
 VAR_0 = (VAR_0>>2)-2;
 if (VAR_0 < 0)
 {
  if ((VAR_0&(0xFF<<24)) != 0xFF<<24)
   goto err;
  VAR_0 &= ~(0xFF<<24);
 }
 else if (VAR_0&(0xFF<<24))
  goto err;
 return VAR_0;
err:
 FUNC_0("jump %d out of range at %d", VAR_0, VAR_1);
}
