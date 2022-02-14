
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {char* comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (char*,char const*,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_2(u8 VAR_4, u8 VAR_5, unsigned int VAR_6,
  unsigned int VAR_7, bool VAR_8, bool VAR_9)
{
 u8 VAR_10 = VAR_4 ^ VAR_5;
 u8 VAR_11 = VAR_5 | FUNC_0(VAR_7, VAR_9);
 const char *VAR_12 = VAR_3->comm;

 if (VAR_8)
  FUNC_1("%s: srcbuf[0x%x] overwritten! Expected %02x, got %02x\n",
   VAR_12, VAR_6, VAR_11, VAR_4);
 else if ((VAR_5 & VAR_0)
   && (VAR_10 & (VAR_0 | VAR_1)))
  FUNC_1("%s: dstbuf[0x%x] not copied! Expected %02x, got %02x\n",
   VAR_12, VAR_6, VAR_11, VAR_4);
 else if (VAR_10 & VAR_2)
  FUNC_1("%s: dstbuf[0x%x] was copied! Expected %02x, got %02x\n",
   VAR_12, VAR_6, VAR_11, VAR_4);
 else
  FUNC_1("%s: dstbuf[0x%x] mismatch! Expected %02x, got %02x\n",
   VAR_12, VAR_6, VAR_11, VAR_4);
}
