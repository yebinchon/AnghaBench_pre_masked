
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef int u16 ;
struct scatterlist {int length; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (struct scatterlist*,int,int,int) ;
 int FUNC_1 (int,int,struct scatterlist**,struct scatterlist*,int) ;
 int FUNC_2 (int,int,struct scatterlist**,struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,int ,int ) ;
 int FUNC_4 (struct scatterlist*) ;

int FUNC_5(struct scatterlist **VAR_7, int VAR_8, int VAR_9,
    struct scatterlist *VAR_10, u16 VAR_11,
    u8 VAR_12, unsigned long *VAR_13)
{
 int VAR_14;

 *VAR_13 &= ~(VAR_1 << VAR_12);

 if (VAR_11 & VAR_3)
  VAR_14 = VAR_5;
 else
  VAR_14 = FUNC_0(*VAR_7, VAR_8, VAR_9, VAR_11);

 if (VAR_14 == VAR_5) {
  VAR_14 = FUNC_2(VAR_8, VAR_9, VAR_7, VAR_10, VAR_11);
  if (VAR_14)
   return VAR_14;
  *VAR_13 |= VAR_2 << VAR_12;
 } else if (VAR_14 == VAR_0) {
  VAR_14 = FUNC_1(VAR_8, VAR_9, VAR_7, VAR_10, VAR_11);
  if (VAR_14)
   return VAR_14;
  if (!(VAR_11 & VAR_4))
   *VAR_13 |= VAR_6 << VAR_12;
 } else if (VAR_11 & VAR_4) {
  FUNC_3(VAR_10, FUNC_4(*VAR_7), (*VAR_7)->length);
 }

 return 0;
}
