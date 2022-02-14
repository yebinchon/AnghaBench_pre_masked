
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ufs1_daddr_t ;
typedef int u_int ;
typedef int u_char ;
struct fs {int fs_contigsumsize; int* fs_maxcluster; } ;
struct cg {int cg_nclusterblks; size_t cg_cgx; } ;
typedef int int32_t ;


 int VAR_0 ;
 int * FUNC_0 (struct cg*) ;
 int* FUNC_1 (struct cg*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

void
FUNC_4(struct fs *VAR_1, struct cg *VAR_2, ufs1_daddr_t VAR_3, int VAR_4)
{
 int32_t *VAR_5;
 int32_t *VAR_6;
 u_char *VAR_7, *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
 u_int VAR_15;

 if (VAR_1->fs_contigsumsize <= 0)
  return;
 VAR_7 = FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_2);



 if (VAR_4 > 0)
  FUNC_3(VAR_7, VAR_3);
 else
  FUNC_2(VAR_7, VAR_3);



 VAR_10 = VAR_3 + 1;
 VAR_11 = VAR_10 + VAR_1->fs_contigsumsize;
 if (VAR_11 >= VAR_2->cg_nclusterblks)
  VAR_11 = VAR_2->cg_nclusterblks;
 VAR_8 = &VAR_7[VAR_10 / VAR_0];
 VAR_14 = *VAR_8++;
 VAR_15 = 1U << (VAR_10 % VAR_0);
 for (VAR_9 = VAR_10; VAR_9 < VAR_11; VAR_9++) {
  if ((VAR_14 & VAR_15) == 0)
   break;
  if ((VAR_9 & (VAR_0 - 1)) != (VAR_0 - 1)) {
   VAR_15 <<= 1;
  } else {
   VAR_14 = *VAR_8++;
   VAR_15 = 1;
  }
 }
 VAR_12 = VAR_9 - VAR_10;



 VAR_10 = VAR_3 - 1;
 VAR_11 = VAR_10 - VAR_1->fs_contigsumsize;
 if (VAR_11 < 0)
  VAR_11 = -1;
 VAR_8 = &VAR_7[VAR_10 / VAR_0];
 VAR_14 = *VAR_8--;
 VAR_15 = 1U << (VAR_10 % VAR_0);
 for (VAR_9 = VAR_10; VAR_9 > VAR_11; VAR_9--) {
  if ((VAR_14 & VAR_15) == 0)
   break;
  if ((VAR_9 & (VAR_0 - 1)) != 0) {
   VAR_15 >>= 1;
  } else {
   VAR_14 = *VAR_8--;
   VAR_15 = 1U << (VAR_0 - 1);
  }
 }
 VAR_13 = VAR_10 - VAR_9;




 VAR_9 = VAR_13 + VAR_12 + 1;
 if (VAR_9 > VAR_1->fs_contigsumsize)
  VAR_9 = VAR_1->fs_contigsumsize;
 VAR_5[VAR_9] += VAR_4;
 if (VAR_13 > 0)
  VAR_5[VAR_13] -= VAR_4;
 if (VAR_12 > 0)
  VAR_5[VAR_12] -= VAR_4;



 VAR_6 = &VAR_5[VAR_1->fs_contigsumsize];
 for (VAR_9 = VAR_1->fs_contigsumsize; VAR_9 > 0; VAR_9--)
  if (*VAR_6-- > 0)
   break;
 VAR_1->fs_maxcluster[VAR_2->cg_cgx] = VAR_9;
}
