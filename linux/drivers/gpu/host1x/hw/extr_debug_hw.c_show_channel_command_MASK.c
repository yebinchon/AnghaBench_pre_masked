
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct output {int dummy; } ;



 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct output*,char*,...) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct output *VAR_3, u32 VAR_4,
      u32 *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = VAR_4 >> 28;

 switch (VAR_9) {
 case 130:
  VAR_6 = VAR_4 & 0x3f;
  if (VAR_6) {
   FUNC_0(VAR_3, "SETCL(class=%03x, offset=%03x, mask=%02x, [",
         VAR_4 >> 6 & 0x3ff,
         VAR_4 >> 16 & 0xfff, VAR_6);
   return FUNC_2(VAR_6);
  }

  FUNC_0(VAR_3, "SETCL(class=%03x)\n", VAR_4 >> 6 & 0x3ff);
  return 0;

 case 137:
  VAR_8 = VAR_4 & 0xffff;
  FUNC_0(VAR_3, "INCR(offset=%03x, [",
        VAR_4 >> 16 & 0xfff);
  if (!VAR_8)
   FUNC_0(VAR_3, "])\n");

  return VAR_8;

 case 134:
  VAR_8 = VAR_4 & 0xffff;
  FUNC_0(VAR_3, "NONINCR(offset=%03x, [",
        VAR_4 >> 16 & 0xfff);
  if (!VAR_8)
   FUNC_0(VAR_3, "])\n");

  return VAR_8;

 case 135:
  VAR_6 = VAR_4 & 0xffff;
  FUNC_0(VAR_3, "MASK(offset=%03x, mask=%03x, [",
        VAR_4 >> 16 & 0xfff, VAR_6);
  if (!VAR_6)
   FUNC_0(VAR_3, "])\n");

  return FUNC_1(VAR_6);

 case 138:
  FUNC_0(VAR_3, "IMM(offset=%03x, data=%03x)\n",
        VAR_4 >> 16 & 0xfff, VAR_4 & 0xffff);
  return 0;

 case 132:
  FUNC_0(VAR_3, "RESTART(offset=%08x)\n", VAR_4 << 4);
  return 0;

 case 140:
  FUNC_0(VAR_3, "GATHER(offset=%03x, insert=%d, type=%d, count=%04x, addr=[",
        VAR_4 >> 16 & 0xfff, VAR_4 >> 15 & 0x1,
        VAR_4 >> 14 & 0x1, VAR_4 & 0x3fff);
  return 1;
 case 141:
  VAR_7 = VAR_4 >> 24 & 0xf;
  if (VAR_7 == VAR_0)
   FUNC_0(VAR_3, "ACQUIRE_MLOCK(index=%d)\n",
         VAR_4 & 0xff);
  else if (VAR_7 == VAR_1)
   FUNC_0(VAR_3, "RELEASE_MLOCK(index=%d)\n",
         VAR_4 & 0xff);
  else
   FUNC_0(VAR_3, "EXTEND_UNKNOWN(%08x)\n", VAR_4);
  return 0;

 default:
  FUNC_0(VAR_3, "UNKNOWN\n");
  return 0;
 }
}
