
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct inode {int i_fs; } ;
struct indir {int in_lbn; int in_off; } ;
typedef int int64_t ;
typedef int daddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

int
FUNC_3(struct inode *VAR_3, daddr_t VAR_4, struct indir *VAR_5, int *VAR_6)
{
 daddr_t VAR_7, VAR_8;
 int64_t VAR_9;
 int VAR_10;
 int VAR_11, VAR_12, VAR_13;
 u_long VAR_14;

 VAR_14 = FUNC_2(FUNC_0(VAR_3->i_fs)) - 1;
 if (VAR_6)
  *VAR_6 = 0;
 VAR_12 = 0;
 VAR_8 = VAR_4;
 if ((long)VAR_4 < 0)
  VAR_4 = -(long)VAR_4;

 FUNC_1 (VAR_4 >= VAR_1);
 VAR_4 -= VAR_1;
 for (VAR_10 = 0, VAR_11 = VAR_2;; VAR_11--, VAR_4 -= VAR_9) {
  if (VAR_11 == 0)
   return (VAR_0);

  VAR_10 += VAR_14;
  VAR_9 = (int64_t)1 << VAR_10;

  if (VAR_4 < VAR_9)
   break;
 }


 if (VAR_8 >= 0)
  VAR_7 = -(VAR_8 - VAR_4 + VAR_2 - VAR_11);
 else
  VAR_7 = -(-VAR_8 - VAR_4 + VAR_2 - VAR_11);







 VAR_5->in_lbn = VAR_7;
 VAR_5->in_off = VAR_13 = VAR_2 - VAR_11;
 VAR_5++;
 for (++VAR_12; VAR_11 <= VAR_2; VAR_11++) {

  if (VAR_7 == VAR_8)
   break;

  VAR_10 -= VAR_14;
  VAR_9 = (int64_t)1 << VAR_10;
  VAR_13 = (VAR_4 >> VAR_10) & (FUNC_0(VAR_3->i_fs) - 1);

  ++VAR_12;
  VAR_5->in_lbn = VAR_7;
  VAR_5->in_off = VAR_13;
  ++VAR_5;

  VAR_7 -= -1 + (VAR_13 << VAR_10);
 }
 if (VAR_6)
  *VAR_6 = VAR_12;
 return (0);
}
