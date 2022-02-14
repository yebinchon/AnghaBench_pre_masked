
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_hid {scalar_t__ bufsize; int * argsbuf; int * cmdbuf; int * rawbuf; int * inbuf; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct i2c_hid *VAR_0)
{
 FUNC_0(VAR_0->inbuf);
 FUNC_0(VAR_0->rawbuf);
 FUNC_0(VAR_0->argsbuf);
 FUNC_0(VAR_0->cmdbuf);
 VAR_0->inbuf = ((void*)0);
 VAR_0->rawbuf = ((void*)0);
 VAR_0->cmdbuf = ((void*)0);
 VAR_0->argsbuf = ((void*)0);
 VAR_0->bufsize = 0;
}
