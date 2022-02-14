
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ata_taskfile {int protocol; int flags; int ctl; } ;
typedef int dma_addr_t ;
typedef scalar_t__ __le32 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_2(struct ata_taskfile *VAR_8,
       dma_addr_t VAR_9,
       unsigned int VAR_10, u8 *VAR_11)
{
 u8 VAR_12;
 __le32 *VAR_13 = (__le32 *) VAR_11;




 switch (VAR_8->protocol) {
 case 129:
  if (!(VAR_8->flags & VAR_3))
   VAR_13[0] = FUNC_1(VAR_6);
  else
   VAR_13[0] = 0;
  break;

 case 128:
  VAR_13[0] = FUNC_1(VAR_5);
  break;

 default:
  FUNC_0();
  break;
 }

 VAR_13[1] = FUNC_1(VAR_9);
 VAR_13[2] = 0;

 if (VAR_10 == 0)
  VAR_12 = VAR_1;
 else
  VAR_12 = VAR_1 | VAR_0;


 VAR_11[12] = (1 << 5) | VAR_4 | VAR_2;
 VAR_11[13] = VAR_12;


 VAR_11[14] = (1 << 5) | VAR_7;
 VAR_11[15] = VAR_8->ctl;

 return 16;
}
