
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_msg {int msg; int bits; } ;



__attribute__((used)) static void FUNC_0(struct fsi_msg *VAR_0)
{

 VAR_0->msg <<= (64 - VAR_0->bits);
}
