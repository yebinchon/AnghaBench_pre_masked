
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long,unsigned long,int) ;

__attribute__((used)) static int FUNC_4(unsigned long VAR_7, unsigned long VAR_8,
        unsigned long VAR_9, int VAR_10)
{
 unsigned long *VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_11 = (unsigned long *) VAR_7;
 VAR_11 += (VAR_8 & VAR_2) >> VAR_3;
 do {
  VAR_12 = FUNC_2(VAR_8, VAR_9);
  if (*VAR_11 & VAR_5) {
   if (!VAR_10)
    continue;
   VAR_13 = FUNC_0(VAR_4);
   if (!VAR_13)
    return -VAR_0;
   *VAR_11 = VAR_13 | VAR_1;
  }
  VAR_13 = *VAR_11 & VAR_6;
  VAR_14 = FUNC_3(VAR_13, VAR_8, VAR_12, VAR_10);
  if (VAR_14)
   return VAR_14;
  if (!VAR_10)
   FUNC_1(VAR_13);
 } while (VAR_11++, VAR_8 = VAR_12, VAR_8 < VAR_9);
 return 0;
}
