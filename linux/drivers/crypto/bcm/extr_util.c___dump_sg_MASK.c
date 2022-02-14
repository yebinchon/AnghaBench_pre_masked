
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int ,int,int,int *,unsigned int,int) ;
 int FUNC_2 (struct scatterlist*,int *,unsigned int,unsigned int) ;

void FUNC_3(struct scatterlist *VAR_4, unsigned int VAR_5, unsigned int VAR_6)
{
 u8 VAR_7[16];
 unsigned int VAR_8 = VAR_5;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;

 if (VAR_3) {
  while (VAR_9 < VAR_6) {
   VAR_10 = (VAR_6 - VAR_9 > 16) ? 16 : VAR_6 - VAR_9;
   FUNC_2(VAR_4, VAR_7, VAR_10, VAR_8);
   VAR_9 += VAR_10;
   FUNC_1(VAR_1, "  sg: ", VAR_0,
           4, 1, VAR_7, VAR_10, 0);
   VAR_8 += 16;
  }
 }
 if (VAR_2)
  FUNC_0(VAR_2);
}
