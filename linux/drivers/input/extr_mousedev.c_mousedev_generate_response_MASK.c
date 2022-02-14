
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mousedev_client {int* ps2; int bufsiz; int mode; int buffer; int imexseq; int impsseq; } ;





 int FUNC_0 (struct mousedev_client*,int*) ;

__attribute__((used)) static void FUNC_1(struct mousedev_client *VAR_0,
     int VAR_1)
{
 VAR_0->ps2[0] = 0xfa;

 switch (VAR_1) {

 case 0xeb:
  FUNC_0(VAR_0, &VAR_0->ps2[1]);
  VAR_0->bufsiz++;
  break;

 case 0xf2:
  switch (VAR_0->mode) {
  case 128:
   VAR_0->ps2[1] = 0;
   break;
  case 129:
   VAR_0->ps2[1] = 3;
   break;
  case 130:
   VAR_0->ps2[1] = 4;
   break;
  }
  VAR_0->bufsiz = 2;
  break;

 case 0xe9:
  VAR_0->ps2[1] = 0x60; VAR_0->ps2[2] = 3; VAR_0->ps2[3] = 200;
  VAR_0->bufsiz = 4;
  break;

 case 0xff:
  VAR_0->impsseq = VAR_0->imexseq = 0;
  VAR_0->mode = 128;
  VAR_0->ps2[1] = 0xaa; VAR_0->ps2[2] = 0x00;
  VAR_0->bufsiz = 3;
  break;

 default:
  VAR_0->bufsiz = 1;
  break;
 }
 VAR_0->buffer = VAR_0->bufsiz;
}
