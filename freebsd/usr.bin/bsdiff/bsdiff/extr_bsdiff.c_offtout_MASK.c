
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int off_t ;



__attribute__((used)) static void FUNC_0(off_t VAR_0,u_char *VAR_1)
{
 off_t VAR_2;

 if(VAR_0<0) VAR_2=-VAR_0; else VAR_2=VAR_0;

  VAR_1[0]=VAR_2%256;VAR_2-=VAR_1[0];
 VAR_2=VAR_2/256;VAR_1[1]=VAR_2%256;VAR_2-=VAR_1[1];
 VAR_2=VAR_2/256;VAR_1[2]=VAR_2%256;VAR_2-=VAR_1[2];
 VAR_2=VAR_2/256;VAR_1[3]=VAR_2%256;VAR_2-=VAR_1[3];
 VAR_2=VAR_2/256;VAR_1[4]=VAR_2%256;VAR_2-=VAR_1[4];
 VAR_2=VAR_2/256;VAR_1[5]=VAR_2%256;VAR_2-=VAR_1[5];
 VAR_2=VAR_2/256;VAR_1[6]=VAR_2%256;VAR_2-=VAR_1[6];
 VAR_2=VAR_2/256;VAR_1[7]=VAR_2%256;

 if(VAR_0<0) VAR_1[7]|=0x80;
}
