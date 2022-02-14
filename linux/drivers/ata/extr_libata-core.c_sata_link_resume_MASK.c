
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ata_link {int flags; int ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_link*,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ata_link*,unsigned long const*,unsigned long) ;
 int FUNC_3 (struct ata_link*,int ,int*) ;
 int FUNC_4 (struct ata_link*,int ,int) ;

int FUNC_5(struct ata_link *VAR_5, const unsigned long *VAR_6,
       unsigned long VAR_7)
{
 int VAR_8 = VAR_1;
 u32 VAR_9, VAR_10;
 int VAR_11;

 if ((VAR_11 = FUNC_3(VAR_5, VAR_3, &VAR_9)))
  return VAR_11;






 do {
  VAR_9 = (VAR_9 & 0x0f0) | 0x300;
  if ((VAR_11 = FUNC_4(VAR_5, VAR_3, VAR_9)))
   return VAR_11;





  if (!(VAR_5->flags & VAR_0))
   FUNC_1(VAR_5->ap, 200);


  if ((VAR_11 = FUNC_3(VAR_5, VAR_3, &VAR_9)))
   return VAR_11;
 } while ((VAR_9 & 0xf0f) != 0x300 && --VAR_8);

 if ((VAR_9 & 0xf0f) != 0x300) {
  FUNC_0(VAR_5, "failed to resume link (SControl %X)\n",
        VAR_9);
  return 0;
 }

 if (VAR_8 < VAR_1)
  FUNC_0(VAR_5, "link resume succeeded after %d retries\n",
         VAR_1 - VAR_8);

 if ((VAR_11 = FUNC_2(VAR_5, VAR_6, VAR_7)))
  return VAR_11;


 if (!(VAR_11 = FUNC_3(VAR_5, VAR_4, &VAR_10)))
  VAR_11 = FUNC_4(VAR_5, VAR_4, VAR_10);

 return VAR_11 != -VAR_2 ? VAR_11 : 0;
}
