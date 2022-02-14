
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scatterlist {int length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct scatterlist* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct scatterlist*,int) ;
 int FUNC_2 (struct scatterlist*) ;
 int FUNC_3 (struct scatterlist*) ;
 struct scatterlist* FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*) ;
 int FUNC_6 (struct scatterlist*,int ,int,int ) ;

__attribute__((used)) static int FUNC_7(int VAR_3, int VAR_4,
         struct scatterlist **VAR_5,
         struct scatterlist *VAR_6, u16 VAR_7)
{
 int VAR_8 = FUNC_3(*VAR_5);
 struct scatterlist *VAR_9;

 if (!(VAR_7 & VAR_2)) {
  VAR_6 = FUNC_0(VAR_8, sizeof(*VAR_5), VAR_1);
  if (!VAR_6)
   return -VAR_0;

  FUNC_1(VAR_6, VAR_8);
 }

 VAR_9 = VAR_6;

 while (*VAR_5 && VAR_3) {
  int VAR_10 = (*VAR_5)->length;

  if (VAR_3 < VAR_10)
   VAR_10 = VAR_3;

  if (VAR_10 > 0) {
   VAR_3 -= VAR_10;
   FUNC_6(VAR_9, FUNC_5(*VAR_5), VAR_10, (*VAR_5)->offset);
   if (VAR_3 <= 0)
    FUNC_2(VAR_9);
   VAR_9 = FUNC_4(VAR_9);
  }

  *VAR_5 = FUNC_4(*VAR_5);
 }

 *VAR_5 = VAR_6;

 return 0;
}
