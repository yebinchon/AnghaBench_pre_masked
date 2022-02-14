
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xilly_endpoint {int dev; } ;


 int FUNC_0 (int ,char*,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct xilly_endpoint *VAR_0, u32 *VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_2 = (VAR_1[0] >> 24) & 0xff;
 VAR_6 = VAR_1[0] & 1;
 VAR_3 = (VAR_1[0] >> 1) & 0x7ff;
 VAR_4 = (VAR_1[0] >> 12) & 0x3ff;
 VAR_5 = VAR_1[1] & 0xfffffff;

 FUNC_0(VAR_0->dev,
   "Malformed message (skipping): opcode=%d, channel=%03x, dir=%d, bufno=%03x, data=%07x\n",
   VAR_2, VAR_3, VAR_6, VAR_4, VAR_5);
}
